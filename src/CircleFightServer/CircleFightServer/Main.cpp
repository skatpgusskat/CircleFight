#include "stdafx.h"
#include "main.h"

#include "Config.h"	
#include "packet_type.pb.h"

#include "Exception.h"
#include "client_session.h"
#include "client_manager.h"
#include "object_manager.h"
#include "event_manager.h"
#pragma comment(lib,"ws2_32.lib")



SOCKET g_AcceptedSocket = NULL ;

__declspec(thread) int LThreadType = -1 ;


int _tmain(int argc, _TCHAR* argv[])
{
	/// Policy Server
	STARTUPINFO si = {0,};
	PROCESS_INFORMATION pi = {0,};
	si.cb = sizeof(si);
	wchar_t params[255] = L"sockpol.exe --all";
	if( false == CreateProcess(NULL,params,NULL,NULL,false,0,NULL,NULL,&si,&pi) )
		return -1;

	LThreadType = THREAD_MAIN ;

	/// Manager Init
	g_client_manager = new ClientManager ;
	g_object_manager = new ObjectManager();
	g_event_manager = new EventManager();

	/// 윈속 초기화
	WSADATA wsa ;
	if (WSAStartup(MAKEWORD(2,2), &wsa) != 0)
		return -1 ;

	SOCKET listenSocket = socket(AF_INET, SOCK_STREAM, 0) ;
	if (listenSocket == INVALID_SOCKET)
		return -1 ;

	int opt = 1 ;
	::setsockopt(listenSocket, SOL_SOCKET, SO_REUSEADDR, (const char*)&opt, sizeof(int) ) ;

	/// bind
	SOCKADDR_IN serveraddr ;
	ZeroMemory(&serveraddr, sizeof(serveraddr)) ;
	serveraddr.sin_family = AF_INET ;
	serveraddr.sin_port = htons(LISTEN_PORT) ;
	serveraddr.sin_addr.s_addr = htonl(INADDR_ANY) ;
	int ret = bind(listenSocket, (SOCKADDR*)&serveraddr, sizeof(serveraddr)) ;
	if (ret == SOCKET_ERROR)
		return -1 ;
	
	/// listen
	ret = listen(listenSocket, SOMAXCONN) ;
	if (ret == SOCKET_ERROR)
		return -1 ;

	/// auto-reset event
	HANDLE hEvent = CreateEvent(NULL, FALSE, FALSE, NULL) ;
	if (hEvent == NULL)
		return -1 ;

	/// I/O Thread
	DWORD dwThreadId ;
	HANDLE hThread = (HANDLE)_beginthreadex (NULL, 0, ClientHandlingThread, hEvent, 0, (unsigned int*)&dwThreadId) ;
    if (hThread == NULL)
		return -1 ;





	/// accept loop
	while ( true )
	{
		g_AcceptedSocket = accept(listenSocket, NULL, NULL) ;
		if ( g_AcceptedSocket == INVALID_SOCKET )
		{
			printf("accept: invalid socket\n") ;
			continue ;
		}

		/// accept event fire!
		if ( !SetEvent(hEvent) )
		{
			printf("SetEvent error: %d\n",GetLastError()) ;
			break ;
		}
	}

	CloseHandle( hThread ) ;
	CloseHandle( hEvent ) ;
	PostThreadMessage( pi.dwThreadId, WM_CLOSE, NULL, NULL );
	CloseHandle( pi.hProcess );
	CloseHandle( pi.hThread );
	
	// 윈속 종료
	WSACleanup() ;

	delete g_client_manager ;
	return 0 ;
}

unsigned int WINAPI ClientHandlingThread( LPVOID lpParam )
{
	LThreadType = THREAD_CLIENT ;

	HANDLE hEvent = (HANDLE)lpParam ;

	/// Timer
	HANDLE hTimer = CreateWaitableTimer(NULL, FALSE, NULL) ;
	if (hTimer == NULL)
		return -1 ;

	LARGE_INTEGER liDueTime ;
	liDueTime.QuadPart = -10000000 ; ///< 1초 후부터 동작
	if ( !SetWaitableTimer(hTimer, &liDueTime, 1, TimerProc, NULL, TRUE) )
		return -1 ;
		

	while ( true )
	{
		/// accept or IO/Timer completion   대기
		DWORD result = WaitForSingleObjectEx(hEvent, INFINITE, TRUE) ;

		/// client connected
		if ( result == WAIT_OBJECT_0 )
		{
	
			/// 소켓 정보 구조체 할당과 초기화
			
			ClientSession* client = g_client_manager->CreateClient(g_AcceptedSocket) ;
			
			SOCKADDR_IN clientaddr ;
			int addrlen = sizeof(clientaddr) ;
			getpeername(g_AcceptedSocket, (SOCKADDR*)&clientaddr, &addrlen) ;

			// 클라 접속 처리
			if ( false == client->OnConnect(&clientaddr) )
			{
				client->Disconnect() ;
			}
		
			continue ; ///< 다시 대기로
		}

		// APC에 있던 completion이 아니라면 에러다
		if ( result != WAIT_IO_COMPLETION )
			return -1 ;
	}

	CloseHandle( hTimer ) ;
	return 0;
} 

void CALLBACK TimerProc(LPVOID lpArg, DWORD dwTimerLowValue, DWORD dwTimerHighValue)
{
	assert( LThreadType == THREAD_CLIENT ) ;

	g_client_manager->OnPeriodWork() ;
}
