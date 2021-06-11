/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "sum.h"

/* Function Definitions */
real_T sum(const real_T x[9])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 8; k++) {
    y += x[k + 1];
  }

  return y;
}

/* End of code generation (sum.c) */
