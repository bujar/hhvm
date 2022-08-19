// Copyright (c) Facebook, Inc. and its affiliates.
//
// This source code is licensed under the MIT license found in the
// LICENSE file in the "hack" directory of this source tree.

use ffi::Slice;
use hhvm_types_ffi::ffi::Attr;
use serde::Serialize;

use crate::ClassName;
use crate::HhasAttribute;
use crate::HhasSpan;
use crate::HhasTypeInfo;
use crate::TypedValue;

#[derive(Clone, Debug, Serialize)]
#[repr(C)]
pub struct HhasTypedef<'arena> {
    pub name: ClassName<'arena>,
    pub attributes: Slice<'arena, HhasAttribute<'arena>>,
    pub type_info: HhasTypeInfo<'arena>,
    pub type_structure: TypedValue<'arena>,
    pub span: HhasSpan,
    pub attrs: Attr,
}