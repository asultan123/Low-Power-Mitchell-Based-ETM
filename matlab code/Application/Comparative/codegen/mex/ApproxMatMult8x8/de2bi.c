/*
 * de2bi.c
 *
 * Code generation for function 'de2bi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "de2bi.h"

/* Variable Definitions */
static emlrtRSInfo ld_emlrtRSI = { 22, /* lineNo */
  "de2bi",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\comm\\comm\\eml\\de2bi.m"/* pathName */
};

static emlrtRTEInfo e_emlrtRTEI = { 136,/* lineNo */
  1,                                   /* colNo */
  "de2bi",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\comm\\comm\\eml\\de2bi.m"/* pName */
};

static emlrtRTEInfo g_emlrtRTEI = { 116,/* lineNo */
  23,                                  /* colNo */
  "de2bi",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\comm\\comm\\eml\\de2bi.m"/* pName */
};

/* Function Definitions */
void b_de2bi(const emlrtStack *sp, real_T d, real_T b[16])
{
  real_T nmin;
  int32_T j;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ld_emlrtRSI;
  if (!((!muDoubleScalarIsInf(d)) && (!muDoubleScalarIsNaN(d)) &&
        (muDoubleScalarFloor(d) == d))) {
    emlrtErrorWithMessageIdR2012b(&st, &g_emlrtRTEI, "comm:de2bi:InvalidInput",
      0);
  }

  if (d != 0.0) {
    nmin = muDoubleScalarFloor(muDoubleScalarLog(d) / 0.69314718055994529) + 1.0;
  } else {
    nmin = 1.0;
  }

  if (!(muDoubleScalarPower(2.0, nmin) > d)) {
    nmin++;
  }

  if (16.0 < nmin) {
    emlrtErrorWithMessageIdR2012b(&st, &e_emlrtRTEI, "comm:de2bi:SmallN", 0);
  }

  memset(&b[0], 0, sizeof(real_T) << 4);
  j = 1;
  nmin = d;
  while ((j <= 16) && (nmin > 0.0)) {
    b[j - 1] = muDoubleScalarRem(nmin, 2.0);
    nmin = muDoubleScalarFloor(nmin / 2.0);
    j++;
  }
}

void de2bi(const emlrtStack *sp, uint8_T d, uint8_T b[8])
{
  int32_T nmin;
  int32_T tmp;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ld_emlrtRSI;
  if (d != 0) {
    nmin = (int32_T)muDoubleScalarFloor(muDoubleScalarLog(d) /
      0.69314718055994529) + 1;
  } else {
    nmin = 1;
  }

  if (!((int32_T)muDoubleScalarPower(2.0, nmin) > d)) {
    nmin++;
  }

  if (8 < nmin) {
    emlrtErrorWithMessageIdR2012b(&st, &e_emlrtRTEI, "comm:de2bi:SmallN", 0);
  }

  for (nmin = 0; nmin < 8; nmin++) {
    b[nmin] = 0;
  }

  nmin = 1;
  tmp = d;
  while ((nmin <= 8) && (tmp > 0)) {
    b[nmin - 1] = (uint8_T)muDoubleScalarRem(tmp, 2.0);
    tmp = (int32_T)muDoubleScalarFloor((real_T)tmp / 2.0);
    nmin++;
  }
}

/* End of code generation (de2bi.c) */
