/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/templated-deserialize/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

constexpr std::size_t const TEnumTraits<::cpp2::MyEnumA>::size;
folly::Range<::cpp2::MyEnumA const*> const TEnumTraits<::cpp2::MyEnumA>::values = folly::range(TEnumDataStorage<::cpp2::MyEnumA>::values);
folly::Range<folly::StringPiece const*> const TEnumTraits<::cpp2::MyEnumA>::names = folly::range(TEnumDataStorage<::cpp2::MyEnumA>::names);

bool TEnumTraits<::cpp2::MyEnumA>::findName(type value, folly::StringPiece* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::cpp2::MyEnumA>::findValue(folly::StringPiece name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift

namespace cpp2 {
#ifndef ANDROID
FOLLY_PUSH_WARNING
FOLLY_GNU_DISABLE_WARNING("-Wdeprecated-declarations")
const _MyEnumA_EnumMapFactory::ValuesToNamesMapType _MyEnumA_VALUES_TO_NAMES = _MyEnumA_EnumMapFactory::makeValuesToNamesMap();
const _MyEnumA_EnumMapFactory::NamesToValuesMapType _MyEnumA_NAMES_TO_VALUES = _MyEnumA_EnumMapFactory::makeNamesToValuesMap();
FOLLY_POP_WARNING
#endif
} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::SmallStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::SmallStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

const folly::StringPiece SmallStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<SmallStruct>::fields_names[folly::to_underlying(ord) - 1];
}


SmallStruct::SmallStruct(apache::thrift::FragileConstructor, bool small_A__arg, ::std::int32_t small_B__arg) :
    __fbthrift_field_small_A(std::move(small_A__arg)),
    __fbthrift_field_small_B(std::move(small_B__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
}


void SmallStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_small_A = bool();
  this->__fbthrift_field_small_B = ::std::int32_t();
  __isset = {};
}

void SmallStruct::__fbthrift_clear_terse_fields() {
}

bool SmallStruct::__fbthrift_is_empty() const {
  return false;
}

bool SmallStruct::operator==(FOLLY_MAYBE_UNUSED const SmallStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.small_A_ref() == rhs.small_A_ref())) {
    return false;
  }
  if (!(lhs.small_B_ref() == rhs.small_B_ref())) {
    return false;
  }
  return true;
}

bool SmallStruct::operator<(FOLLY_MAYBE_UNUSED const SmallStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.small_A_ref() == rhs.small_A_ref())) {
    return lhs.small_A_ref() < rhs.small_A_ref();
  }
  if (!(lhs.small_B_ref() == rhs.small_B_ref())) {
    return lhs.small_B_ref() < rhs.small_B_ref();
  }
  return false;
}


void swap(FOLLY_MAYBE_UNUSED SmallStruct& a, FOLLY_MAYBE_UNUSED SmallStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_small_A, b.__fbthrift_field_small_A);
  swap(a.__fbthrift_field_small_B, b.__fbthrift_field_small_B);
  swap(a.__isset, b.__isset);
}

template void SmallStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t SmallStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t SmallStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t SmallStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void SmallStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t SmallStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t SmallStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t SmallStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // cpp2

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::containerStruct>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::containerStruct>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace cpp2 {

const folly::StringPiece containerStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<containerStruct>::fields_names[folly::to_underlying(ord) - 1];
}

