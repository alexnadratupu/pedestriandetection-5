// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DataSequenceHeader.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "DataSequenceHeader.pb.h"

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

namespace doppia_protobuf {

namespace {

const ::google::protobuf::Descriptor* DataSequenceAttribute_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DataSequenceAttribute_reflection_ = NULL;
const ::google::protobuf::Descriptor* DataSequenceHeader_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DataSequenceHeader_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_DataSequenceHeader_2eproto() {
  protobuf_AddDesc_DataSequenceHeader_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "DataSequenceHeader.proto");
  GOOGLE_CHECK(file != NULL);
  DataSequenceAttribute_descriptor_ = file->message_type(0);
  static const int DataSequenceAttribute_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataSequenceAttribute, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataSequenceAttribute, value_),
  };
  DataSequenceAttribute_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DataSequenceAttribute_descriptor_,
      DataSequenceAttribute::default_instance_,
      DataSequenceAttribute_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataSequenceAttribute, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataSequenceAttribute, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DataSequenceAttribute));
  DataSequenceHeader_descriptor_ = file->message_type(1);
  static const int DataSequenceHeader_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataSequenceHeader, attributes_),
  };
  DataSequenceHeader_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      DataSequenceHeader_descriptor_,
      DataSequenceHeader::default_instance_,
      DataSequenceHeader_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataSequenceHeader, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DataSequenceHeader, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(DataSequenceHeader));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_DataSequenceHeader_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DataSequenceAttribute_descriptor_, &DataSequenceAttribute::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    DataSequenceHeader_descriptor_, &DataSequenceHeader::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_DataSequenceHeader_2eproto() {
  delete DataSequenceAttribute::default_instance_;
  delete DataSequenceAttribute_reflection_;
  delete DataSequenceHeader::default_instance_;
  delete DataSequenceHeader_reflection_;
}

void protobuf_AddDesc_DataSequenceHeader_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030DataSequenceHeader.proto\022\017doppia_proto"
    "buf\"4\n\025DataSequenceAttribute\022\014\n\004name\030\001 \002"
    "(\t\022\r\n\005value\030\002 \002(\t\"P\n\022DataSequenceHeader\022"
    ":\n\nattributes\030\003 \003(\0132&.doppia_protobuf.Da"
    "taSequenceAttribute", 179);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "DataSequenceHeader.proto", &protobuf_RegisterTypes);
  DataSequenceAttribute::default_instance_ = new DataSequenceAttribute();
  DataSequenceHeader::default_instance_ = new DataSequenceHeader();
  DataSequenceAttribute::default_instance_->InitAsDefaultInstance();
  DataSequenceHeader::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_DataSequenceHeader_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_DataSequenceHeader_2eproto {
  StaticDescriptorInitializer_DataSequenceHeader_2eproto() {
    protobuf_AddDesc_DataSequenceHeader_2eproto();
  }
} static_descriptor_initializer_DataSequenceHeader_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int DataSequenceAttribute::kNameFieldNumber;
const int DataSequenceAttribute::kValueFieldNumber;
#endif  // !_MSC_VER

DataSequenceAttribute::DataSequenceAttribute()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DataSequenceAttribute::InitAsDefaultInstance() {
}

DataSequenceAttribute::DataSequenceAttribute(const DataSequenceAttribute& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DataSequenceAttribute::SharedCtor() {
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DataSequenceAttribute::~DataSequenceAttribute() {
  SharedDtor();
}

void DataSequenceAttribute::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    delete value_;
  }
  if (this != default_instance_) {
  }
}

void DataSequenceAttribute::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DataSequenceAttribute::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DataSequenceAttribute_descriptor_;
}

const DataSequenceAttribute& DataSequenceAttribute::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_DataSequenceHeader_2eproto();
  return *default_instance_;
}

DataSequenceAttribute* DataSequenceAttribute::default_instance_ = NULL;

DataSequenceAttribute* DataSequenceAttribute::New() const {
  return new DataSequenceAttribute;
}

void DataSequenceAttribute::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    if (has_value()) {
      if (value_ != &::google::protobuf::internal::kEmptyString) {
        value_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DataSequenceAttribute::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_value;
        break;
      }

      // required string value = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_value:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->value().data(), this->value().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
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

void DataSequenceAttribute::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->name(), output);
  }

  // required string value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DataSequenceAttribute::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // required string value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DataSequenceAttribute::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required string value = 2;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->value());
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

void DataSequenceAttribute::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DataSequenceAttribute* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DataSequenceAttribute*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DataSequenceAttribute::MergeFrom(const DataSequenceAttribute& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_value()) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DataSequenceAttribute::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DataSequenceAttribute::CopyFrom(const DataSequenceAttribute& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DataSequenceAttribute::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void DataSequenceAttribute::Swap(DataSequenceAttribute* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DataSequenceAttribute::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DataSequenceAttribute_descriptor_;
  metadata.reflection = DataSequenceAttribute_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int DataSequenceHeader::kAttributesFieldNumber;
#endif  // !_MSC_VER

DataSequenceHeader::DataSequenceHeader()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void DataSequenceHeader::InitAsDefaultInstance() {
}

DataSequenceHeader::DataSequenceHeader(const DataSequenceHeader& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void DataSequenceHeader::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

DataSequenceHeader::~DataSequenceHeader() {
  SharedDtor();
}

void DataSequenceHeader::SharedDtor() {
  if (this != default_instance_) {
  }
}

void DataSequenceHeader::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DataSequenceHeader::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DataSequenceHeader_descriptor_;
}

const DataSequenceHeader& DataSequenceHeader::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_DataSequenceHeader_2eproto();
  return *default_instance_;
}

DataSequenceHeader* DataSequenceHeader::default_instance_ = NULL;

DataSequenceHeader* DataSequenceHeader::New() const {
  return new DataSequenceHeader;
}

void DataSequenceHeader::Clear() {
  attributes_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool DataSequenceHeader::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .doppia_protobuf.DataSequenceAttribute attributes = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_attributes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_attributes()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_attributes;
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

void DataSequenceHeader::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .doppia_protobuf.DataSequenceAttribute attributes = 3;
  for (int i = 0; i < this->attributes_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->attributes(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* DataSequenceHeader::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .doppia_protobuf.DataSequenceAttribute attributes = 3;
  for (int i = 0; i < this->attributes_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->attributes(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int DataSequenceHeader::ByteSize() const {
  int total_size = 0;

  // repeated .doppia_protobuf.DataSequenceAttribute attributes = 3;
  total_size += 1 * this->attributes_size();
  for (int i = 0; i < this->attributes_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->attributes(i));
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

void DataSequenceHeader::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const DataSequenceHeader* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const DataSequenceHeader*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void DataSequenceHeader::MergeFrom(const DataSequenceHeader& from) {
  GOOGLE_CHECK_NE(&from, this);
  attributes_.MergeFrom(from.attributes_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void DataSequenceHeader::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DataSequenceHeader::CopyFrom(const DataSequenceHeader& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DataSequenceHeader::IsInitialized() const {

  for (int i = 0; i < attributes_size(); i++) {
    if (!this->attributes(i).IsInitialized()) return false;
  }
  return true;
}

void DataSequenceHeader::Swap(DataSequenceHeader* other) {
  if (other != this) {
    attributes_.Swap(&other->attributes_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata DataSequenceHeader::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DataSequenceHeader_descriptor_;
  metadata.reflection = DataSequenceHeader_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace doppia_protobuf

// @@protoc_insertion_point(global_scope)
