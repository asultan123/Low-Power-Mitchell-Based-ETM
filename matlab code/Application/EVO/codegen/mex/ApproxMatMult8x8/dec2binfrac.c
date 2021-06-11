/*
 * dec2binfrac.c
 *
 * Code generation for function 'dec2binfrac'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "dec2binfrac.h"
#include "ApproxMatMult8x8_data.h"

/* Function Definitions */
void dec2binfrac(const emlrtStack *sp, real_T input_data[], char_T res[13])
{
  int32_T i;
  int8_T b_res[13];
  int32_T k;
  real_T c;
  boolean_T y;
  boolean_T exitg1;
  for (i = 0; i < 13; i++) {
    b_res[i] = 0;
  }

  i = 0;
  while (i < 13) {
    c = muDoubleScalarPower(2.0, -(1.0 + (real_T)i));
    y = true;
    k = 1;
    exitg1 = false;
    while ((!exitg1) && (k <= 1)) {
      if (!(input_data[0] > c)) {
        y = false;
        exitg1 = true;
      } else {
        k = 2;
      }
    }

    if (y) {
      b_res[i] = 1;
      input_data[0] -= muDoubleScalarPower(2.0, -(1.0 + (real_T)i));
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  for (i = 0; i < 13; i++) {
    res[i] = (int8_T)(b_res[i] + 48);
  }
}

/* End of code generation (dec2binfrac.c) */