containerStruct::containerStruct(const containerStruct& srcObj) :
    __fbthrift_field_fieldA(srcObj.__fbthrift_field_fieldA),
    __fbthrift_field_fieldB(srcObj.__fbthrift_field_fieldB),
    __fbthrift_field_fieldC(srcObj.__fbthrift_field_fieldC),
    __fbthrift_field_fieldD(srcObj.__fbthrift_field_fieldD),
    __fbthrift_field_fieldE(srcObj.__fbthrift_field_fieldE),
    __fbthrift_field_fieldF(srcObj.__fbthrift_field_fieldF),
    __fbthrift_field_fieldG(srcObj.__fbthrift_field_fieldG),
    __fbthrift_field_fieldH(srcObj.__fbthrift_field_fieldH),
    __fbthrift_field_fieldI(srcObj.__fbthrift_field_fieldI),
    __fbthrift_field_fieldJ(srcObj.__fbthrift_field_fieldJ),
    __fbthrift_field_fieldK(srcObj.__fbthrift_field_fieldK),
    __fbthrift_field_fieldL(srcObj.__fbthrift_field_fieldL),
    __fbthrift_field_fieldM(srcObj.__fbthrift_field_fieldM),
    __fbthrift_field_fieldN(srcObj.__fbthrift_field_fieldN),
    __fbthrift_field_fieldO(srcObj.__fbthrift_field_fieldO),
    __fbthrift_field_fieldP(srcObj.__fbthrift_field_fieldP),
    __fbthrift_field_fieldQ(srcObj.__fbthrift_field_fieldQ),
    fieldR(::apache::thrift::detail::st::copy_field<
          ::apache::thrift::type_class::map<::apache::thrift::type_class::string, ::apache::thrift::type_class::integral>>(srcObj.fieldR)),
    fieldS(::apache::thrift::detail::st::copy_field<
          ::apache::thrift::type_class::structure>(srcObj.fieldS)),
    fieldT(srcObj.fieldT),
    fieldU(srcObj.fieldU),
    fieldX(::apache::thrift::detail::st::copy_field<
          ::apache::thrift::type_class::structure>(srcObj.fieldX)),
    __isset(srcObj.__isset) {
}

containerStruct& containerStruct::operator=(const containerStruct& other) {
  containerStruct tmp(other);
  swap(*this, tmp);
  return *this;
}

containerStruct::containerStruct() :
      __fbthrift_field_fieldA(),
      __fbthrift_field_fieldC(static_cast<::std::set<::std::int32_t>>(std::initializer_list<::std::int32_t>{1,
  2,
  3,
  4})),
      __fbthrift_field_fieldE(apache::thrift::StringTraits<std::string>::fromStringLiteral("somestring")),
      __fbthrift_field_fieldI(static_cast<bool>(true)),
      __fbthrift_field_fieldJ(static_cast<::std::map<::std::string, ::std::vector<::std::int32_t>>>(std::initializer_list<std::pair<const ::std::string, ::std::vector<::std::int32_t>>>{{apache::thrift::StringTraits<std::string>::fromStringLiteral("subfieldA"), std::initializer_list<::std::int32_t>{1,
  4,
  8,
  12}},
  {apache::thrift::StringTraits<std::string>::fromStringLiteral("subfieldB"), std::initializer_list<::std::int32_t>{2,
  5,
  9,
  13}}})),
      __fbthrift_field_fieldQ(),
      fieldR(std::make_unique<::std::map<::std::string, bool>>()),
      fieldS(std::make_unique<::cpp2::SmallStruct>()),
      fieldT(std::make_shared<::cpp2::SmallStruct>()),
      fieldU(std::make_shared<::cpp2::SmallStruct>()),
      fieldX(std::make_unique<::cpp2::SmallStruct>()) {
}


containerStruct::~containerStruct() {}

containerStruct::containerStruct(FOLLY_MAYBE_UNUSED containerStruct&& other) noexcept :
    __fbthrift_field_fieldA(std::move(other.__fbthrift_field_fieldA)),
    __fbthrift_field_fieldB(std::move(other.__fbthrift_field_fieldB)),
    __fbthrift_field_fieldC(std::move(other.__fbthrift_field_fieldC)),
    __fbthrift_field_fieldD(std::move(other.__fbthrift_field_fieldD)),
    __fbthrift_field_fieldE(std::move(other.__fbthrift_field_fieldE)),
    __fbthrift_field_fieldF(std::move(other.__fbthrift_field_fieldF)),
    __fbthrift_field_fieldG(std::move(other.__fbthrift_field_fieldG)),
    __fbthrift_field_fieldH(std::move(other.__fbthrift_field_fieldH)),
    __fbthrift_field_fieldI(std::move(other.__fbthrift_field_fieldI)),
    __fbthrift_field_fieldJ(std::move(other.__fbthrift_field_fieldJ)),
    __fbthrift_field_fieldK(std::move(other.__fbthrift_field_fieldK)),
    __fbthrift_field_fieldL(std::move(other.__fbthrift_field_fieldL)),
    __fbthrift_field_fieldM(std::move(other.__fbthrift_field_fieldM)),
    __fbthrift_field_fieldN(std::move(other.__fbthrift_field_fieldN)),
    __fbthrift_field_fieldO(std::move(other.__fbthrift_field_fieldO)),
    __fbthrift_field_fieldP(std::move(other.__fbthrift_field_fieldP)),
    __fbthrift_field_fieldQ(std::move(other.__fbthrift_field_fieldQ)),
    fieldR(std::move(other.fieldR)),
    fieldS(std::move(other.fieldS)),
    fieldT(std::move(other.fieldT)),
    fieldU(std::move(other.fieldU)),
    fieldX(std::move(other.fieldX)),
    __isset(other.__isset) {
}

