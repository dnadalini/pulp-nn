/* SPDX-License-Identifier: Apache-2.0 */
#pragma once

#include <stdint.h>

/* Preserve the original byte-bias ABI unless the integration opts into the
 * separately named int32-bias convolution and matmul variants. */
#ifdef PULP_NN_INT32_BIAS
typedef int32_t pulp_nn_bias_t;
#define pulp_nn_conv_Ho_parallel pulp_nn_conv_Ho_parallel_i32_bias
#define pulp_nn_matmul pulp_nn_matmul_i32_bias
#else
typedef int8_t pulp_nn_bias_t;
#endif
