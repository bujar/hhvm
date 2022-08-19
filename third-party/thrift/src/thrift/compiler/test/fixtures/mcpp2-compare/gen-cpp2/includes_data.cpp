/**
 * Autogenerated by Thrift for src/includes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/includes_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::a::different::ns::AnEnum, 2> TEnumDataStorage<::a::different::ns::AnEnum>::values = {{
  type::FIELDA,
  type::FIELDB,
}};
const std::array<folly::StringPiece, 2> TEnumDataStorage<::a::different::ns::AnEnum>::names = {{
  "FIELDA",
  "FIELDB",
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::a::different::ns::AStruct>::fields_names = {{
  "FieldA",
}};
const std::array<int16_t, 1> TStructDataStorage<::a::different::ns::AStruct>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::a::different::ns::AStruct>::fields_types = {{
  TType::T_I32,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::a::different::ns::AStructB>::fields_names = {{
  "FieldA",
}};
const std::array<int16_t, 1> TStructDataStorage<::a::different::ns::AStructB>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::a::different::ns::AStructB>::fields_types = {{
  TType::T_STRUCT,
}};

} // namespace thrift
} // namespace apache