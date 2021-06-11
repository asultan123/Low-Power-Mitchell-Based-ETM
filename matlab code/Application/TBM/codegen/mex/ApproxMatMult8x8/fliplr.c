/*
 * fliplr.c
 *
 * Code generation for function 'fliplr'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "fliplr.h"

/* Function Definitions */
void fliplr(real_T x[11])
{
  int32_T b_j1;
  real_T xtmp;
  for (b_j1 = 0; b_j1 < 5; b_j1++) {
    xtmp = x[b_j1];
    x[b_j1] = x[10 - b_j1];
    x[10 - b_j1] = xtmp;
  }
}

/* End of code generation (fliplr.c) */
