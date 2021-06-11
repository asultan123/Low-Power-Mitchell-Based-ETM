/*
 * HalfAdder.c
 *
 * Code generation for function 'HalfAdder'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "HalfAdder.h"
#include "error.h"
#include "ApproxMatMult8x8_data.h"

/* Function Definitions */
void HalfAdder(const emlrtStack *sp, real_T X, real_T Y, boolean_T *HACout,
               boolean_T *HASum)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &od_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &od_emlrtRSI;
  if (muDoubleScalarIsNaN(Y)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  *HACout = ((X != 0.0) && (Y != 0.0));
  st.site = &pd_emlrtRSI;
  b_st.site = &rd_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    c_st.site = &qd_emlrtRSI;
    d_st.site = &qd_emlrtRSI;
    error(&d_st);
  }

  b_st.site = &rd_emlrtRSI;
  if (muDoubleScalarIsNaN(Y)) {
    c_st.site = &qd_emlrtRSI;
    d_st.site = &qd_emlrtRSI;
    error(&d_st);
  }

  *HASum = (((X != 0.0) ^ (Y != 0.0)) != 0);
}

/* End of code generation (HalfAdder.c) */
