/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include <executorch/kernels/portable/cpu/op_div_impl.h>

namespace torch {
namespace executor {
namespace native {

Tensor& div_out(
    KernelRuntimeContext& ctx,
    const Tensor& a,
    const Tensor& b,
    Tensor& out) {
  return div_out_impl(ctx, a, b, out);
}

Tensor& div_out_mode(
    KernelRuntimeContext& ctx,
    const Tensor& a,
    const Tensor& b,
    exec_aten::optional<exec_aten::string_view> mode,
    Tensor& out) {
  return div_out_mode_impl(ctx, a, b, mode, out);
}

Tensor& div_scalar_out(
    KernelRuntimeContext& ctx,
    const Tensor& a,
    const Scalar& b,
    Tensor& out) {
  return div_scalar_out_impl(ctx, a, b, out);
}

Tensor& div_scalar_mode_out(
    KernelRuntimeContext& ctx,
    const Tensor& a,
    const Scalar& b,
    exec_aten::optional<exec_aten::string_view> mode,
    Tensor& out) {
  return div_scalar_mode_out_impl(ctx, a, b, mode, out);
}

} // namespace native
} // namespace executor
} // namespace torch
