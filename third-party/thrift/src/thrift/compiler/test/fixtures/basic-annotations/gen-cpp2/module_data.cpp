/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::cpp2::YourEnum, 3> TEnumDataStorage<::cpp2::YourEnum>::values = {{
  type::MyValue1,
  type::MyValue2,
  type::REALM,
}};
const std::array<folly::StringPiece, 3> TEnumDataStorage<::cpp2::YourEnum>::names = {{
  "MyValue1",
  "MyValue2",
  "DOMAIN",
}};

const std::array<::cpp2::detail::YourUnion::Type, 0> TEnumDataStorage<::cpp2::detail::YourUnion::Type>::values = {{
}};
const std::array<folly::StringPiece, 0> TEnumDataStorage<::cpp2::detail::YourUnion::Type>::names = {{
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::MyStructNestedAnnotation>::fields_names = {{
  "name",
}};
const std::array<int16_t, 1> TStructDataStorage<::cpp2::MyStructNestedAnnotation>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::MyStructNestedAnnotation>::fields_types = {{
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 0> TStructDataStorage<::cpp2::detail::YourUnion>::fields_names = {{
}};
const std::array<int16_t, 0> TStructDataStorage<::cpp2::detail::YourUnion>::fields_ids = {{
}};
const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::detail::YourUnion>::fields_types = {{
}};

const std::array<folly::StringPiece, 0> TStructDataStorage<::cpp2::detail::YourException>::fields_names = {{
}};
const std::array<int16_t, 0> TStructDataStorage<::cpp2::detail::YourException>::fields_ids = {{
}};
const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::detail::YourException>::fields_types = {{
}};

const std::array<folly::StringPiece, 10> TStructDataStorage<::cpp2::detail::YourStruct>::fields_names = {{
  "major",
  "package",
  "annotation_with_quote",
  "class_",
  "annotation_with_trailing_comma",
  "empty_annotations",
  "my_enum",
  "cpp_type_annotation",
  "my_union",
  "my_id",
}};
const std::array<int16_t, 10> TStructDataStorage<::cpp2::detail::YourStruct>::fields_ids = {{
  2,
  1,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
}};
const std::array<protocol::TType, 10> TStructDataStorage<::cpp2::detail::YourStruct>::fields_types = {{
  TType::T_I64,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_I32,
  TType::T_LIST,
  TType::T_STRUCT,
  TType::T_I16,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::SecretStruct>::fields_names = {{
  "id",
  "password",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::SecretStruct>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::SecretStruct>::fields_types = {{
  TType::T_I64,
  TType::T_STRING,
}};

} // namespace thrift
} // namespace apache