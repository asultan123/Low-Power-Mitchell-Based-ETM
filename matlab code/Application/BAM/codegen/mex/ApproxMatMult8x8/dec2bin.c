/*
 * dec2bin.c
 *
 * Code generation for function 'dec2bin'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "dec2bin.h"

/* Variable Definitions */
static emlrtRTEInfo b_emlrtRTEI = { 30,/* lineNo */
  15,                                  /* colNo */
  "dec2bin",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\strfun\\dec2bin.m"/* pName */
};

/* Function Definitions */
void b_dec2bin(uint8_T d, char_T s[8])
{
  int32_T b;
  for (b = 0; b < 8; b++) {
    s[b] = '0';
  }

  for (b = 0; b < 8; b++) {
    if ((d & 1 << b) != 0) {
      s[7 - b] = '1';
    }
  }
}

void dec2bin(const emlrtStack *sp, const real_T d_data[], char_T s_data[],
             int32_T s_size[2])
{
  boolean_T p;
  int32_T k;
  boolean_T exitg1;
  boolean_T b0;
  real_T di;
  int32_T firstcol;
  real_T olddi;
  int32_T i;
  boolean_T exitg2;
  char_T b_s_data[52];
  p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= 0)) {
    if (d_data[0] < 0.0) {
      p = false;
      exitg1 = true;
    } else {
      if ((!muDoubleScalarIsInf(d_data[0])) && (!muDoubleScalarIsNaN(d_data[0]))
          && (d_data[0] < 4.503599627370496E+15) && (muDoubleScalarFloor(d_data
            [0]) == d_data[0])) {
        b0 = true;
      } else {
        b0 = false;
      }

      if (!b0) {
        p = false;
        exitg1 = true;
      } else {
        k = 1;
      }
    }
  }

  if (!p) {
    emlrtErrorWithMessageIdR2012b(sp, &b_emlrtRTEI,
      "MATLAB:dec2bin:MustBeNonNegativeFinite", 0);
  }

  s_size[0] = 1;
  s_size[1] = 52;
  for (k = 0; k < 52; k++) {
    s_data[k] = '0';
  }

  di = d_data[0];
  k = 52;
  exitg1 = false;
  while ((!exitg1) && (k > 0)) {
    olddi = di;
    di = muDoubleScalarFloor(di / 2.0);
    if (2.0 * di < olddi) {
      s_data[k - 1] = '1';
    }

    if (di > 0.0) {
      k--;
    } else {
      exitg1 = true;
    }
  }

  firstcol = 50;
  k = 1;
  exitg1 = false;
  while ((!exitg1) && (k <= 49)) {
    p = false;
    i = 0;
    exitg2 = false;
    while ((!exitg2) && (i <= 0)) {
      if (s_data[k - 1] != '0') {
        p = true;
        exitg2 = true;
      } else {
        i = 1;
      }
    }

    if (p) {
      firstcol = k;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (firstcol > 1) {
    for (k = firstcol; k < 53; k++) {
      s_data[k - firstcol] = s_data[k - 1];
    }

    k = 53 - firstcol;
    memcpy(&b_s_data[0], &s_data[0], (uint32_T)(k * (int32_T)sizeof(char_T)));
    s_size[0] = 1;
    s_size[1] = 53 - firstcol;
    k = 53 - firstcol;
    memcpy(&s_data[0], &b_s_data[0], (uint32_T)(k * (int32_T)sizeof(char_T)));
  }
}

/* End of code generation (dec2bin.c) */
