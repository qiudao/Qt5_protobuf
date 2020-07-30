// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ct.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ct_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ct_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012003 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/timestamp.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ct_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ct_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  //static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
   // PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ct_2eproto;
namespace ctproto {
class ct;
class ctDefaultTypeInternal;
extern ctDefaultTypeInternal _ct_default_instance_;
class ctrequest;
class ctrequestDefaultTypeInternal;
extern ctrequestDefaultTypeInternal _ctrequest_default_instance_;
class ctresponse;
class ctresponseDefaultTypeInternal;
extern ctresponseDefaultTypeInternal _ctresponse_default_instance_;
}  // namespace ctproto
PROTOBUF_NAMESPACE_OPEN
template<> ::ctproto::ct* Arena::CreateMaybeMessage<::ctproto::ct>(Arena*);
template<> ::ctproto::ctrequest* Arena::CreateMaybeMessage<::ctproto::ctrequest>(Arena*);
template<> ::ctproto::ctresponse* Arena::CreateMaybeMessage<::ctproto::ctresponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ctproto {

// ===================================================================

class ctrequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ctproto.ctrequest) */ {
 public:
  inline ctrequest() : ctrequest(nullptr) {};
  virtual ~ctrequest();

  ctrequest(const ctrequest& from);
  ctrequest(ctrequest&& from) noexcept
    : ctrequest() {
    *this = ::std::move(from);
  }

  inline ctrequest& operator=(const ctrequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ctrequest& operator=(ctrequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ctrequest& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ctrequest* internal_default_instance() {
    return reinterpret_cast<const ctrequest*>(
               &_ctrequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ctrequest& a, ctrequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ctrequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ctrequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ctrequest* New() const final {
    return CreateMaybeMessage<ctrequest>(nullptr);
  }

  ctrequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ctrequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ctrequest& from);
  void MergeFrom(const ctrequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ctrequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ctproto.ctrequest";
  }
  protected:
  explicit ctrequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ct_2eproto);
    return ::descriptor_table_ct_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kQuoteFieldNumber = 1,
    kStartFieldNumber = 2,
    kEndFieldNumber = 3,
    kLengthFieldNumber = 4,
  };
  // string quote = 1;
  void clear_quote();
  const std::string& quote() const;
  void set_quote(const std::string& value);
  void set_quote(std::string&& value);
  void set_quote(const char* value);
  void set_quote(const char* value, size_t size);
  std::string* mutable_quote();
  std::string* release_quote();
  void set_allocated_quote(std::string* quote);
  private:
  const std::string& _internal_quote() const;
  void _internal_set_quote(const std::string& value);
  std::string* _internal_mutable_quote();
  public:

  // string start = 2;
  void clear_start();
  const std::string& start() const;
  void set_start(const std::string& value);
  void set_start(std::string&& value);
  void set_start(const char* value);
  void set_start(const char* value, size_t size);
  std::string* mutable_start();
  std::string* release_start();
  void set_allocated_start(std::string* start);
  private:
  const std::string& _internal_start() const;
  void _internal_set_start(const std::string& value);
  std::string* _internal_mutable_start();
  public:

  // string end = 3;
  void clear_end();
  const std::string& end() const;
  void set_end(const std::string& value);
  void set_end(std::string&& value);
  void set_end(const char* value);
  void set_end(const char* value, size_t size);
  std::string* mutable_end();
  std::string* release_end();
  void set_allocated_end(std::string* end);
  private:
  const std::string& _internal_end() const;
  void _internal_set_end(const std::string& value);
  std::string* _internal_mutable_end();
  public:

  // float length = 4;
  void clear_length();
  float length() const;
  void set_length(float value);
  private:
  float _internal_length() const;
  void _internal_set_length(float value);
  public:

  // @@protoc_insertion_point(class_scope:ctproto.ctrequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr quote_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr start_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr end_;
  float length_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ct_2eproto;
};
// -------------------------------------------------------------------

class ct PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ctproto.ct) */ {
 public:
  inline ct() : ct(nullptr) {};
  virtual ~ct();

  ct(const ct& from);
  ct(ct&& from) noexcept
    : ct() {
    *this = ::std::move(from);
  }

