/*
 * InXA1FA.c
 *
 * Code generation for function 'InXA1FA'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "InXA1FA.h"
#include "error.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo am_emlrtRSI = { 4,  /* lineNo */
  "InXA1FA",                           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1FA.m"/* pathName */
};

/* Function Definitions */
void InXA1FA(const emlrtStack *sp, real_T X, real_T Y, boolean_T Cin, boolean_T *
             InXA1Cout, boolean_T *InXA1Sum)
{
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;

  /*  InExact Adder 1 InXA1 */
  st.site = &am_emlrtRSI;
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

  *InXA1Sum = (((((X != 0.0) ^ (Y != 0.0)) != 0) ^ Cin) != 0);
  *InXA1Cout = Cin;
}

/* End of code generation (InXA1FA.c) */