containerStruct& containerStruct::operator=(FOLLY_MAYBE_UNUSED containerStruct&& other) noexcept {
    this->__fbthrift_field_fieldA = std::move(other.__fbthrift_field_fieldA);
    this->__fbthrift_field_fieldB = std::move(other.__fbthrift_field_fieldB);
    this->__fbthrift_field_fieldC = std::move(other.__fbthrift_field_fieldC);
    this->__fbthrift_field_fieldD = std::move(other.__fbthrift_field_fieldD);
    this->__fbthrift_field_fieldE = std::move(other.__fbthrift_field_fieldE);
    this->__fbthrift_field_fieldF = std::move(other.__fbthrift_field_fieldF);
    this->__fbthrift_field_fieldG = std::move(other.__fbthrift_field_fieldG);
    this->__fbthrift_field_fieldH = std::move(other.__fbthrift_field_fieldH);
    this->__fbthrift_field_fieldI = std::move(other.__fbthrift_field_fieldI);
    this->__fbthrift_field_fieldJ = std::move(other.__fbthrift_field_fieldJ);
    this->__fbthrift_field_fieldK = std::move(other.__fbthrift_field_fieldK);
    this->__fbthrift_field_fieldL = std::move(other.__fbthrift_field_fieldL);
    this->__fbthrift_field_fieldM = std::move(other.__fbthrift_field_fieldM);
    this->__fbthrift_field_fieldN = std::move(other.__fbthrift_field_fieldN);
    this->__fbthrift_field_fieldO = std::move(other.__fbthrift_field_fieldO);
    this->__fbthrift_field_fieldP = std::move(other.__fbthrift_field_fieldP);
    this->__fbthrift_field_fieldQ = std::move(other.__fbthrift_field_fieldQ);
    this->fieldR = std::move(other.fieldR);
    this->fieldS = std::move(other.fieldS);
    this->fieldT = std::move(other.fieldT);
    this->fieldU = std::move(other.fieldU);
    this->fieldX = std::move(other.fieldX);
    __isset = other.__isset;
    return *this;
}