  inline ct& operator=(const ct& from) {
    CopyFrom(from);
    return *this;
  }
  inline ct& operator=(ct&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ct& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ct* internal_default_instance() {
    return reinterpret_cast<const ct*>(
               &_ct_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ct& a, ct& b) {
    a.Swap(&b);
  }
  inline void Swap(ct* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ct* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ct* New() const final {
    return CreateMaybeMessage<ct>(nullptr);
  }

  ct* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ct>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ct& from);
  void MergeFrom(const ct& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ct* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ctproto.ct";
  }
  protected:
  explicit ct(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ct_2eproto);
    return ::descriptor_table_ct_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOFieldNumber = 1,
    kCFieldNumber = 2,
    kHFieldNumber = 3,
    kLFieldNumber = 4,
    kSFieldNumber = 6,
    kVFieldNumber = 5,
  };
  // float O = 1;
  void clear_o();
  float o() const;
  void set_o(float value);
  private:
  float _internal_o() const;
  void _internal_set_o(float value);
  public:

  // float C = 2;
  void clear_c();
  float c() const;
  void set_c(float value);
  private:
  float _internal_c() const;
  void _internal_set_c(float value);
  public:

  // float H = 3;
  void clear_h();
  float h() const;
  void set_h(float value);
  private:
  float _internal_h() const;
  void _internal_set_h(float value);
  public:

  // float L = 4;
  void clear_l();
  float l() const;
  void set_l(float value);
  private:
  float _internal_l() const;
  void _internal_set_l(float value);
  public:

  // uint64 S = 6;
  void clear_s();
  ::PROTOBUF_NAMESPACE_ID::uint64 s() const;
  void set_s(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_s() const;
  void _internal_set_s(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // float V = 5;
  void clear_v();
  float v() const;
  void set_v(float value);
  private:
  float _internal_v() const;
  void _internal_set_v(float value);
  public:

  // @@protoc_insertion_point(class_scope:ctproto.ct)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  float o_;
  float c_;
  float h_;
  float l_;
  ::PROTOBUF_NAMESPACE_ID::uint64 s_;
  float v_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ct_2eproto;
};
// -------------------------------------------------------------------

class ctresponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ctproto.ctresponse) */ {
 public:
  inline ctresponse() : ctresponse(nullptr) {};
  virtual ~ctresponse();

  ctresponse(const ctresponse& from);
  ctresponse(ctresponse&& from) noexcept
    : ctresponse() {
    *this = ::std::move(from);
  }

  inline ctresponse& operator=(const ctresponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ctresponse& operator=(ctresponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ctresponse& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ctresponse* internal_default_instance() {
    return reinterpret_cast<const ctresponse*>(
               &_ctresponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(ctresponse& a, ctresponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ctresponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ctresponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ctresponse* New() const final {
    return CreateMaybeMessage<ctresponse>(nullptr);
  }

  ctresponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ctresponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ctresponse& from);
  void MergeFrom(const ctresponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ctresponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ctproto.ctresponse";
  }
  protected:
  explicit ctresponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ct_2eproto);
    return ::descriptor_table_ct_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCtsFieldNumber = 1,
  };
  // repeated .ctproto.ct cts = 1;
  int cts_size() const;
  private:
  int _internal_cts_size() const;
  public:
  void clear_cts();
  ::ctproto::ct* mutable_cts(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ctproto::ct >*
      mutable_cts();
  private:
  const ::ctproto::ct& _internal_cts(int index) const;
  ::ctproto::ct* _internal_add_cts();
  public:
  const ::ctproto::ct& cts(int index) const;
  ::ctproto::ct* add_cts();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ctproto::ct >&
      cts() const;

  // @@protoc_insertion_point(class_scope:ctproto.ctresponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ctproto::ct > cts_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ct_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ctrequest

// string quote = 1;
inline void ctrequest::clear_quote() {
  quote_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ctrequest::quote() const {
  // @@protoc_insertion_point(field_get:ctproto.ctrequest.quote)
  return _internal_quote();
}
inline void ctrequest::set_quote(const std::string& value) {
  _internal_set_quote(value);
  // @@protoc_insertion_point(field_set:ctproto.ctrequest.quote)
}
inline std::string* ctrequest::mutable_quote() {
  // @@protoc_insertion_point(field_mutable:ctproto.ctrequest.quote)
  return _internal_mutable_quote();
}
inline const std::string& ctrequest::_internal_quote() const {
  return quote_.Get();
}
inline void ctrequest::_internal_set_quote(const std::string& value) {
  
  quote_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ctrequest::set_quote(std::string&& value) {
  
  quote_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ctproto.ctrequest.quote)
}
inline void ctrequest::set_quote(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  quote_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:ctproto.ctrequest.quote)
}
inline void ctrequest::set_quote(const char* value,
    size_t size) {
  
  quote_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ctproto.ctrequest.quote)
}
inline std::string* ctrequest::_internal_mutable_quote() {
  
  return quote_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ctrequest::release_quote() {
  // @@protoc_insertion_point(field_release:ctproto.ctrequest.quote)
  return quote_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ctrequest::set_allocated_quote(std::string* quote) {
  if (quote != nullptr) {
    
  } else {
    
  }
  quote_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), quote,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ctproto.ctrequest.quote)
}

// string start = 2;
inline void ctrequest::clear_start() {
  start_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ctrequest::start() const {
  // @@protoc_insertion_point(field_get:ctproto.ctrequest.start)
  return _internal_start();
}
inline void ctrequest::set_start(const std::string& value) {
  _internal_set_start(value);
  // @@protoc_insertion_point(field_set:ctproto.ctrequest.start)
}
inline std::string* ctrequest::mutable_start() {
  // @@protoc_insertion_point(field_mutable:ctproto.ctrequest.start)
  return _internal_mutable_start();
}
inline const std::string& ctrequest::_internal_start() const {
  return start_.Get();
}
inline void ctrequest::_internal_set_start(const std::string& value) {
  
  start_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ctrequest::set_start(std::string&& value) {
  
  start_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ctproto.ctrequest.start)
}
inline void ctrequest::set_start(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  start_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:ctproto.ctrequest.start)
}
inline void ctrequest::set_start(const char* value,
    size_t size) {
  
  start_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ctproto.ctrequest.start)
}
inline std::string* ctrequest::_internal_mutable_start() {
  
  return start_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ctrequest::release_start() {
  // @@protoc_insertion_point(field_release:ctproto.ctrequest.start)
  return start_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ctrequest::set_allocated_start(std::string* start) {
  if (start != nullptr) {
    
  } else {
    
  }
  start_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), start,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ctproto.ctrequest.start)
}

// string end = 3;
inline void ctrequest::clear_end() {
  end_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline const std::string& ctrequest::end() const {
  // @@protoc_insertion_point(field_get:ctproto.ctrequest.end)
  return _internal_end();
}
inline void ctrequest::set_end(const std::string& value) {
  _internal_set_end(value);
  // @@protoc_insertion_point(field_set:ctproto.ctrequest.end)
}
inline std::string* ctrequest::mutable_end() {
  // @@protoc_insertion_point(field_mutable:ctproto.ctrequest.end)
  return _internal_mutable_end();
}
inline const std::string& ctrequest::_internal_end() const {
  return end_.Get();
}
inline void ctrequest::_internal_set_end(const std::string& value) {
  
  end_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value, GetArena());
}
inline void ctrequest::set_end(std::string&& value) {
  
  end_.Set(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ctproto.ctrequest.end)
}
inline void ctrequest::set_end(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  end_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArena());
  // @@protoc_insertion_point(field_set_char:ctproto.ctrequest.end)
}
inline void ctrequest::set_end(const char* value,
    size_t size) {
  
  end_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ctproto.ctrequest.end)
}
inline std::string* ctrequest::_internal_mutable_end() {
  
  return end_.Mutable(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline std::string* ctrequest::release_end() {
  // @@protoc_insertion_point(field_release:ctproto.ctrequest.end)
  return end_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void ctrequest::set_allocated_end(std::string* end) {
  if (end != nullptr) {
    
  } else {
    
  }
  end_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), end,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ctproto.ctrequest.end)
}

// float length = 4;
inline void ctrequest::clear_length() {
  length_ = 0;
}
inline float ctrequest::_internal_length() const {
  return length_;
}
inline float ctrequest::length() const {
  // @@protoc_insertion_point(field_get:ctproto.ctrequest.length)
  return _internal_length();
}
inline void ctrequest::_internal_set_length(float value) {
  
  length_ = value;
}
inline void ctrequest::set_length(float value) {
  _internal_set_length(value);
  // @@protoc_insertion_point(field_set:ctproto.ctrequest.length)
}

// -------------------------------------------------------------------

// ct

// float O = 1;
inline void ct::clear_o() {
  o_ = 0;
}
inline float ct::_internal_o() const {
  return o_;
}
inline float ct::o() const {
  // @@protoc_insertion_point(field_get:ctproto.ct.O)
  return _internal_o();
}
inline void ct::_internal_set_o(float value) {
  
  o_ = value;
}
inline void ct::set_o(float value) {
  _internal_set_o(value);
  // @@protoc_insertion_point(field_set:ctproto.ct.O)
}

// float C = 2;
inline void ct::clear_c() {
  c_ = 0;
}
inline float ct::_internal_c() const {
  return c_;
}
inline float ct::c() const {
  // @@protoc_insertion_point(field_get:ctproto.ct.C)
  return _internal_c();
}
inline void ct::_internal_set_c(float value) {
  
  c_ = value;
}
inline void ct::set_c(float value) {
  _internal_set_c(value);
  // @@protoc_insertion_point(field_set:ctproto.ct.C)
}

// float H = 3;
inline void ct::clear_h() {
  h_ = 0;
}
inline float ct::_internal_h() const {
  return h_;
}
inline float ct::h() const {
  // @@protoc_insertion_point(field_get:ctproto.ct.H)
  return _internal_h();
}
inline void ct::_internal_set_h(float value) {
  
  h_ = value;
}
inline void ct::set_h(float value) {
  _internal_set_h(value);
  // @@protoc_insertion_point(field_set:ctproto.ct.H)
}

// float L = 4;
inline void ct::clear_l() {
  l_ = 0;
}
inline float ct::_internal_l() const {
  return l_;
}
inline float ct::l() const {
  // @@protoc_insertion_point(field_get:ctproto.ct.L)
  return _internal_l();
}
inline void ct::_internal_set_l(float value) {
  
  l_ = value;
}
inline void ct::set_l(float value) {
  _internal_set_l(value);
  // @@protoc_insertion_point(field_set:ctproto.ct.L)
}

// float V = 5;
inline void ct::clear_v() {
  v_ = 0;
}
inline float ct::_internal_v() const {
  return v_;
}
inline float ct::v() const {
  // @@protoc_insertion_point(field_get:ctproto.ct.V)
  return _internal_v();
}
inline void ct::_internal_set_v(float value) {
  
  v_ = value;
}
inline void ct::set_v(float value) {
  _internal_set_v(value);
  // @@protoc_insertion_point(field_set:ctproto.ct.V)
}

// uint64 S = 6;
inline void ct::clear_s() {
  s_ = PROTOBUF_ULONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ct::_internal_s() const {
  return s_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ct::s() const {
  // @@protoc_insertion_point(field_get:ctproto.ct.S)
  return _internal_s();
}
inline void ct::_internal_set_s(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  
  s_ = value;
}
inline void ct::set_s(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_s(value);
  // @@protoc_insertion_point(field_set:ctproto.ct.S)
}

// -------------------------------------------------------------------

// ctresponse

// repeated .ctproto.ct cts = 1;
inline int ctresponse::_internal_cts_size() const {
  return cts_.size();
}
inline int ctresponse::cts_size() const {
  return _internal_cts_size();
}
inline void ctresponse::clear_cts() {
  cts_.Clear();
}
inline ::ctproto::ct* ctresponse::mutable_cts(int index) {
  // @@protoc_insertion_point(field_mutable:ctproto.ctresponse.cts)
  return cts_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ctproto::ct >*
ctresponse::mutable_cts() {
  // @@protoc_insertion_point(field_mutable_list:ctproto.ctresponse.cts)
  return &cts_;
}
inline const ::ctproto::ct& ctresponse::_internal_cts(int index) const {
  return cts_.Get(index);
}
inline const ::ctproto::ct& ctresponse::cts(int index) const {
  // @@protoc_insertion_point(field_get:ctproto.ctresponse.cts)
  return _internal_cts(index);
}
inline ::ctproto::ct* ctresponse::_internal_add_cts() {
  return cts_.Add();
}
inline ::ctproto::ct* ctresponse::add_cts() {
  // @@protoc_insertion_point(field_add:ctproto.ctresponse.cts)
  return _internal_add_cts();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ctproto::ct >&
ctresponse::cts() const {
  // @@protoc_insertion_point(field_list:ctproto.ctresponse.cts)
  return cts_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ctproto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ct_2eproto