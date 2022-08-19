#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools
import facebook.thrift.annotation.internal.types as _facebook_thrift_annotation_internal_types
import foo.types as _foo_types


__property__ = property


class Fields(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        injected_field: bool
        pass

    injected_field: Final[str] = ...

    def __init__(
        self, *,
        injected_field: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        injected_field: _typing.Union[str, '__NotSet', None]=NOTSET
    ) -> Fields: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['Fields'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'Fields') -> bool: ...
    def __gt__(self, other: 'Fields') -> bool: ...
    def __le__(self, other: 'Fields') -> bool: ...
    def __ge__(self, other: 'Fields') -> bool: ...

    def _to_python(self) -> "module.thrift_types.Fields": ...   # type: ignore
    def _to_py3(self) -> Fields: ...
    def _to_py_deprecated(self) -> "module.ttypes.Fields": ...   # type: ignore

class FieldsInjectedToEmptyStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        injected_field: bool
        pass

    injected_field: Final[str] = ...

    def __init__(
        self, *,
        injected_field: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        injected_field: _typing.Union[str, '__NotSet', None]=NOTSET
    ) -> FieldsInjectedToEmptyStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['FieldsInjectedToEmptyStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'FieldsInjectedToEmptyStruct') -> bool: ...
    def __gt__(self, other: 'FieldsInjectedToEmptyStruct') -> bool: ...
    def __le__(self, other: 'FieldsInjectedToEmptyStruct') -> bool: ...
    def __ge__(self, other: 'FieldsInjectedToEmptyStruct') -> bool: ...

    def _to_python(self) -> "module.thrift_types.FieldsInjectedToEmptyStruct": ...   # type: ignore
    def _to_py3(self) -> FieldsInjectedToEmptyStruct: ...
    def _to_py_deprecated(self) -> "module.ttypes.FieldsInjectedToEmptyStruct": ...   # type: ignore

class FieldsInjectedToStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        string_field: bool
        injected_field: bool
        pass

    string_field: Final[str] = ...

    injected_field: Final[str] = ...

    def __init__(
        self, *,
        string_field: _typing.Optional[str]=None,
        injected_field: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        string_field: _typing.Union[str, '__NotSet', None]=NOTSET,
        injected_field: _typing.Union[str, '__NotSet', None]=NOTSET
    ) -> FieldsInjectedToStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['FieldsInjectedToStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'FieldsInjectedToStruct') -> bool: ...
    def __gt__(self, other: 'FieldsInjectedToStruct') -> bool: ...
    def __le__(self, other: 'FieldsInjectedToStruct') -> bool: ...
    def __ge__(self, other: 'FieldsInjectedToStruct') -> bool: ...

    def _to_python(self) -> "module.thrift_types.FieldsInjectedToStruct": ...   # type: ignore
    def _to_py3(self) -> FieldsInjectedToStruct: ...
    def _to_py_deprecated(self) -> "module.ttypes.FieldsInjectedToStruct": ...   # type: ignore

class FieldsInjectedWithIncludedStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        string_field: bool
        injected_field: bool
        injected_structured_annotation_field: bool
        injected_unstructured_annotation_field: bool
        pass

    string_field: Final[str] = ...

    injected_field: Final[str] = ...

    injected_structured_annotation_field: Final[_typing.Optional[str]] = ...

    injected_unstructured_annotation_field: Final[_typing.Optional[str]] = ...

    def __init__(
        self, *,
        string_field: _typing.Optional[str]=None,
        injected_field: _typing.Optional[str]=None,
        injected_structured_annotation_field: _typing.Optional[str]=None,
        injected_unstructured_annotation_field: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        string_field: _typing.Union[str, '__NotSet', None]=NOTSET,
        injected_field: _typing.Union[str, '__NotSet', None]=NOTSET,
        injected_structured_annotation_field: _typing.Union[str, '__NotSet', None]=NOTSET,
        injected_unstructured_annotation_field: _typing.Union[str, '__NotSet', None]=NOTSET
    ) -> FieldsInjectedWithIncludedStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['FieldsInjectedWithIncludedStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'FieldsInjectedWithIncludedStruct') -> bool: ...
    def __gt__(self, other: 'FieldsInjectedWithIncludedStruct') -> bool: ...
    def __le__(self, other: 'FieldsInjectedWithIncludedStruct') -> bool: ...
    def __ge__(self, other: 'FieldsInjectedWithIncludedStruct') -> bool: ...

    def _to_python(self) -> "module.thrift_types.FieldsInjectedWithIncludedStruct": ...   # type: ignore
    def _to_py3(self) -> FieldsInjectedWithIncludedStruct: ...
    def _to_py_deprecated(self) -> "module.ttypes.FieldsInjectedWithIncludedStruct": ...   # type: ignore
