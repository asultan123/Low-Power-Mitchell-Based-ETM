/*
 * AMA4FA.c
 *
 * Code generation for function 'AMA4FA'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "AMA4FA.h"
#include "error.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo sd_emlrtRSI = { 4,  /* lineNo */
  "AMA4FA",                            /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4FA.m"/* pathName */
};

static emlrtRSInfo td_emlrtRSI = { 5,  /* lineNo */
  "AMA4FA",                            /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4FA.m"/* pathName */
};

static emlrtRSInfo ud_emlrtRSI = { 9,  /* lineNo */
  "AMA4FA",                            /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4FA.m"/* pathName */
};

static emlrtRSInfo vd_emlrtRSI = { 10, /* lineNo */
  "AMA4FA",                            /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4FA.m"/* pathName */
};

static emlrtRSInfo wd_emlrtRSI = { 6,  /* lineNo */
  "AMA4FA",                            /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4FA.m"/* pathName */
};

static emlrtRSInfo xd_emlrtRSI = { 8,  /* lineNo */
  "AMA4FA",                            /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4FA.m"/* pathName */
};

/* Function Definitions */
void AMA4FA(const emlrtStack *sp, real_T X, real_T Y, real_T Cin, real_T
            *AMA4Cout, boolean_T *AMA4Sum)
{
  boolean_T Xbar;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*  Approximate MA4 */
  st.site = &sd_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  Xbar = !(X != 0.0);
  st.site = &td_emlrtRSI;
  if (muDoubleScalarIsNaN(Y)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &wd_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &xd_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &ud_emlrtRSI;
  if (muDoubleScalarIsNaN(Y)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &ud_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &vd_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &vd_emlrtRSI;
  if (muDoubleScalarIsNaN(Y)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &vd_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  *AMA4Sum = ((Xbar && (!(Y != 0.0)) && (Cin != 0.0)) || ((Xbar && (Y != 0.0) &&
    (Cin != 0.0)) || ((X != 0.0) && (Y != 0.0) && (Cin != 0.0))));
  *AMA4Cout = X;
}

void b_AMA4FA(const emlrtStack *sp, real_T X, boolean_T Y, boolean_T Cin, real_T
              *AMA4Cout, boolean_T *AMA4Sum)
{
  boolean_T Xbar;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*  Approximate MA4 */
  st.site = &sd_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  Xbar = !(X != 0.0);
  st.site = &vd_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  *AMA4Sum = ((Xbar && (!Y) && Cin) || ((Xbar && Y && Cin) || ((X != 0.0) && Y &&
    Cin)));
  *AMA4Cout = X;
}

void c_AMA4FA(const emlrtStack *sp, real_T X, boolean_T Y, real_T Cin, real_T
              *AMA4Cout, boolean_T *AMA4Sum)
{
  boolean_T Xbar;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*  Approximate MA4 */
  st.site = &sd_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  Xbar = !(X != 0.0);
  st.site = &wd_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &xd_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &ud_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &vd_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &vd_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  *AMA4Sum = ((Xbar && (!Y) && (Cin != 0.0)) || ((Xbar && Y && (Cin != 0.0)) ||
    ((X != 0.0) && Y && (Cin != 0.0))));
  *AMA4Cout = X;
}

/* End of code generation (AMA4FA.c) */