containerStruct::containerStruct(apache::thrift::FragileConstructor, bool fieldA__arg, ::std::map<::std::string, bool> fieldB__arg, ::std::set<::std::int32_t> fieldC__arg, ::std::string fieldD__arg, ::std::string fieldE__arg, ::std::vector<::std::vector<::std::vector<::std::int32_t>>> fieldF__arg, ::std::map<::std::string, ::std::map<::std::string, ::std::map<::std::string, ::std::int32_t>>> fieldG__arg, ::std::vector<::std::set<::std::int32_t>> fieldH__arg, bool fieldI__arg, ::std::map<::std::string, ::std::vector<::std::int32_t>> fieldJ__arg, ::std::vector<::std::vector<::std::vector<::std::vector<::std::int32_t>>>> fieldK__arg, ::std::set<::std::set<::std::set<bool>>> fieldL__arg, ::std::map<::std::set<::std::vector<::std::int32_t>>, ::std::map<::std::vector<::std::set<::std::string>>, ::std::string>> fieldM__arg, ::std::vector<::cpp2::IndirectionA> fieldN__arg, ::std::vector<::cpp2::IndirectionB> fieldO__arg, ::std::vector<::cpp2::IndirectionC> fieldP__arg, ::cpp2::MyEnumA fieldQ__arg, ::std::unique_ptr<::std::map<::std::string, bool>> fieldR__arg, ::std::unique_ptr<::cpp2::SmallStruct> fieldS__arg, ::std::shared_ptr<::cpp2::SmallStruct> fieldT__arg, ::std::shared_ptr<const ::cpp2::SmallStruct> fieldU__arg, ::std::unique_ptr<::cpp2::SmallStruct> fieldX__arg) :
    __fbthrift_field_fieldA(std::move(fieldA__arg)),
    __fbthrift_field_fieldB(std::move(fieldB__arg)),
    __fbthrift_field_fieldC(std::move(fieldC__arg)),
    __fbthrift_field_fieldD(std::move(fieldD__arg)),
    __fbthrift_field_fieldE(std::move(fieldE__arg)),
    __fbthrift_field_fieldF(std::move(fieldF__arg)),
    __fbthrift_field_fieldG(std::move(fieldG__arg)),
    __fbthrift_field_fieldH(std::move(fieldH__arg)),
    __fbthrift_field_fieldI(std::move(fieldI__arg)),
    __fbthrift_field_fieldJ(std::move(fieldJ__arg)),
    __fbthrift_field_fieldK(std::move(fieldK__arg)),
    __fbthrift_field_fieldL(std::move(fieldL__arg)),
    __fbthrift_field_fieldM(std::move(fieldM__arg)),
    __fbthrift_field_fieldN(std::move(fieldN__arg)),
    __fbthrift_field_fieldO(std::move(fieldO__arg)),
    __fbthrift_field_fieldP(std::move(fieldP__arg)),
    __fbthrift_field_fieldQ(std::move(fieldQ__arg)),
    fieldR(std::move(fieldR__arg)),
    fieldS(std::move(fieldS__arg)),
    fieldT(std::move(fieldT__arg)),
    fieldU(std::move(fieldU__arg)),
    fieldX(std::move(fieldX__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
  __isset.set(folly::index_constant<4>(), true);
  __isset.set(folly::index_constant<5>(), true);
  __isset.set(folly::index_constant<6>(), true);
  __isset.set(folly::index_constant<7>(), true);
  __isset.set(folly::index_constant<8>(), true);
  __isset.set(folly::index_constant<9>(), true);
  __isset.set(folly::index_constant<10>(), true);
  __isset.set(folly::index_constant<11>(), true);
  __isset.set(folly::index_constant<12>(), true);
  __isset.set(folly::index_constant<13>(), true);
  __isset.set(folly::index_constant<14>(), true);
  __isset.set(folly::index_constant<15>(), true);
  __isset.set(folly::index_constant<16>(), true);
}


void containerStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_fieldA = bool();
  this->__fbthrift_field_fieldB.clear();
  this->__fbthrift_field_fieldC.clear();
  this->__fbthrift_field_fieldD = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_fieldE = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_fieldF.clear();
  this->__fbthrift_field_fieldG.clear();
  this->__fbthrift_field_fieldH.clear();
  this->__fbthrift_field_fieldI = bool();
  this->__fbthrift_field_fieldJ.clear();
  this->__fbthrift_field_fieldK.clear();
  this->__fbthrift_field_fieldL.clear();
  this->__fbthrift_field_fieldM.clear();
  this->__fbthrift_field_fieldN.clear();
  this->__fbthrift_field_fieldO.clear();
  this->__fbthrift_field_fieldP.clear();
  this->__fbthrift_field_fieldQ = ::cpp2::MyEnumA();
  this->fieldR = ::apache::thrift::detail::make_mutable_smart_ptr<::std::unique_ptr<::std::map<::std::string, bool>>>();
  if (this->fieldS) ::apache::thrift::clear(*this->fieldS);
  if (this->fieldT) this->fieldT = ::apache::thrift::detail::make_mutable_smart_ptr<::std::shared_ptr<::cpp2::SmallStruct>>();
  if (this->fieldU) this->fieldU = ::apache::thrift::detail::make_mutable_smart_ptr<::std::shared_ptr<const ::cpp2::SmallStruct>>();
  if (this->fieldX) ::apache::thrift::clear(*this->fieldX);
  __isset = {};
}

