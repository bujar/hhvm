/*
 *  Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <mcrouter/lib/carbon/RoutingGroups.h>

#include "mcrouter/lib/network/gen/MemcacheMessages.h"

namespace carbon {

// ArithmeticLike
template <>
struct ArithmeticLike<facebook::memcache::McDecrRequest> {
  static const bool value = true;
  typedef void* Type;
};

template <>
struct ArithmeticLike<facebook::memcache::McIncrRequest> {
  static const bool value = true;
  typedef void* Type;
};

// DeleteLike
template <>
struct DeleteLike<facebook::memcache::McDeleteRequest> {
  static const bool value = true;
  typedef void* Type;
};

// GetLike
template <>
struct GetLike<facebook::memcache::McGatRequest> {
  static const bool value = true;
  typedef void* Type;
};

template <>
struct GetLike<facebook::memcache::McGatsRequest> {
  static const bool value = true;
  typedef void* Type;
};

template <>
struct GetLike<facebook::memcache::McGetRequest> {
  static const bool value = true;
  typedef void* Type;
};

template <>
struct GetLike<facebook::memcache::McGetsRequest> {
  static const bool value = true;
  typedef void* Type;
};

template <>
struct GetLike<facebook::memcache::McLeaseGetRequest> {
  static const bool value = true;
  typedef void* Type;
};

template <>
struct GetLike<facebook::memcache::McMetagetRequest> {
  static const bool value = true;
  typedef void* Type;
};

// UpdateLike
template <>
struct UpdateLike<facebook::memcache::McAddRequest> {
  static const bool value = true;
  typedef void* Type;
};

template <>
struct UpdateLike<facebook::memcache::McAppendRequest> {
  static const bool value = true;
  typedef void* Type;
};

template <>
struct UpdateLike<facebook::memcache::McCasRequest> {
  static const bool value = true;
  typedef void* Type;
};

template <>
struct UpdateLike<facebook::memcache::McLeaseSetRequest> {
  static const bool value = true;
  typedef void* Type;
};

template <>
struct UpdateLike<facebook::memcache::McPrependRequest> {
  static const bool value = true;
  typedef void* Type;
};

template <>
struct UpdateLike<facebook::memcache::McReplaceRequest> {
  static const bool value = true;
  typedef void* Type;
};

template <>
struct UpdateLike<facebook::memcache::McSetRequest> {
  static const bool value = true;
  typedef void* Type;
};
} // namespace carbon