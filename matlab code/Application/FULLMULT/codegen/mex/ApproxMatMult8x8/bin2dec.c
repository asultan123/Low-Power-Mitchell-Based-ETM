/*
 * bin2dec.c
 *
 * Code generation for function 'bin2dec'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "bin2dec.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo q_emlrtRSI = { 30,  /* lineNo */
  "bin2dec",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\strfun\\bin2dec.m"/* pathName */
};

static emlrtRTEInfo d_emlrtRTEI = { 22,/* lineNo */
  15,                                  /* colNo */
  "bin2dec",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\strfun\\bin2dec.m"/* pName */
};

static emlrtRTEInfo e_emlrtRTEI = { 40,/* lineNo */
  13,                                  /* colNo */
  "bin2dec",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\strfun\\bin2dec.m"/* pName */
};

/* Function Definitions */
real_T bin2dec(const emlrtStack *sp, const char_T s_data[], const int32_T
               s_size[2])
{
  real_T x;
  int32_T k;
  int32_T exitg1;
  boolean_T p;
  real_T p2;
  int32_T j;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!(s_size[1] <= 52)) {
    emlrtErrorWithMessageIdR2012b(sp, &d_emlrtRTEI,
      "Coder:toolbox:bin2dec_InputOutOfRange", 3, 4, 2, "52");
  }

  k = 0;
  do {
    exitg1 = 0;
    if (k <= s_size[1] - 1) {
      if ((s_data[k] != '0') && (s_data[k] != '1')) {
        p = false;
        exitg1 = 1;
      } else {
        k++;
      }
    } else {
      p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!p) {
    emlrtErrorWithMessageIdR2012b(sp, &b_emlrtRTEI,
      "MATLAB:bin2dec:IllegalBinaryString", 0);
  }

  st.site = &q_emlrtRSI;
  x = 0.0;
  p2 = 1.0;
  k = (int32_T)((1.0 + (-1.0 - (real_T)s_size[1])) / -1.0);
  emlrtForLoopVectorCheckR2012b(s_size[1], -1.0, 1.0, mxDOUBLE_CLASS, k,
    &e_emlrtRTEI, &st);
  for (j = 0; j < k; j++) {
    if (s_data[s_size[0] * ((s_size[1] - j) - 1)] == '1') {
      x += p2;
    }

    p2 += p2;
  }

  return x;
}

/* End of code generation (bin2dec.c) */
