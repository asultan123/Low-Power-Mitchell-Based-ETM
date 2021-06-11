/*
 * InXA2FA.c
 *
 * Code generation for function 'InXA2FA'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "InXA2FA.h"
#include "error.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo oj_emlrtRSI = { 4,  /* lineNo */
  "InXA2FA",                           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2FA.m"/* pathName */
};

static emlrtRSInfo pj_emlrtRSI = { 7,  /* lineNo */
  "InXA2FA",                           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2FA.m"/* pathName */
};

/* Function Definitions */
void InXA2FA(const emlrtStack *sp, real_T X, real_T Y, boolean_T Cin, boolean_T *
             InXA2Cout, boolean_T *InXA2Sum)
{
  boolean_T P1;
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

  /*  InExact Adder 2 InXA2 */
  st.site = &oj_emlrtRSI;
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

  P1 = (((X != 0.0) ^ (Y != 0.0)) != 0);
  *InXA2Sum = (P1 || Cin);
  st.site = &pj_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &pj_emlrtRSI;
  if (muDoubleScalarIsNaN(Y)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  *InXA2Cout = (((X != 0.0) && (Y != 0.0)) || (Cin && P1));
}

void b_InXA2FA(const emlrtStack *sp, real_T X, boolean_T Y, boolean_T Cin,
               boolean_T *InXA2Cout, boolean_T *InXA2Sum)
{
  boolean_T P1;
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

  /*  InExact Adder 2 InXA2 */
  st.site = &oj_emlrtRSI;
  b_st.site = &rd_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    c_st.site = &qd_emlrtRSI;
    d_st.site = &qd_emlrtRSI;
    error(&d_st);
  }

  P1 = (((X != 0.0) ^ Y) != 0);
  *InXA2Sum = (P1 || Cin);
  st.site = &pj_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  *InXA2Cout = (((X != 0.0) && Y) || (Cin && P1));
}

/* End of code generation (InXA2FA.c) */
