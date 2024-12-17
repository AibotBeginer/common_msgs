// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: openbot_bridge/ros2_msgs/builtin_interfaces.proto

#include "openbot_bridge/ros2_msgs/builtin_interfaces.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Time_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto;
namespace openbot_bridge {
namespace ros2_msgs {
namespace builtin_interfaces {
class TimeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Time> _instance;
} _Time_default_instance_;
class DurationDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<Duration> _instance;
} _Duration_default_instance_;
}  // namespace builtin_interfaces
}  // namespace ros2_msgs
}  // namespace openbot_bridge
static void InitDefaultsscc_info_Duration_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::openbot_bridge::ros2_msgs::builtin_interfaces::_Duration_default_instance_;
    new (ptr) ::openbot_bridge::ros2_msgs::builtin_interfaces::Duration();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_Duration_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_Duration_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto}, {
      &scc_info_Time_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto.base,}};

static void InitDefaultsscc_info_Time_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::openbot_bridge::ros2_msgs::builtin_interfaces::_Time_default_instance_;
    new (ptr) ::openbot_bridge::ros2_msgs::builtin_interfaces::Time();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_Time_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_Time_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::ros2_msgs::builtin_interfaces::Time, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::ros2_msgs::builtin_interfaces::Time, seconds_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::ros2_msgs::builtin_interfaces::Time, nanoseconds_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::ros2_msgs::builtin_interfaces::Duration, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::ros2_msgs::builtin_interfaces::Duration, stamp_),
  PROTOBUF_FIELD_OFFSET(::openbot_bridge::ros2_msgs::builtin_interfaces::Duration, frame_id_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::openbot_bridge::ros2_msgs::builtin_interfaces::Time)},
  { 7, -1, sizeof(::openbot_bridge::ros2_msgs::builtin_interfaces::Duration)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::openbot_bridge::ros2_msgs::builtin_interfaces::_Time_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::openbot_bridge::ros2_msgs::builtin_interfaces::_Duration_default_instance_),
};

const char descriptor_table_protodef_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n1openbot_bridge/ros2_msgs/builtin_inter"
  "faces.proto\022+openbot_bridge.ros2_msgs.bu"
  "iltin_interfaces\",\n\004Time\022\017\n\007seconds\030\001 \001("
  "\005\022\023\n\013nanoseconds\030\002 \001(\r\"^\n\010Duration\022@\n\005st"
  "amp\030\001 \001(\01321.openbot_bridge.ros2_msgs.bui"
  "ltin_interfaces.Time\022\020\n\010frame_id\030\002 \001(\tb\006"
  "proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto_sccs[2] = {
  &scc_info_Duration_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto.base,
  &scc_info_Time_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto = {
  false, false, descriptor_table_protodef_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto, "openbot_bridge/ros2_msgs/builtin_interfaces.proto", 246,
  &descriptor_table_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto_once, descriptor_table_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto_sccs, descriptor_table_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto::offsets,
  file_level_metadata_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto, 2, file_level_enum_descriptors_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto, file_level_service_descriptors_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto)), true);
namespace openbot_bridge {
namespace ros2_msgs {
namespace builtin_interfaces {

// ===================================================================

class Time::_Internal {
 public:
};

Time::Time(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:openbot_bridge.ros2_msgs.builtin_interfaces.Time)
}
Time::Time(const Time& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&seconds_, &from.seconds_,
    static_cast<size_t>(reinterpret_cast<char*>(&nanoseconds_) -
    reinterpret_cast<char*>(&seconds_)) + sizeof(nanoseconds_));
  // @@protoc_insertion_point(copy_constructor:openbot_bridge.ros2_msgs.builtin_interfaces.Time)
}

void Time::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&seconds_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&nanoseconds_) -
      reinterpret_cast<char*>(&seconds_)) + sizeof(nanoseconds_));
}

Time::~Time() {
  // @@protoc_insertion_point(destructor:openbot_bridge.ros2_msgs.builtin_interfaces.Time)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Time::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void Time::ArenaDtor(void* object) {
  Time* _this = reinterpret_cast< Time* >(object);
  (void)_this;
}
void Time::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Time::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Time& Time::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Time_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto.base);
  return *internal_default_instance();
}


void Time::Clear() {
// @@protoc_insertion_point(message_clear_start:openbot_bridge.ros2_msgs.builtin_interfaces.Time)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&seconds_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&nanoseconds_) -
      reinterpret_cast<char*>(&seconds_)) + sizeof(nanoseconds_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Time::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 seconds = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          seconds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // uint32 nanoseconds = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          nanoseconds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Time::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:openbot_bridge.ros2_msgs.builtin_interfaces.Time)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 seconds = 1;
  if (this->seconds() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_seconds(), target);
  }

  // uint32 nanoseconds = 2;
  if (this->nanoseconds() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(2, this->_internal_nanoseconds(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:openbot_bridge.ros2_msgs.builtin_interfaces.Time)
  return target;
}

size_t Time::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:openbot_bridge.ros2_msgs.builtin_interfaces.Time)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 seconds = 1;
  if (this->seconds() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_seconds());
  }

  // uint32 nanoseconds = 2;
  if (this->nanoseconds() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_nanoseconds());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Time::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:openbot_bridge.ros2_msgs.builtin_interfaces.Time)
  GOOGLE_DCHECK_NE(&from, this);
  const Time* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Time>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:openbot_bridge.ros2_msgs.builtin_interfaces.Time)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:openbot_bridge.ros2_msgs.builtin_interfaces.Time)
    MergeFrom(*source);
  }
}

