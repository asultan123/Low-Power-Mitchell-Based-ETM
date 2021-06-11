/*
 * toLogicalCheck.c
 *
 * Code generation for function 'toLogicalCheck'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "toLogicalCheck.h"
#include "error.h"

/* Variable Definitions */
static emlrtRSInfo bd_emlrtRSI = { 12, /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pathName */
};

/* Function Definitions */
void toLogicalCheck(const emlrtStack *sp, real_T x)
{
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (muDoubleScalarIsNaN(x)) {
    st.site = &bd_emlrtRSI;
    b_st.site = &bd_emlrtRSI;
    error(&b_st);
  }
}

/* End of code generation (toLogicalCheck.c) */
