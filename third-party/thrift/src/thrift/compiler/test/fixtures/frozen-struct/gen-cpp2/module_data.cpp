/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::some::ns::EnumB, 1> TEnumDataStorage<::some::ns::EnumB>::values = {{
  type::EMPTY,
}};
const std::array<folly::StringPiece, 1> TEnumDataStorage<::some::ns::EnumB>::names = {{
  "EMPTY",
}};

const std::array<folly::StringPiece, 6> TStructDataStorage<::some::ns::ModuleA>::fields_names = {{
  "i32Field",
  "strField",
  "listField",
  "mapField",
  "inclAField",
  "inclBField",
}};
const std::array<int16_t, 6> TStructDataStorage<::some::ns::ModuleA>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
}};
const std::array<protocol::TType, 6> TStructDataStorage<::some::ns::ModuleA>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
  TType::T_LIST,
  TType::T_MAP,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::some::ns::ModuleB>::fields_names = {{
  "i32Field",
  "inclEnumB",
}};
const std::array<int16_t, 2> TStructDataStorage<::some::ns::ModuleB>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::some::ns::ModuleB>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::some::ns::detail::DirectlyAdapted>::fields_names = {{
  "field",
}};
const std::array<int16_t, 1> TStructDataStorage<::some::ns::detail::DirectlyAdapted>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::some::ns::detail::DirectlyAdapted>::fields_types = {{
  TType::T_I32,
}};

} // namespace thrift
} // namespace apache