#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport cython
from typing import AsyncIterator
from cpython.version cimport PY_VERSION_HEX
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.utility cimport move as cmove
from libcpp.pair cimport pair
from cython.operator cimport dereference as deref
from cpython.ref cimport PyObject
from thrift.py3.exceptions cimport (
    cTApplicationException,
    ApplicationError as __ApplicationError,
    cTApplicationExceptionType__UNKNOWN)
from thrift.py3.server cimport ServiceInterface, RequestContext, Cpp2RequestContext
from thrift.py3.server import RequestContext
from folly cimport (
  cFollyPromise,
  cFollyUnit,
  c_unit,
)
from thrift.py3.common cimport (
    cThriftServiceMetadataResponse as __fbthrift_cThriftServiceMetadataResponse,
    ServiceMetadata,
    MetadataBox as __MetadataBox,
)

from thrift.py3.server cimport THRIFT_REQUEST_CONTEXT as __THRIFT_REQUEST_CONTEXT

cimport folly.futures
from folly.executor cimport get_executor
cimport folly.iobuf as _fbthrift_iobuf
import folly.iobuf as _fbthrift_iobuf
from folly.iobuf cimport move as move_iobuf
from folly.memory cimport to_shared_ptr as __to_shared_ptr

cimport module.types as _module_types
import module.types as _module_types
import facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types
cimport facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types

cimport module.services_reflection as _services_reflection

import asyncio
import functools
import sys
import traceback
import types as _py_types

from module.services_wrapper cimport cRaiserInterface



@cython.auto_pickle(False)
cdef class Promise_string:
    cdef cFollyPromise[unique_ptr[string]]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[unique_ptr[string]](cFollyPromise[unique_ptr[string]].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[unique_ptr[string]] cPromise):
        cdef Promise_string inst = Promise_string.__new__(Promise_string)
        inst.cPromise[0] = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise_cFollyUnit:
    cdef cFollyPromise[cFollyUnit]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[cFollyUnit](cFollyPromise[cFollyUnit].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef _fbthrift_create(cFollyPromise[cFollyUnit] cPromise):
        cdef Promise_cFollyUnit inst = Promise_cFollyUnit.__new__(Promise_cFollyUnit)
        inst.cPromise[0] = cmove(cPromise)
        return inst

cdef object _Raiser_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class RaiserInterface(
    ServiceInterface
):
    annotations = _Raiser_annotations

    def __cinit__(self):
        self._cpp_obj = cRaiserInterface(
            <PyObject *> self,
            get_executor()
        )

    async def doBland(
            self):
        raise NotImplementedError("async def doBland is not implemented")

    async def doRaise(
            self):
        raise NotImplementedError("async def doRaise is not implemented")

    async def get200(
            self):
        raise NotImplementedError("async def get200 is not implemented")

    async def get500(
            self):
        raise NotImplementedError("async def get500 is not implemented")

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__Raiser(for_clients=False)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cRaiserSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.Raiser"



cdef api void call_cy_Raiser_doBland(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        Raiser_doBland_coro(
            self,
            __promise
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_Raiser_doRaise(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        Raiser_doRaise_coro(
            self,
            __promise
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_Raiser_get200(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[unique_ptr[string]] cPromise
):
    cdef Promise_string __promise = Promise_string._fbthrift_create(cmove(cPromise))
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        Raiser_get200_coro(
            self,
            __promise
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_Raiser_get500(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[unique_ptr[string]] cPromise
):
    cdef Promise_string __promise = Promise_string._fbthrift_create(cmove(cPromise))
    __context = RequestContext._fbthrift_create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        Raiser_get500_coro(
            self,
            __promise
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)
cdef api void call_cy_Raiser_onStartServing(
    object self,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        Raiser_onStartServing_coro(
            self,
            __promise
        )
    )
cdef api void call_cy_Raiser_onStopRequested(
    object self,
    cFollyPromise[cFollyUnit] cPromise
):
    cdef Promise_cFollyUnit __promise = Promise_cFollyUnit._fbthrift_create(cmove(cPromise))
    asyncio.get_event_loop().create_task(
        Raiser_onStopRequested_coro(
            self,
            __promise
        )
    )
async def Raiser_doBland_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.doBland()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler doBland:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler doBland:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

async def Raiser_doRaise_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.doRaise()
    except _module_types.Banal as ex:
        promise.cPromise.setException(deref((<_module_types.Banal> ex)._cpp_obj))
    except _module_types.Fiery as ex:
        promise.cPromise.setException(deref((<_module_types.Fiery> ex)._cpp_obj))
    except _module_types.Serious as ex:
        promise.cPromise.setException(deref((<_module_types.Serious> ex)._cpp_obj))
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler doRaise:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler doRaise:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

async def Raiser_get200_coro(
    object self,
    Promise_string promise
):
    try:
        result = await self.get200()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler get200:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler get200:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(make_unique[string](<string?> result.encode('UTF-8')))

async def Raiser_get500_coro(
    object self,
    Promise_string promise
):
    try:
        result = await self.get500()
    except _module_types.Fiery as ex:
        promise.cPromise.setException(deref((<_module_types.Fiery> ex)._cpp_obj))
    except _module_types.Banal as ex:
        promise.cPromise.setException(deref((<_module_types.Banal> ex)._cpp_obj))
    except _module_types.Serious as ex:
        promise.cPromise.setException(deref((<_module_types.Serious> ex)._cpp_obj))
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler get500:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler get500:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(make_unique[string](<string?> result.encode('UTF-8')))

async def Raiser_onStartServing_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.onStartServing()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler onStartServing:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler onStartServing:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

async def Raiser_onStopRequested_coro(
    object self,
    Promise_cFollyUnit promise
):
    try:
        result = await self.onStopRequested()
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler onStopRequested:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler onStopRequested:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)
