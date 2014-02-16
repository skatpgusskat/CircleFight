// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packet_type.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "packet_type.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* LoginRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoginRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* LoginResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoginResult_reflection_ = NULL;
const ::google::protobuf::Descriptor* LoginBroadcastResult_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LoginBroadcastResult_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_packet_5ftype_2eproto() {
  protobuf_AddDesc_packet_5ftype_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "packet_type.proto");
  GOOGLE_CHECK(file != NULL);
  LoginRequest_descriptor_ = file->message_type(0);
  static const int LoginRequest_offsets_[1] = {
  };
  LoginRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LoginRequest_descriptor_,
      LoginRequest::default_instance_,
      LoginRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LoginRequest));
  LoginResult_descriptor_ = file->message_type(1);
  static const int LoginResult_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, player_id_),
  };
  LoginResult_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LoginResult_descriptor_,
      LoginResult::default_instance_,
      LoginResult_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginResult, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LoginResult));
  LoginBroadcastResult_descriptor_ = file->message_type(2);
  static const int LoginBroadcastResult_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginBroadcastResult, player_id_),
  };
  LoginBroadcastResult_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LoginBroadcastResult_descriptor_,
      LoginBroadcastResult::default_instance_,
      LoginBroadcastResult_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginBroadcastResult, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LoginBroadcastResult, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LoginBroadcastResult));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_packet_5ftype_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LoginRequest_descriptor_, &LoginRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LoginResult_descriptor_, &LoginResult::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LoginBroadcastResult_descriptor_, &LoginBroadcastResult::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_packet_5ftype_2eproto() {
  delete LoginRequest::default_instance_;
  delete LoginRequest_reflection_;
  delete LoginResult::default_instance_;
  delete LoginResult_reflection_;
  delete LoginBroadcastResult::default_instance_;
  delete LoginBroadcastResult_reflection_;
}

void protobuf_AddDesc_packet_5ftype_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021packet_type.proto\"\016\n\014LoginRequest\" \n\013L"
    "oginResult\022\021\n\tplayer_id\030\002 \002(\005\")\n\024LoginBr"
    "oadcastResult\022\021\n\tplayer_id\030\002 \002(\005", 112);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "packet_type.proto", &protobuf_RegisterTypes);
  LoginRequest::default_instance_ = new LoginRequest();
  LoginResult::default_instance_ = new LoginResult();
  LoginBroadcastResult::default_instance_ = new LoginBroadcastResult();
  LoginRequest::default_instance_->InitAsDefaultInstance();
  LoginResult::default_instance_->InitAsDefaultInstance();
  LoginBroadcastResult::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_packet_5ftype_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_packet_5ftype_2eproto {
  StaticDescriptorInitializer_packet_5ftype_2eproto() {
    protobuf_AddDesc_packet_5ftype_2eproto();
  }
} static_descriptor_initializer_packet_5ftype_2eproto_;

// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

LoginRequest::LoginRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void LoginRequest::InitAsDefaultInstance() {
}

LoginRequest::LoginRequest(const LoginRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void LoginRequest::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoginRequest::~LoginRequest() {
  SharedDtor();
}

void LoginRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void LoginRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoginRequest_descriptor_;
}

const LoginRequest& LoginRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_packet_5ftype_2eproto();
  return *default_instance_;
}

LoginRequest* LoginRequest::default_instance_ = NULL;

LoginRequest* LoginRequest::New() const {
  return new LoginRequest;
}

void LoginRequest::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LoginRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void LoginRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* LoginRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int LoginRequest::ByteSize() const {
  int total_size = 0;

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LoginRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LoginRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LoginRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LoginRequest::MergeFrom(const LoginRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LoginRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginRequest::CopyFrom(const LoginRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginRequest::IsInitialized() const {

  return true;
}

void LoginRequest::Swap(LoginRequest* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LoginRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoginRequest_descriptor_;
  metadata.reflection = LoginRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int LoginResult::kPlayerIdFieldNumber;
#endif  // !_MSC_VER

LoginResult::LoginResult()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void LoginResult::InitAsDefaultInstance() {
}

LoginResult::LoginResult(const LoginResult& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void LoginResult::SharedCtor() {
  _cached_size_ = 0;
  player_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoginResult::~LoginResult() {
  SharedDtor();
}

void LoginResult::SharedDtor() {
  if (this != default_instance_) {
  }
}

void LoginResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoginResult_descriptor_;
}

const LoginResult& LoginResult::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_packet_5ftype_2eproto();
  return *default_instance_;
}

LoginResult* LoginResult::default_instance_ = NULL;

LoginResult* LoginResult::New() const {
  return new LoginResult;
}

void LoginResult::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    player_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LoginResult::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 player_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &player_id_)));
          set_has_player_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void LoginResult::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 player_id = 2;
  if (has_player_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->player_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* LoginResult::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 player_id = 2;
  if (has_player_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->player_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int LoginResult::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 player_id = 2;
    if (has_player_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->player_id());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LoginResult::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LoginResult* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LoginResult*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LoginResult::MergeFrom(const LoginResult& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_player_id()) {
      set_player_id(from.player_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LoginResult::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginResult::CopyFrom(const LoginResult& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginResult::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void LoginResult::Swap(LoginResult* other) {
  if (other != this) {
    std::swap(player_id_, other->player_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LoginResult::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoginResult_descriptor_;
  metadata.reflection = LoginResult_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int LoginBroadcastResult::kPlayerIdFieldNumber;
#endif  // !_MSC_VER

LoginBroadcastResult::LoginBroadcastResult()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void LoginBroadcastResult::InitAsDefaultInstance() {
}

LoginBroadcastResult::LoginBroadcastResult(const LoginBroadcastResult& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void LoginBroadcastResult::SharedCtor() {
  _cached_size_ = 0;
  player_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LoginBroadcastResult::~LoginBroadcastResult() {
  SharedDtor();
}

void LoginBroadcastResult::SharedDtor() {
  if (this != default_instance_) {
  }
}

void LoginBroadcastResult::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LoginBroadcastResult::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LoginBroadcastResult_descriptor_;
}

const LoginBroadcastResult& LoginBroadcastResult::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_packet_5ftype_2eproto();
  return *default_instance_;
}

LoginBroadcastResult* LoginBroadcastResult::default_instance_ = NULL;

LoginBroadcastResult* LoginBroadcastResult::New() const {
  return new LoginBroadcastResult;
}

void LoginBroadcastResult::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    player_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LoginBroadcastResult::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 player_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &player_id_)));
          set_has_player_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void LoginBroadcastResult::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 player_id = 2;
  if (has_player_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->player_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* LoginBroadcastResult::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 player_id = 2;
  if (has_player_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->player_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int LoginBroadcastResult::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 player_id = 2;
    if (has_player_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->player_id());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LoginBroadcastResult::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LoginBroadcastResult* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LoginBroadcastResult*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LoginBroadcastResult::MergeFrom(const LoginBroadcastResult& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_player_id()) {
      set_player_id(from.player_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LoginBroadcastResult::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginBroadcastResult::CopyFrom(const LoginBroadcastResult& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginBroadcastResult::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void LoginBroadcastResult::Swap(LoginBroadcastResult* other) {
  if (other != this) {
    std::swap(player_id_, other->player_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LoginBroadcastResult::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LoginBroadcastResult_descriptor_;
  metadata.reflection = LoginBroadcastResult_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
