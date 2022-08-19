/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic-structured-annotations/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::test::fixtures::basic-structured-annotations::MyEnum, 2> TEnumDataStorage<::test::fixtures::basic-structured-annotations::MyEnum>::values = {{
  type::UNKNOWN,
  type::ONE,
}};
const std::array<folly::StringPiece, 2> TEnumDataStorage<::test::fixtures::basic-structured-annotations::MyEnum>::names = {{
  "UNKNOWN",
  "ONE",
}};

const std::array<::test::fixtures::basic-structured-annotations::MyUnion::Type, 2> TEnumDataStorage<::test::fixtures::basic-structured-annotations::MyUnion::Type>::values = {{
  type::first,
  type::second,
}};
const std::array<folly::StringPiece, 2> TEnumDataStorage<::test::fixtures::basic-structured-annotations::MyUnion::Type>::names = {{
  "first",
  "second",
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_inline>::fields_names = {{
  "count",
  "name",
}};
const std::array<int16_t, 2> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_inline>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_inline>::fields_types = {{
  TType::T_I64,
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_with_default>::fields_names = {{
  "name",
}};
const std::array<int16_t, 1> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_with_default>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_with_default>::fields_types = {{
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_forward>::fields_names = {{
  "count",
}};
const std::array<int16_t, 1> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_forward>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_forward>::fields_types = {{
  TType::T_I64,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_recursive>::fields_names = {{
  "name",
  "recurse",
  "forward",
}};
const std::array<int16_t, 3> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_recursive>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_recursive>::fields_types = {{
  TType::T_STRING,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_nested>::fields_names = {{
  "name",
  "nest",
}};
const std::array<int16_t, 2> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_nested>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::test::fixtures::basic-structured-annotations::structured_annotation_nested>::fields_types = {{
  TType::T_STRING,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 4> TStructDataStorage<::test::fixtures::basic-structured-annotations::MyStruct>::fields_names = {{
  "annotated_field",
  "annotated_type",
  "annotated_recursive",
  "annotated_nested",
}};
const std::array<int16_t, 4> TStructDataStorage<::test::fixtures::basic-structured-annotations::MyStruct>::fields_ids = {{
  1,
  2,
  3,
  4,
}};
const std::array<protocol::TType, 4> TStructDataStorage<::test::fixtures::basic-structured-annotations::MyStruct>::fields_types = {{
  TType::T_I64,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_I64,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::test::fixtures::basic-structured-annotations::MyException>::fields_names = {{
  "context",
}};
const std::array<int16_t, 1> TStructDataStorage<::test::fixtures::basic-structured-annotations::MyException>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::test::fixtures::basic-structured-annotations::MyException>::fields_types = {{
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::test::fixtures::basic-structured-annotations::MyUnion>::fields_names = {{
  "first",
  "second",
}};
const std::array<int16_t, 2> TStructDataStorage<::test::fixtures::basic-structured-annotations::MyUnion>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::test::fixtures::basic-structured-annotations::MyUnion>::fields_types = {{
  TType::T_STRING,
  TType::T_I64,
}};

} // namespace thrift
} // namespace apache