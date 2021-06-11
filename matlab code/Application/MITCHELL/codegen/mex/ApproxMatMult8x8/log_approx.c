/*
 * log_approx.c
 *
 * Code generation for function 'log_approx'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "log_approx.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtBCInfo h_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  18,                                  /* lineNo */
  45,                                  /* colNo */
  "num_bin",                           /* aName */
  "log_approx",                        /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\log_approx.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  18,                                  /* lineNo */
  28,                                  /* colNo */
  "lower_part",                        /* aName */
  "log_approx",                        /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\log_approx.m",/* pName */
  3                                    /* checkKind */
};

/* Function Definitions */
void log_approx(const emlrtStack *sp, uint8_T input, real_T *log_num, real_T
                *lower)
{
  int32_T b;
  char_T num_bin[8];
  int32_T characteristic_num;
  int8_T lower_part[8];
  int32_T i;
  boolean_T exitg1;
  int32_T b_index;
  int32_T j;
  real_T z1[8];
  for (b = 0; b < 8; b++) {
    num_bin[b] = '0';
  }

  for (b = 0; b < 8; b++) {
    if ((input & 1 << b) != 0) {
      num_bin[7 - b] = '1';
    }
  }

  for (b = 0; b < 8; b++) {
    lower_part[b] = 0;
  }

  characteristic_num = 0;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 8)) {
    if (num_bin[i] == '1') {
      characteristic_num = 7 - i;
      b_index = 1;
      j = 0;
      while (j <= 6 - i) {
        b = (i + j) + 2;
        if (!(b <= 8)) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 8, &h_emlrtBCI, sp);
        }

        if (!((b_index >= 1) && (b_index <= 8))) {
          emlrtDynamicBoundsCheckR2012b(b_index, 1, 8, &i_emlrtBCI, sp);
        }

        lower_part[b_index - 1] = (int8_T)(num_bin[b - 1] - 48);
        b_index++;
        j++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      for (b = 0; b < 8; b++) {
        z1[b] = muDoubleScalarPower(2.0, -1.0 + -(((real_T)b + 1.0) - 1.0)) *
          (real_T)lower_part[b];
      }

      *lower = z1[0];
      for (b = 0; b < 7; b++) {
        *lower += z1[b + 1];
      }

      exitg1 = true;
    } else {
      *lower = 0.0;
      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }

  *log_num = (real_T)characteristic_num + *lower;
}

/* End of code generation (log_approx.c) */
