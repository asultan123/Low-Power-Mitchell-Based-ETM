/*
 * BAM.c
 *
 * Code generation for function 'BAM'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "BAM.h"
#include "dec2bin.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  15,                                  /* iLast */
  32,                                  /* lineNo */
  18,                                  /* colNo */
  "pp",                                /* aName */
  "BAM",                               /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\BAM\\BAM.m",/* pName */
  3                                    /* checkKind */
};

static emlrtDCInfo emlrtDCI = { 32,    /* lineNo */
  18,                                  /* colNo */
  "BAM",                               /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\BAM\\BAM.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  26,                                  /* lineNo */
  16,                                  /* colNo */
  "pp",                                /* aName */
  "BAM",                               /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\BAM\\BAM.m",/* pName */
  3                                    /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = { 31,/* lineNo */
  17,                                  /* colNo */
  "BAM",                               /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\BAM\\BAM.m"/* pName */
};

static emlrtRTEInfo f_emlrtRTEI = { 25,/* lineNo */
  17,                                  /* colNo */
  "BAM",                               /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\BAM\\BAM.m"/* pName */
};

static emlrtBCInfo d_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  18,                                  /* lineNo */
  40,                                  /* colNo */
  "y_bin",                             /* aName */
  "BAM",                               /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\BAM\\BAM.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
uint16_T BAM(const emlrtStack *sp, uint8_T a, uint8_T b, real_T vbl, real_T hbl)
{
  uint16_T res;
  char_T x_bin_temp[8];
  char_T y_bin_temp[8];
  int32_T xoffset;
  int16_T pp[120];
  real_T x_bin[8];
  int16_T y_bin[8];
  int32_T j;
  int32_T xtmp;
  int32_T i1;
  int16_T z1[120];
  static const int8_T iv1[120] = { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1,
    0, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14, 13, 12, 11, 10, 9,
    8, 7, 6, 5, 4, 3, 2, 1, 0, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0,
    14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14, 13, 12, 11, 10, 9, 8,
    7, 6, 5, 4, 3, 2, 1, 0, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14,
    13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

  real_T y;
  b_dec2bin(a, x_bin_temp);
  b_dec2bin(b, y_bin_temp);
  xoffset = 0;
  while (xoffset < 8) {
    x_bin[xoffset] = (real_T)(uint8_T)x_bin_temp[xoffset] - 48.0;
    y_bin[xoffset] = (int16_T)((uint8_T)y_bin_temp[xoffset] - 48);
    xoffset++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  memset(&pp[0], 0, 120U * sizeof(int16_T));
  xoffset = 0;
  while (xoffset < 8) {
    j = 0;
    while (j <= 7) {
      xtmp = (xoffset + j) + 1;
      i1 = xtmp - xoffset;
      if (!((i1 >= 1) && (i1 <= 8))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, 8, &d_emlrtBCI, sp);
      }

      pp[xoffset + ((xtmp - 1) << 3)] = (int16_T)((x_bin[xoffset] != 0.0) &&
        (y_bin[(xtmp - xoffset) - 1] != 0));
      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    xoffset++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  for (j = 0; j < 15; j++) {
    for (xoffset = 0; xoffset < 4; xoffset++) {
      xtmp = pp[xoffset + (j << 3)];
      pp[xoffset + (j << 3)] = pp[((j << 3) - xoffset) + 7];
      pp[((j << 3) - xoffset) + 7] = (int16_T)xtmp;
    }
  }

  if (hbl > 0.0) {
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, hbl, mxDOUBLE_CLASS, (int32_T)hbl,
      &f_emlrtRTEI, sp);
    xoffset = 0;
    while (xoffset <= (int32_T)hbl - 1) {
      if (!((xoffset + 1 >= 1) && (xoffset + 1 <= 8))) {
        emlrtDynamicBoundsCheckR2012b(xoffset + 1, 1, 8, &c_emlrtBCI, sp);
      }

      for (i1 = 0; i1 < 15; i1++) {
        pp[xoffset + (i1 << 3)] = 0;
      }

      xoffset++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }

  if (vbl > 0.0) {
    emlrtForLoopVectorCheckR2012b(15.0 - (vbl - 1.0), 1.0, 15.0, mxDOUBLE_CLASS,
      (int32_T)(15.0 + (1.0 - (15.0 - (vbl - 1.0)))), &e_emlrtRTEI, sp);
    j = 0;
    while (j <= (int32_T)(15.0 + (1.0 - (15.0 - (vbl - 1.0)))) - 1) {
      y = (15.0 - (vbl - 1.0)) + (real_T)j;
      if (y != (int32_T)muDoubleScalarFloor(y)) {
        emlrtIntegerCheckR2012b(y, &emlrtDCI, sp);
      }

      i1 = (int32_T)y;
      if (!((i1 >= 1) && (i1 <= 15))) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, 15, &b_emlrtBCI, sp);
      }

      for (xtmp = 0; xtmp < 8; xtmp++) {
        pp[xtmp + ((i1 - 1) << 3)] = 0;
      }

      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }
  }

  for (xtmp = 0; xtmp < 120; xtmp++) {
    z1[xtmp] = (int16_T)muDoubleScalarPower(2.0, iv1[xtmp]);
  }

  for (i1 = 0; i1 < 15; i1++) {
    for (xtmp = 0; xtmp < 8; xtmp++) {
      pp[xtmp + (i1 << 3)] *= z1[i1 + 15 * xtmp];
    }
  }

  for (j = 0; j < 8; j++) {
    x_bin[j] = pp[j];
  }

  for (xtmp = 0; xtmp < 14; xtmp++) {
    xoffset = (xtmp + 1) << 3;
    for (j = 0; j < 8; j++) {
      x_bin[j] += (real_T)pp[xoffset + j];
    }
  }

  y = x_bin[0];
  for (xtmp = 0; xtmp < 7; xtmp++) {
    y += x_bin[xtmp + 1];
  }

  if (y < 65536.0) {
    if (y >= 0.0) {
      res = (uint16_T)y;
    } else {
      res = 0;
    }
  } else if (y >= 65536.0) {
    res = MAX_uint16_T;
  } else {
    res = 0;
  }

  return res;
}

/* End of code generation (BAM.c) */
