#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from cpython cimport bool as pbool, int as pint, float as pfloat

cimport folly.iobuf as _fbthrift_iobuf

cimport thrift.py3.builder

cimport facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types
cimport facebook.thrift.annotation.thrift.builders as _facebook_thrift_annotation_thrift_builders

cimport module.types as _module_types

cdef class Foo_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint field1
    cdef public pint field2
    cdef public pint field3


cdef class Foo2_Builder(thrift.py3.builder.StructBuilder):
    cdef public pint field1
    cdef public pint field2
    cdef public pint field3

