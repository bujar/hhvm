#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cython.operator cimport dereference as deref
from libcpp.memory cimport make_unique, unique_ptr, shared_ptr
from thrift.py3.types cimport assign_unique_ptr, assign_shared_ptr, assign_shared_const_ptr

cimport thrift.py3.types
from thrift.py3.types cimport (
    reset_field as __reset_field,
    StructFieldsSetter as __StructFieldsSetter
)

from thrift.py3.types cimport const_pointer_cast


@__cython.auto_pickle(False)
cdef class __SmallStruct_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __SmallStruct_FieldsSetter _fbthrift_create(_module_types.cSmallStruct* struct_cpp_obj):
        cdef __SmallStruct_FieldsSetter __fbthrift_inst = __SmallStruct_FieldsSetter.__new__(__SmallStruct_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"small_A")] = __SmallStruct_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"small_B")] = __SmallStruct_FieldsSetter._set_field_1
        return __fbthrift_inst

    cdef void set_field(__SmallStruct_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __SmallStruct_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field small_A
        if _fbthrift_value is None:
            __reset_field[_module_types.cSmallStruct](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, bool):
            raise TypeError(f'small_A is not a { bool !r}.')
        deref(self._struct_cpp_obj).small_A_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field small_B
        if _fbthrift_value is None:
            __reset_field[_module_types.cSmallStruct](deref(self._struct_cpp_obj), 1)
            return
        if not isinstance(_fbthrift_value, int):
            raise TypeError(f'small_B is not a { int !r}.')
        _fbthrift_value = <cint32_t> _fbthrift_value
        deref(self._struct_cpp_obj).small_B_ref().assign(_fbthrift_value)


@__cython.auto_pickle(False)
cdef class __containerStruct_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __containerStruct_FieldsSetter _fbthrift_create(_module_types.ccontainerStruct* struct_cpp_obj):
        cdef __containerStruct_FieldsSetter __fbthrift_inst = __containerStruct_FieldsSetter.__new__(__containerStruct_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldA")] = __containerStruct_FieldsSetter._set_field_0
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldB")] = __containerStruct_FieldsSetter._set_field_1
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldC")] = __containerStruct_FieldsSetter._set_field_2
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldD")] = __containerStruct_FieldsSetter._set_field_3
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldE")] = __containerStruct_FieldsSetter._set_field_4
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldF")] = __containerStruct_FieldsSetter._set_field_5
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldG")] = __containerStruct_FieldsSetter._set_field_6
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldH")] = __containerStruct_FieldsSetter._set_field_7
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldI")] = __containerStruct_FieldsSetter._set_field_8
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldJ")] = __containerStruct_FieldsSetter._set_field_9
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldK")] = __containerStruct_FieldsSetter._set_field_10
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldL")] = __containerStruct_FieldsSetter._set_field_11
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldM")] = __containerStruct_FieldsSetter._set_field_12
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldN")] = __containerStruct_FieldsSetter._set_field_13
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldO")] = __containerStruct_FieldsSetter._set_field_14
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldP")] = __containerStruct_FieldsSetter._set_field_15
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldQ")] = __containerStruct_FieldsSetter._set_field_16
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldR")] = __containerStruct_FieldsSetter._set_field_17
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldS")] = __containerStruct_FieldsSetter._set_field_18
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldT")] = __containerStruct_FieldsSetter._set_field_19
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldU")] = __containerStruct_FieldsSetter._set_field_20
        __fbthrift_inst._setters[__cstring_view(<const char*>"fieldX")] = __containerStruct_FieldsSetter._set_field_21
        return __fbthrift_inst

    cdef void set_field(__containerStruct_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __containerStruct_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

    cdef void _set_field_0(self, _fbthrift_value) except *:
        # for field fieldA
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 0)
            return
        if not isinstance(_fbthrift_value, bool):
            raise TypeError(f'fieldA is not a { bool !r}.')
        deref(self._struct_cpp_obj).fieldA_ref().assign(_fbthrift_value)

    cdef void _set_field_1(self, _fbthrift_value) except *:
        # for field fieldB
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 1)
            return
        deref(self._struct_cpp_obj).fieldB_ref().assign(deref(_module_types.Map__string_bool(_fbthrift_value)._cpp_obj))

    cdef void _set_field_2(self, _fbthrift_value) except *:
        # for field fieldC
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 2)
            return
        deref(self._struct_cpp_obj).fieldC_ref().assign(deref(_module_types.Set__i32(_fbthrift_value)._cpp_obj))

    cdef void _set_field_3(self, _fbthrift_value) except *:
        # for field fieldD
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 3)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'fieldD is not a { str !r}.')
        deref(self._struct_cpp_obj).fieldD_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_4(self, _fbthrift_value) except *:
        # for field fieldE
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 4)
            return
        if not isinstance(_fbthrift_value, str):
            raise TypeError(f'fieldE is not a { str !r}.')
        deref(self._struct_cpp_obj).fieldE_ref().assign(cmove(bytes_to_string(_fbthrift_value.encode('utf-8'))))

    cdef void _set_field_5(self, _fbthrift_value) except *:
        # for field fieldF
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 5)
            return
        deref(self._struct_cpp_obj).fieldF_ref().assign(deref(_module_types.List__List__List__i32(_fbthrift_value)._cpp_obj))

    cdef void _set_field_6(self, _fbthrift_value) except *:
        # for field fieldG
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 6)
            return
        deref(self._struct_cpp_obj).fieldG_ref().assign(deref(_module_types.Map__string_Map__string_Map__string_i32(_fbthrift_value)._cpp_obj))

    cdef void _set_field_7(self, _fbthrift_value) except *:
        # for field fieldH
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 7)
            return
        deref(self._struct_cpp_obj).fieldH_ref().assign(deref(_module_types.List__Set__i32(_fbthrift_value)._cpp_obj))

    cdef void _set_field_8(self, _fbthrift_value) except *:
        # for field fieldI
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 8)
            return
        if not isinstance(_fbthrift_value, bool):
            raise TypeError(f'fieldI is not a { bool !r}.')
        deref(self._struct_cpp_obj).fieldI_ref().assign(_fbthrift_value)

    cdef void _set_field_9(self, _fbthrift_value) except *:
        # for field fieldJ
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 9)
            return
        deref(self._struct_cpp_obj).fieldJ_ref().assign(deref(_module_types.Map__string_List__i32(_fbthrift_value)._cpp_obj))

    cdef void _set_field_10(self, _fbthrift_value) except *:
        # for field fieldK
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 10)
            return
        deref(self._struct_cpp_obj).fieldK_ref().assign(deref(_module_types.List__List__List__List__i32(_fbthrift_value)._cpp_obj))

    cdef void _set_field_11(self, _fbthrift_value) except *:
        # for field fieldL
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 11)
            return
        deref(self._struct_cpp_obj).fieldL_ref().assign(deref(_module_types.Set__Set__Set__bool(_fbthrift_value)._cpp_obj))

    cdef void _set_field_12(self, _fbthrift_value) except *:
        # for field fieldM
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 12)
            return
        deref(self._struct_cpp_obj).fieldM_ref().assign(deref(_module_types.Map__Set__List__i32_Map__List__Set__string_string(_fbthrift_value)._cpp_obj))

    cdef void _set_field_13(self, _fbthrift_value) except *:
        # for field fieldN
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 13)
            return
        deref(self._struct_cpp_obj).fieldN_ref().assign(deref(_module_types.List__Foo__i64(_fbthrift_value)._cpp_obj))

    cdef void _set_field_14(self, _fbthrift_value) except *:
        # for field fieldO
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 14)
            return
        deref(self._struct_cpp_obj).fieldO_ref().assign(deref(_module_types.List__Bar__double(_fbthrift_value)._cpp_obj))

    cdef void _set_field_15(self, _fbthrift_value) except *:
        # for field fieldP
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 15)
            return
        deref(self._struct_cpp_obj).fieldP_ref().assign(deref(_module_types.List__Baz__i32(_fbthrift_value)._cpp_obj))

    cdef void _set_field_16(self, _fbthrift_value) except *:
        # for field fieldQ
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 16)
            return
        if not isinstance(_fbthrift_value, _module_types.MyEnumA):
            raise TypeError(f'field fieldQ value: {repr(_fbthrift_value)} is not of the enum type { _module_types.MyEnumA }.')
        deref(self._struct_cpp_obj).fieldQ_ref().assign(<_module_types.cMyEnumA><int>_fbthrift_value)

    cdef void _set_field_17(self, _fbthrift_value) except *:
        # for field fieldR
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 17)
            return
        assign_unique_ptr[cmap[string,cbool]](deref(self._struct_cpp_obj).fieldR_ref(), make_unique[cmap[string,cbool]](deref(_module_types.Map__string_bool(_fbthrift_value)._cpp_obj)))

    cdef void _set_field_18(self, _fbthrift_value) except *:
        # for field fieldS
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 18)
            return
        if not isinstance(_fbthrift_value, _module_types.SmallStruct):
            raise TypeError(f'fieldS is not a { _module_types.SmallStruct !r}.')
        assign_unique_ptr[_module_types.cSmallStruct](deref(self._struct_cpp_obj).fieldS_ref(), make_unique[_module_types.cSmallStruct](deref((<_module_types.SmallStruct?>_fbthrift_value)._cpp_obj)))

    cdef void _set_field_19(self, _fbthrift_value) except *:
        # for field fieldT
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 19)
            return
        if not isinstance(_fbthrift_value, _module_types.SmallStruct):
            raise TypeError(f'fieldT is not a { _module_types.SmallStruct !r}.')
        assign_shared_ptr[_module_types.cSmallStruct](deref(self._struct_cpp_obj).fieldT_ref(), (<_module_types.SmallStruct?>_fbthrift_value)._cpp_obj)

    cdef void _set_field_20(self, _fbthrift_value) except *:
        # for field fieldU
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 20)
            return
        if not isinstance(_fbthrift_value, _module_types.SmallStruct):
            raise TypeError(f'fieldU is not a { _module_types.SmallStruct !r}.')
        assign_shared_const_ptr[_module_types.cSmallStruct](deref(self._struct_cpp_obj).fieldU_ref(), const_pointer_cast((<_module_types.SmallStruct?>_fbthrift_value)._cpp_obj))

    cdef void _set_field_21(self, _fbthrift_value) except *:
        # for field fieldX
        if _fbthrift_value is None:
            __reset_field[_module_types.ccontainerStruct](deref(self._struct_cpp_obj), 21)
            return
        if not isinstance(_fbthrift_value, _module_types.SmallStruct):
            raise TypeError(f'fieldX is not a { _module_types.SmallStruct !r}.')
        assign_unique_ptr[_module_types.cSmallStruct](deref(self._struct_cpp_obj).fieldX_ref(), make_unique[_module_types.cSmallStruct](deref((<_module_types.SmallStruct?>_fbthrift_value)._cpp_obj)))