void containerStruct::__fbthrift_clear_terse_fields() {
}

bool containerStruct::__fbthrift_is_empty() const {
  return false;
}

bool containerStruct::operator==(FOLLY_MAYBE_UNUSED const containerStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.fieldA_ref() == rhs.fieldA_ref())) {
    return false;
  }
  if (!(lhs.fieldB_ref() == rhs.fieldB_ref())) {
    return false;
  }
  if (!(lhs.fieldC_ref() == rhs.fieldC_ref())) {
    return false;
  }
  if (!(lhs.fieldD_ref() == rhs.fieldD_ref())) {
    return false;
  }
  if (!(lhs.fieldE_ref() == rhs.fieldE_ref())) {
    return false;
  }
  if (!(lhs.fieldF_ref() == rhs.fieldF_ref())) {
    return false;
  }
  if (!(lhs.fieldG_ref() == rhs.fieldG_ref())) {
    return false;
  }
  if (!(lhs.fieldH_ref() == rhs.fieldH_ref())) {
    return false;
  }
  if (!(lhs.fieldI_ref() == rhs.fieldI_ref())) {
    return false;
  }
  if (!(lhs.fieldJ_ref() == rhs.fieldJ_ref())) {
    return false;
  }
  if (!(lhs.fieldK_ref() == rhs.fieldK_ref())) {
    return false;
  }
  if (!(lhs.fieldL_ref() == rhs.fieldL_ref())) {
    return false;
  }
  if (!(lhs.fieldM_ref() == rhs.fieldM_ref())) {
    return false;
  }
  if (!(lhs.fieldN_ref() == rhs.fieldN_ref())) {
    return false;
  }
  if (!(lhs.fieldO_ref() == rhs.fieldO_ref())) {
    return false;
  }
  if (!(lhs.fieldP_ref() == rhs.fieldP_ref())) {
    return false;
  }
  if (!(lhs.fieldQ_ref() == rhs.fieldQ_ref())) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldR_ref(), rhs.fieldR_ref()))) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldS_ref(), rhs.fieldS_ref()))) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldT_ref(), rhs.fieldT_ref()))) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldU_ref(), rhs.fieldU_ref()))) {
    return false;
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldX_ref(), rhs.fieldX_ref()))) {
    return false;
  }
  return true;
}

