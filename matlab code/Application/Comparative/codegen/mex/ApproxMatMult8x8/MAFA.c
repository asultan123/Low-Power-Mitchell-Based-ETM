/*
 * MAFA.c
 *
 * Code generation for function 'MAFA'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "MAFA.h"
#include "error.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo yd_emlrtRSI = { 6,  /* lineNo */
  "MAFA",                              /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\MAFA.m"/* pathName */
};

static emlrtRSInfo ae_emlrtRSI = { 8,  /* lineNo */
  "MAFA",                              /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\MAFA.m"/* pathName */
};

static emlrtRSInfo be_emlrtRSI = { 9,  /* lineNo */
  "MAFA",                              /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\MAFA.m"/* pathName */
};

static emlrtRSInfo ce_emlrtRSI = { 10, /* lineNo */
  "MAFA",                              /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\MAFA.m"/* pathName */
};

/* Function Definitions */
void MAFA(const emlrtStack *sp, real_T X, boolean_T Y, real_T Cin, boolean_T
          *MAFACout, boolean_T *MAFASum)
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

  /*  X=[0 0 0 0 1 1 1 1]; */
  /*  Y=[0 0 1 1 0 0 1 1]; */
  /*  Cin=[0 1 0 1 0 1 0 1]; */
  st.site = &yd_emlrtRSI;
  b_st.site = &rd_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    c_st.site = &qd_emlrtRSI;
    d_st.site = &qd_emlrtRSI;
    error(&d_st);
  }

  st.site = &yd_emlrtRSI;
  b_st.site = &rd_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    c_st.site = &qd_emlrtRSI;
    d_st.site = &qd_emlrtRSI;
    error(&d_st);
  }

  *MAFASum = (((((X != 0.0) ^ Y) != 0) ^ (Cin != 0.0)) != 0);
  st.site = &ae_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &be_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &ce_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &ce_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  *MAFACout = (((X != 0.0) && Y) || (Y && (Cin != 0.0)) || ((X != 0.0) && (Cin
    != 0.0)));
}

void b_MAFA(const emlrtStack *sp, real_T X, boolean_T Y, boolean_T Cin,
            boolean_T *MAFACout, boolean_T *MAFASum)
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

  /*  X=[0 0 0 0 1 1 1 1]; */
  /*  Y=[0 0 1 1 0 0 1 1]; */
  /*  Cin=[0 1 0 1 0 1 0 1]; */
  st.site = &yd_emlrtRSI;
  b_st.site = &rd_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    c_st.site = &qd_emlrtRSI;
    d_st.site = &qd_emlrtRSI;
    error(&d_st);
  }

  *MAFASum = (((((X != 0.0) ^ Y) != 0) ^ Cin) != 0);
  st.site = &ae_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &ce_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  *MAFACout = (((X != 0.0) && Y) || (Y && Cin) || ((X != 0.0) && Cin));
}

void c_MAFA(const emlrtStack *sp, real_T X, real_T Y, real_T Cin, boolean_T
            *MAFACout, boolean_T *MAFASum)
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

  /*  X=[0 0 0 0 1 1 1 1]; */
  /*  Y=[0 0 1 1 0 0 1 1]; */
  /*  Cin=[0 1 0 1 0 1 0 1]; */
  st.site = &yd_emlrtRSI;
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

  st.site = &yd_emlrtRSI;
  b_st.site = &rd_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    c_st.site = &qd_emlrtRSI;
    d_st.site = &qd_emlrtRSI;
    error(&d_st);
  }

  *MAFASum = (((((X != 0.0) ^ (Y != 0.0)) != 0) ^ (Cin != 0.0)) != 0);
  st.site = &ae_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &ae_emlrtRSI;
  if (muDoubleScalarIsNaN(Y)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &be_emlrtRSI;
  if (muDoubleScalarIsNaN(Y)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &be_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &ce_emlrtRSI;
  if (muDoubleScalarIsNaN(X)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &ce_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  *MAFACout = (((X != 0.0) && (Y != 0.0)) || ((Y != 0.0) && (Cin != 0.0)) || ((X
    != 0.0) && (Cin != 0.0)));
}

void d_MAFA(const emlrtStack *sp, boolean_T X, boolean_T Y, real_T Cin,
            boolean_T *MAFACout, boolean_T *MAFASum)
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

  /*  X=[0 0 0 0 1 1 1 1]; */
  /*  Y=[0 0 1 1 0 0 1 1]; */
  /*  Cin=[0 1 0 1 0 1 0 1]; */
  st.site = &yd_emlrtRSI;
  b_st.site = &rd_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    c_st.site = &qd_emlrtRSI;
    d_st.site = &qd_emlrtRSI;
    error(&d_st);
  }

  *MAFASum = ((((X ^ Y) != 0) ^ (Cin != 0.0)) != 0);
  st.site = &be_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  st.site = &ce_emlrtRSI;
  if (muDoubleScalarIsNaN(Cin)) {
    b_st.site = &qd_emlrtRSI;
    c_st.site = &qd_emlrtRSI;
    error(&c_st);
  }

  *MAFACout = ((X && Y) || (Y && (Cin != 0.0)) || (X && (Cin != 0.0)));
}

/* End of code generation (MAFA.c) */
