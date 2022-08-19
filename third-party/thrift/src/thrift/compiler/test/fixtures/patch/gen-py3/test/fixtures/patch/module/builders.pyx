#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cdef class MyData_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _test_fixtures_patch_module_types.MyData

    def __iter__(self):
        yield "data1", self.data1
        yield "data2", self.data2

cdef class InnerUnion_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _test_fixtures_patch_module_types.InnerUnion

    def __iter__(self):
        yield "innerOption", self.innerOption

cdef class MyUnion_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _test_fixtures_patch_module_types.MyUnion

    def __iter__(self):
        yield "option1", self.option1
        yield "option2", self.option2
        yield "option3", self.option3

cdef class MyStruct_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _test_fixtures_patch_module_types.MyStruct

    def __iter__(self):
        yield "boolVal", self.boolVal
        yield "byteVal", self.byteVal
        yield "i16Val", self.i16Val
        yield "i32Val", self.i32Val
        yield "i64Val", self.i64Val
        yield "floatVal", self.floatVal
        yield "doubleVal", self.doubleVal
        yield "stringVal", self.stringVal
        yield "binaryVal", self.binaryVal
        yield "structVal", self.structVal
        yield "optBoolVal", self.optBoolVal
        yield "optByteVal", self.optByteVal
        yield "optI16Val", self.optI16Val
        yield "optI32Val", self.optI32Val
        yield "optI64Val", self.optI64Val
        yield "optFloatVal", self.optFloatVal
        yield "optDoubleVal", self.optDoubleVal
        yield "optStringVal", self.optStringVal
        yield "optBinaryVal", self.optBinaryVal
        yield "optStructVal", self.optStructVal
        yield "optListVal", self.optListVal
        yield "optSetVal", self.optSetVal
        yield "optMapVal", self.optMapVal
        yield "unionVal", self.unionVal