bool containerStruct::operator<(FOLLY_MAYBE_UNUSED const containerStruct& rhs) const {
  FOLLY_MAYBE_UNUSED auto& lhs = *this;
  if (!(lhs.fieldA_ref() == rhs.fieldA_ref())) {
    return lhs.fieldA_ref() < rhs.fieldA_ref();
  }
  if (!(lhs.fieldB_ref() == rhs.fieldB_ref())) {
    return lhs.fieldB_ref() < rhs.fieldB_ref();
  }
  if (!(lhs.fieldC_ref() == rhs.fieldC_ref())) {
    return lhs.fieldC_ref() < rhs.fieldC_ref();
  }
  if (!(lhs.fieldD_ref() == rhs.fieldD_ref())) {
    return lhs.fieldD_ref() < rhs.fieldD_ref();
  }
  if (!(lhs.fieldE_ref() == rhs.fieldE_ref())) {
    return lhs.fieldE_ref() < rhs.fieldE_ref();
  }
  if (!(lhs.fieldF_ref() == rhs.fieldF_ref())) {
    return lhs.fieldF_ref() < rhs.fieldF_ref();
  }
  if (!(lhs.fieldG_ref() == rhs.fieldG_ref())) {
    return lhs.fieldG_ref() < rhs.fieldG_ref();
  }
  if (!(lhs.fieldH_ref() == rhs.fieldH_ref())) {
    return lhs.fieldH_ref() < rhs.fieldH_ref();
  }
  if (!(lhs.fieldI_ref() == rhs.fieldI_ref())) {
    return lhs.fieldI_ref() < rhs.fieldI_ref();
  }
  if (!(lhs.fieldJ_ref() == rhs.fieldJ_ref())) {
    return lhs.fieldJ_ref() < rhs.fieldJ_ref();
  }
  if (!(lhs.fieldK_ref() == rhs.fieldK_ref())) {
    return lhs.fieldK_ref() < rhs.fieldK_ref();
  }
  if (!(lhs.fieldL_ref() == rhs.fieldL_ref())) {
    return lhs.fieldL_ref() < rhs.fieldL_ref();
  }
  if (!(lhs.fieldM_ref() == rhs.fieldM_ref())) {
    return lhs.fieldM_ref() < rhs.fieldM_ref();
  }
  if (!(lhs.fieldN_ref() == rhs.fieldN_ref())) {
    return lhs.fieldN_ref() < rhs.fieldN_ref();
  }
  if (!(lhs.fieldO_ref() == rhs.fieldO_ref())) {
    return lhs.fieldO_ref() < rhs.fieldO_ref();
  }
  if (!(lhs.fieldP_ref() == rhs.fieldP_ref())) {
    return lhs.fieldP_ref() < rhs.fieldP_ref();
  }
  if (!(lhs.fieldQ_ref() == rhs.fieldQ_ref())) {
    return lhs.fieldQ_ref() < rhs.fieldQ_ref();
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldR_ref(), rhs.fieldR_ref()))) {
    return ::apache::thrift::detail::pointer_less(lhs.fieldR_ref(), rhs.fieldR_ref());
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldS_ref(), rhs.fieldS_ref()))) {
    return ::apache::thrift::detail::pointer_less(lhs.fieldS_ref(), rhs.fieldS_ref());
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldT_ref(), rhs.fieldT_ref()))) {
    return ::apache::thrift::detail::pointer_less(lhs.fieldT_ref(), rhs.fieldT_ref());
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldU_ref(), rhs.fieldU_ref()))) {
    return ::apache::thrift::detail::pointer_less(lhs.fieldU_ref(), rhs.fieldU_ref());
  }
  if ((!::apache::thrift::detail::pointer_equal(lhs.fieldX_ref(), rhs.fieldX_ref()))) {
    return ::apache::thrift::detail::pointer_less(lhs.fieldX_ref(), rhs.fieldX_ref());
  }
  return false;
}

const ::std::map<::std::string, bool>& containerStruct::get_fieldB() const& {
  return __fbthrift_field_fieldB;
}

::std::map<::std::string, bool> containerStruct::get_fieldB() && {
  return std::move(__fbthrift_field_fieldB);
}

const ::std::set<::std::int32_t>& containerStruct::get_fieldC() const& {
  return __fbthrift_field_fieldC;
}

::std::set<::std::int32_t> containerStruct::get_fieldC() && {
  return std::move(__fbthrift_field_fieldC);
}

const ::std::vector<::std::vector<::std::vector<::std::int32_t>>>& containerStruct::get_fieldF() const& {
  return __fbthrift_field_fieldF;
}

::std::vector<::std::vector<::std::vector<::std::int32_t>>> containerStruct::get_fieldF() && {
  return std::move(__fbthrift_field_fieldF);
}

const ::std::map<::std::string, ::std::map<::std::string, ::std::map<::std::string, ::std::int32_t>>>& containerStruct::get_fieldG() const& {
  return __fbthrift_field_fieldG;
}

::std::map<::std::string, ::std::map<::std::string, ::std::map<::std::string, ::std::int32_t>>> containerStruct::get_fieldG() && {
  return std::move(__fbthrift_field_fieldG);
}

const ::std::vector<::std::set<::std::int32_t>>& containerStruct::get_fieldH() const& {
  return __fbthrift_field_fieldH;
}

::std::vector<::std::set<::std::int32_t>> containerStruct::get_fieldH() && {
  return std::move(__fbthrift_field_fieldH);
}

const ::std::map<::std::string, ::std::vector<::std::int32_t>>& containerStruct::get_fieldJ() const& {
  return __fbthrift_field_fieldJ;
}

::std::map<::std::string, ::std::vector<::std::int32_t>> containerStruct::get_fieldJ() && {
  return std::move(__fbthrift_field_fieldJ);
}

const ::std::vector<::std::vector<::std::vector<::std::vector<::std::int32_t>>>>& containerStruct::get_fieldK() const& {
  return __fbthrift_field_fieldK;
}

