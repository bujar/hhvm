#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions

import facebook.thrift.annotation.internal.thrift_types

import foo.thrift_types


class Fields(_fbthrift_python_types.Struct):
    injected_field: _typing.Final[str] = ...
    def __init__(
        self, *,
        injected_field: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        injected_field: _typing.Optional[str]=...
    ) -> Fields: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
    def _to_python(self) -> Fields: ...
    def _to_py3(self) -> "module.types.Fields": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.Fields": ...  # type: ignore


class FieldsInjectedToEmptyStruct(_fbthrift_python_types.Struct):
    injected_field: _typing.Final[str] = ...
    def __init__(
        self, *,
        injected_field: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        injected_field: _typing.Optional[str]=...
    ) -> FieldsInjectedToEmptyStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str]]]: ...
    def _to_python(self) -> FieldsInjectedToEmptyStruct: ...
    def _to_py3(self) -> "module.types.FieldsInjectedToEmptyStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.FieldsInjectedToEmptyStruct": ...  # type: ignore


class FieldsInjectedToStruct(_fbthrift_python_types.Struct):
    injected_field: _typing.Final[str] = ...
    string_field: _typing.Final[str] = ...
    def __init__(
        self, *,
        injected_field: _typing.Optional[str]=...,
        string_field: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        injected_field: _typing.Optional[str]=...,
        string_field: _typing.Optional[str]=...
    ) -> FieldsInjectedToStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, str]]]: ...
    def _to_python(self) -> FieldsInjectedToStruct: ...
    def _to_py3(self) -> "module.types.FieldsInjectedToStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.FieldsInjectedToStruct": ...  # type: ignore


class FieldsInjectedWithIncludedStruct(_fbthrift_python_types.Struct):
    injected_unstructured_annotation_field: _typing.Final[_typing.Optional[str]] = ...
    injected_structured_annotation_field: _typing.Final[_typing.Optional[str]] = ...
    injected_field: _typing.Final[str] = ...
    string_field: _typing.Final[str] = ...
    def __init__(
        self, *,
        injected_unstructured_annotation_field: _typing.Optional[str]=...,
        injected_structured_annotation_field: _typing.Optional[str]=...,
        injected_field: _typing.Optional[str]=...,
        string_field: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        injected_unstructured_annotation_field: _typing.Optional[str]=...,
        injected_structured_annotation_field: _typing.Optional[str]=...,
        injected_field: _typing.Optional[str]=...,
        string_field: _typing.Optional[str]=...
    ) -> FieldsInjectedWithIncludedStruct: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, str, str, str]]]: ...
    def _to_python(self) -> FieldsInjectedWithIncludedStruct: ...
    def _to_py3(self) -> "module.types.FieldsInjectedWithIncludedStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "module.ttypes.FieldsInjectedWithIncludedStruct": ...  # type: ignore