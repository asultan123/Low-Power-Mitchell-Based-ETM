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
#include "ApproxMatMult8x8_data.h"

/* Function Definitions */
boolean_T all_nonnegative_and_finite(real_T d)
{
  boolean_T p;
  boolean_T b0;
  p = true;
  if (d < 0.0) {
    p = false;
  } else {
    if ((!muDoubleScalarIsInf(d)) && (!muDoubleScalarIsNaN(d)) && (d <
         4.503599627370496E+15) && (muDoubleScalarFloor(d) == d)) {
      b0 = true;
    } else {
      b0 = false;
    }

    if (!b0) {
      p = false;
    }
  }

  return p;
}

void dec2bin(const emlrtStack *sp, real_T d, char_T s_data[], int32_T s_size[2])
{
  int32_T j;
  real_T di;
  boolean_T exitg1;
  int32_T firstcol;
  real_T olddi;
  boolean_T p;
  char_T b_s_data[52];
  if (!all_nonnegative_and_finite(d)) {
    emlrtErrorWithMessageIdR2012b(sp, &emlrtRTEI,
      "MATLAB:dec2bin:MustBeNonNegativeFinite", 0);
  }

  s_size[0] = 1;
  s_size[1] = 52;
  for (j = 0; j < 52; j++) {
    s_data[j] = '0';
  }

  di = d;
  j = 52;
  exitg1 = false;
  while ((!exitg1) && (j > 0)) {
    olddi = di;
    di = muDoubleScalarFloor(di / 2.0);
    if (2.0 * di < olddi) {
      s_data[j - 1] = '1';
    }

    if (di > 0.0) {
      j--;
    } else {
      exitg1 = true;
    }
  }

  firstcol = 50;
  j = 1;
  exitg1 = false;
  while ((!exitg1) && (j <= 49)) {
    p = false;
    if (s_data[j - 1] != '0') {
      p = true;
    }

    if (p) {
      firstcol = j;
      exitg1 = true;
    } else {
      j++;
    }
  }

  if (firstcol > 1) {
    for (j = firstcol; j < 53; j++) {
      s_data[j - firstcol] = s_data[j - 1];
    }

    j = 53 - firstcol;
    memcpy(&b_s_data[0], &s_data[0], (uint32_T)(j * (int32_T)sizeof(char_T)));
    s_size[0] = 1;
    s_size[1] = 53 - firstcol;
    j = 53 - firstcol;
    memcpy(&s_data[0], &b_s_data[0], (uint32_T)(j * (int32_T)sizeof(char_T)));
  }
}

/* End of code generation (dec2bin.c) */