void Time::MergeFrom(const Time& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:openbot_bridge.ros2_msgs.builtin_interfaces.Time)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.seconds() != 0) {
    _internal_set_seconds(from._internal_seconds());
  }
  if (from.nanoseconds() != 0) {
    _internal_set_nanoseconds(from._internal_nanoseconds());
  }
}

void Time::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:openbot_bridge.ros2_msgs.builtin_interfaces.Time)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Time::CopyFrom(const Time& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:openbot_bridge.ros2_msgs.builtin_interfaces.Time)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Time::IsInitialized() const {
  return true;
}

void Time::InternalSwap(Time* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Time, nanoseconds_)
      + sizeof(Time::nanoseconds_)
      - PROTOBUF_FIELD_OFFSET(Time, seconds_)>(
          reinterpret_cast<char*>(&seconds_),
          reinterpret_cast<char*>(&other->seconds_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Time::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class Duration::_Internal {
 public:
  static const ::openbot_bridge::ros2_msgs::builtin_interfaces::Time& stamp(const Duration* msg);
};

const ::openbot_bridge::ros2_msgs::builtin_interfaces::Time&
Duration::_Internal::stamp(const Duration* msg) {
  return *msg->stamp_;
}
Duration::Duration(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:openbot_bridge.ros2_msgs.builtin_interfaces.Duration)
}
Duration::Duration(const Duration& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  frame_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_frame_id().empty()) {
    frame_id_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_frame_id(), 
      GetArena());
  }
  if (from._internal_has_stamp()) {
    stamp_ = new ::openbot_bridge::ros2_msgs::builtin_interfaces::Time(*from.stamp_);
  } else {
    stamp_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:openbot_bridge.ros2_msgs.builtin_interfaces.Duration)
}

void Duration::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_Duration_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto.base);
  frame_id_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  stamp_ = nullptr;
}

Duration::~Duration() {
  // @@protoc_insertion_point(destructor:openbot_bridge.ros2_msgs.builtin_interfaces.Duration)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void Duration::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  frame_id_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete stamp_;
}

void Duration::ArenaDtor(void* object) {
  Duration* _this = reinterpret_cast< Duration* >(object);
  (void)_this;
}
void Duration::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Duration::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Duration& Duration::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_Duration_openbot_5fbridge_2fros2_5fmsgs_2fbuiltin_5finterfaces_2eproto.base);
  return *internal_default_instance();
}


void Duration::Clear() {
// @@protoc_insertion_point(message_clear_start:openbot_bridge.ros2_msgs.builtin_interfaces.Duration)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  frame_id_.ClearToEmpty();
  if (GetArena() == nullptr && stamp_ != nullptr) {
    delete stamp_;
  }
  stamp_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Duration::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .openbot_bridge.ros2_msgs.builtin_interfaces.Time stamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_stamp(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string frame_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_frame_id();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "openbot_bridge.ros2_msgs.builtin_interfaces.Duration.frame_id"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* Duration::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:openbot_bridge.ros2_msgs.builtin_interfaces.Duration)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .openbot_bridge.ros2_msgs.builtin_interfaces.Time stamp = 1;
  if (this->has_stamp()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::stamp(this), target, stream);
  }

  // string frame_id = 2;
  if (this->frame_id().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_frame_id().data(), static_cast<int>(this->_internal_frame_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "openbot_bridge.ros2_msgs.builtin_interfaces.Duration.frame_id");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_frame_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:openbot_bridge.ros2_msgs.builtin_interfaces.Duration)
  return target;
}

size_t Duration::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:openbot_bridge.ros2_msgs.builtin_interfaces.Duration)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string frame_id = 2;
  if (this->frame_id().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_frame_id());
  }

  // .openbot_bridge.ros2_msgs.builtin_interfaces.Time stamp = 1;
  if (this->has_stamp()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *stamp_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Duration::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:openbot_bridge.ros2_msgs.builtin_interfaces.Duration)
  GOOGLE_DCHECK_NE(&from, this);
  const Duration* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<Duration>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:openbot_bridge.ros2_msgs.builtin_interfaces.Duration)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:openbot_bridge.ros2_msgs.builtin_interfaces.Duration)
    MergeFrom(*source);
  }
}

void Duration::MergeFrom(const Duration& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:openbot_bridge.ros2_msgs.builtin_interfaces.Duration)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.frame_id().size() > 0) {
    _internal_set_frame_id(from._internal_frame_id());
  }
  if (from.has_stamp()) {
    _internal_mutable_stamp()->::openbot_bridge::ros2_msgs::builtin_interfaces::Time::MergeFrom(from._internal_stamp());
  }
}

void Duration::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:openbot_bridge.ros2_msgs.builtin_interfaces.Duration)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Duration::CopyFrom(const Duration& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:openbot_bridge.ros2_msgs.builtin_interfaces.Duration)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Duration::IsInitialized() const {
  return true;
}

void Duration::InternalSwap(Duration* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  frame_id_.Swap(&other->frame_id_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(stamp_, other->stamp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Duration::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace builtin_interfaces
}  // namespace ros2_msgs
}  // namespace openbot_bridge
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::openbot_bridge::ros2_msgs::builtin_interfaces::Time* Arena::CreateMaybeMessage< ::openbot_bridge::ros2_msgs::builtin_interfaces::Time >(Arena* arena) {
  return Arena::CreateMessageInternal< ::openbot_bridge::ros2_msgs::builtin_interfaces::Time >(arena);
}
template<> PROTOBUF_NOINLINE ::openbot_bridge::ros2_msgs::builtin_interfaces::Duration* Arena::CreateMaybeMessage< ::openbot_bridge::ros2_msgs::builtin_interfaces::Duration >(Arena* arena) {
  return Arena::CreateMessageInternal< ::openbot_bridge::ros2_msgs::builtin_interfaces::Duration >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
