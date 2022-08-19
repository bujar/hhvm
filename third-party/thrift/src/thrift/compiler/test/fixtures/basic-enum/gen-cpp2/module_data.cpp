/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

namespace apache {
namespace thrift {

const std::array<::test::fixtures::enumstrict::EmptyEnum, 0> TEnumDataStorage<::test::fixtures::enumstrict::EmptyEnum>::values = {{
}};
const std::array<folly::StringPiece, 0> TEnumDataStorage<::test::fixtures::enumstrict::EmptyEnum>::names = {{
}};

const std::array<::test::fixtures::enumstrict::MyEnum, 2> TEnumDataStorage<::test::fixtures::enumstrict::MyEnum>::values = {{
  type::ONE,
  type::TWO,
}};
const std::array<folly::StringPiece, 2> TEnumDataStorage<::test::fixtures::enumstrict::MyEnum>::names = {{
  "ONE",
  "TWO",
}};

const std::array<::test::fixtures::enumstrict::MyBigEnum, 20> TEnumDataStorage<::test::fixtures::enumstrict::MyBigEnum>::values = {{
  type::UNKNOWN,
  type::ONE,
  type::TWO,
  type::THREE,
  type::FOUR,
  type::FIVE,
  type::SIX,
  type::SEVEN,
  type::EIGHT,
  type::NINE,
  type::TEN,
  type::ELEVEN,
  type::TWELVE,
  type::THIRTEEN,
  type::FOURTEEN,
  type::FIFTEEN,
  type::SIXTEEN,
  type::SEVENTEEN,
  type::EIGHTEEN,
  type::NINETEEN,
}};
const std::array<folly::StringPiece, 20> TEnumDataStorage<::test::fixtures::enumstrict::MyBigEnum>::names = {{
  "UNKNOWN",
  "ONE",
  "TWO",
  "THREE",
  "FOUR",
  "FIVE",
  "SIX",
  "SEVEN",
  "EIGHT",
  "NINE",
  "TEN",
  "ELEVEN",
  "TWELVE",
  "THIRTEEN",
  "FOURTEEN",
  "FIFTEEN",
  "SIXTEEN",
  "SEVENTEEN",
  "EIGHTEEN",
  "NINETEEN",
}};

const std::array<folly::StringPiece, 2> TStructDataStorage<::test::fixtures::enumstrict::MyStruct>::fields_names = {{
  "myEnum",
  "myBigEnum",
}};
const std::array<int16_t, 2> TStructDataStorage<::test::fixtures::enumstrict::MyStruct>::fields_ids = {{
  1,
  2,
}};
const std::array<protocol::TType, 2> TStructDataStorage<::test::fixtures::enumstrict::MyStruct>::fields_types = {{
  TType::T_I32,
  TType::T_I32,
}};

} // namespace thrift
} // namespace apache