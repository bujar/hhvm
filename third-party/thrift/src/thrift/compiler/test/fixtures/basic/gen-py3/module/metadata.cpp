/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include "src/gen-py3/module/metadata.h"

namespace test {
namespace fixtures {
namespace basic {
::apache::thrift::metadata::ThriftMetadata module_getThriftModuleMetadata() {
  ::apache::thrift::metadata::ThriftServiceMetadataResponse response;
  ::apache::thrift::metadata::ThriftMetadata& metadata = *response.metadata_ref();
  ::apache::thrift::detail::md::EnumMetadata<MyEnum>::gen(metadata);
  ::apache::thrift::detail::md::EnumMetadata<HackEnum>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<MyStruct>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<MyDataItem>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<MyUnion>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<ReservedKeyword>::gen(metadata);
  ::apache::thrift::detail::md::StructMetadata<UnionToBeRenamed>::gen(metadata);
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::test::fixtures::basic::FooService>>::gen(response);
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::test::fixtures::basic::FB303Service>>::gen(response);
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::test::fixtures::basic::MyService>>::gen(response);
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::test::fixtures::basic::DbMixedStackArguments>>::gen(response);
  return metadata;
}
} // namespace test
} // namespace fixtures
} // namespace basic