::std::vector<::std::vector<::std::vector<::std::vector<::std::int32_t>>>> containerStruct::get_fieldK() && {
  return std::move(__fbthrift_field_fieldK);
}

const ::std::set<::std::set<::std::set<bool>>>& containerStruct::get_fieldL() const& {
  return __fbthrift_field_fieldL;
}

::std::set<::std::set<::std::set<bool>>> containerStruct::get_fieldL() && {
  return std::move(__fbthrift_field_fieldL);
}

const ::std::map<::std::set<::std::vector<::std::int32_t>>, ::std::map<::std::vector<::std::set<::std::string>>, ::std::string>>& containerStruct::get_fieldM() const& {
  return __fbthrift_field_fieldM;
}

::std::map<::std::set<::std::vector<::std::int32_t>>, ::std::map<::std::vector<::std::set<::std::string>>, ::std::string>> containerStruct::get_fieldM() && {
  return std::move(__fbthrift_field_fieldM);
}

const ::std::vector<::cpp2::IndirectionA>& containerStruct::get_fieldN() const& {
  return __fbthrift_field_fieldN;
}

::std::vector<::cpp2::IndirectionA> containerStruct::get_fieldN() && {
  return std::move(__fbthrift_field_fieldN);
}

const ::std::vector<::cpp2::IndirectionB>& containerStruct::get_fieldO() const& {
  return __fbthrift_field_fieldO;
}

::std::vector<::cpp2::IndirectionB> containerStruct::get_fieldO() && {
  return std::move(__fbthrift_field_fieldO);
}

const ::std::vector<::cpp2::IndirectionC>& containerStruct::get_fieldP() const& {
  return __fbthrift_field_fieldP;
}

::std::vector<::cpp2::IndirectionC> containerStruct::get_fieldP() && {
  return std::move(__fbthrift_field_fieldP);
}


void swap(FOLLY_MAYBE_UNUSED containerStruct& a, FOLLY_MAYBE_UNUSED containerStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_fieldA, b.__fbthrift_field_fieldA);
  swap(a.__fbthrift_field_fieldB, b.__fbthrift_field_fieldB);
  swap(a.__fbthrift_field_fieldC, b.__fbthrift_field_fieldC);
  swap(a.__fbthrift_field_fieldD, b.__fbthrift_field_fieldD);
  swap(a.__fbthrift_field_fieldE, b.__fbthrift_field_fieldE);
  swap(a.__fbthrift_field_fieldF, b.__fbthrift_field_fieldF);
  swap(a.__fbthrift_field_fieldG, b.__fbthrift_field_fieldG);
  swap(a.__fbthrift_field_fieldH, b.__fbthrift_field_fieldH);
  swap(a.__fbthrift_field_fieldI, b.__fbthrift_field_fieldI);
  swap(a.__fbthrift_field_fieldJ, b.__fbthrift_field_fieldJ);
  swap(a.__fbthrift_field_fieldK, b.__fbthrift_field_fieldK);
  swap(a.__fbthrift_field_fieldL, b.__fbthrift_field_fieldL);
  swap(a.__fbthrift_field_fieldM, b.__fbthrift_field_fieldM);
  swap(a.__fbthrift_field_fieldN, b.__fbthrift_field_fieldN);
  swap(a.__fbthrift_field_fieldO, b.__fbthrift_field_fieldO);
  swap(a.__fbthrift_field_fieldP, b.__fbthrift_field_fieldP);
  swap(a.__fbthrift_field_fieldQ, b.__fbthrift_field_fieldQ);
  swap(a.fieldR, b.fieldR);
  swap(a.fieldS, b.fieldS);
  swap(a.fieldT, b.fieldT);
  swap(a.fieldU, b.fieldU);
  swap(a.fieldX, b.fieldX);
  swap(a.__isset, b.__isset);
}

template void containerStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t containerStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t containerStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void containerStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t containerStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t containerStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        containerStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::SmallStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        containerStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::SmallStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        containerStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::SmallStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        containerStruct,
        ::apache::thrift::type_class::structure,
        ::cpp2::SmallStruct>,
    "inconsistent use of json option");

} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2