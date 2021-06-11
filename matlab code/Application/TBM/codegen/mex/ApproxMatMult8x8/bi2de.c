/*
 * bi2de.c
 *
 * Code generation for function 'bi2de'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "bi2de.h"

/* Variable Definitions */
static emlrtRTEInfo f_emlrtRTEI = { 148,/* lineNo */
  23,                                  /* colNo */
  "bi2de",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\comm\\comm\\eml\\bi2de.m"/* pName */
};

/* Function Definitions */
void UPDATE_DECIMAL(const emlrtStack *sp, real_T *d_i, real_T pp, real_T b_ij)
{
  boolean_T b1;
  if ((!muDoubleScalarIsInf(b_ij)) && (!muDoubleScalarIsNaN(b_ij)) &&
      (muDoubleScalarFloor(b_ij) == b_ij)) {
    b1 = true;
  } else {
    b1 = false;
  }

  if (!b1) {
    emlrtErrorWithMessageIdR2012b(sp, &f_emlrtRTEI, "comm:bi2de:InvalidInput2",
      0);
  }

  if (b_ij != 0.0) {
    *d_i += pp;
  }
}

/* End of code generation (bi2de.c) */
