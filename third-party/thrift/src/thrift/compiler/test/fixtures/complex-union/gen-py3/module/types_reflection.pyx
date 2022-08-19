#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection cimport (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
)


cimport module.types as _module_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __StructSpec get_reflection__ComplexUnion():
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="ComplexUnion",
        kind=__StructType.UNION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="intValue",
            type=int,
            kind=__NumberType.I64,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=5,
            name="stringValue",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="intListValue",
            type=_module_types.List__i64,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="stringListValue",
            type=_module_types.List__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=9,
            name="typedefValue",
            type=_module_types.Map__i16_string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=14,
            name="stringRef",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
                """cpp2.ref""": """true""",            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__ListUnion():
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="ListUnion",
        kind=__StructType.UNION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="intListValue",
            type=_module_types.List__i64,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="stringListValue",
            type=_module_types.List__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__DataUnion():
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="DataUnion",
        kind=__StructType.UNION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="binaryData",
            type=bytes,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="stringData",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__Val():
    cdef _module_types.Val defaults = _module_types.Val._fbthrift_create(
        constant_shared_ptr[_module_types.cVal](
            default_inst[_module_types.cVal]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="Val",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="strVal",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="intVal",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=9,
            name="typedefValue",
            type=_module_types.Map__i16_string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__ValUnion():
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="ValUnion",
        kind=__StructType.UNION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="v1",
            type=_module_types.Val,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="v2",
            type=_module_types.Val,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__VirtualComplexUnion():
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="VirtualComplexUnion",
        kind=__StructType.UNION,
        annotations={
            """cpp.virtual""": """1""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="thingOne",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="thingTwo",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__NonCopyableStruct():
    cdef _module_types.NonCopyableStruct defaults = _module_types.NonCopyableStruct._fbthrift_create(
        constant_shared_ptr[_module_types.cNonCopyableStruct](
            default_inst[_module_types.cNonCopyableStruct]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="NonCopyableStruct",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.noncopyable""": """1""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="num",
            type=int,
            kind=__NumberType.I64,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__NonCopyableUnion():
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="NonCopyableUnion",
        kind=__StructType.UNION,
        annotations={
            """cpp.noncopyable""": """1""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="s",
            type=_module_types.NonCopyableStruct,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __ListSpec get_reflection__List__i64():
    return __ListSpec._fbthrift_create(
        value=int,
        kind=__NumberType.I64,
    )

cdef __ListSpec get_reflection__List__string():
    return __ListSpec._fbthrift_create(
        value=str,
        kind=__NumberType.NOT_A_NUMBER,
    )

cdef __MapSpec get_reflection__Map__i16_string():
    return __MapSpec._fbthrift_create(
        key=int,
        key_kind=__NumberType.I16,
        value=str,
        value_kind=__NumberType.NOT_A_NUMBER,
    )
