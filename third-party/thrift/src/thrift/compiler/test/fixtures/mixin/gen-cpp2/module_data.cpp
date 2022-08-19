/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/mixin/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::Mixin1>::fields_names = {{
  "field1",
}};
const std::array<int16_t, 1> TStructDataStorage<::cpp2::Mixin1>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::Mixin1>::fields_types = {{
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::Mixin2>::fields_names = {{
  "m1",
  "field2",
}};
const std::array<int16_t, 2> TStructDataStorage<::cpp2::Mixin2>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::Mixin2>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::Mixin3Base>::fields_names = {{
  "field3",
}};
const std::array<int16_t, 1> TStructDataStorage<::cpp2::Mixin3Base>::fields_ids = {{
  1,
}};
const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::Mixin3Base>::fields_types = {{
  TType::T_STRING,
}};

const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::Foo>::fields_names = {{
  "field4",
  "m2",
  "m3",
}};
const std::array<int16_t, 3> TStructDataStorage<::cpp2::Foo>::fields_ids = {{
  1,
  2,
  3,
}};
const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::Foo>::fields_types = {{
  TType::T_STRING,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};

} // namespace thrift
} // namespace apache