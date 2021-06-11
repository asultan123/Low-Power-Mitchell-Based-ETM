/*
 * mitchell.c
 *
 * Code generation for function 'mitchell'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mitchell.h"
#include "bin2dec.h"
#include "log_approx.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo w_emlrtRSI = { 15,  /* lineNo */
  "mitchell",                          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\mitchell.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 17,  /* lineNo */
  "mitchell",                          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\mitchell.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 19,  /* lineNo */
  "mitchell",                          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\mitchell.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 23, /* lineNo */
  "mitchell",                          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\mitchell.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 23, /* lineNo */
  "antilog_approx",                    /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\antilog_approx.m"/* pathName */
};

static emlrtBCInfo b_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  57,                                  /* lineNo */
  28,                                  /* colNo */
  "lut",                               /* aName */
  "lut_correction",                    /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\lut_correction.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { 1,   /* iFirst */
  8,                                   /* iLast */
  57,                                  /* lineNo */
  32,                                  /* colNo */
  "lut",                               /* aName */
  "lut_correction",                    /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\lut_correction.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  46,                                  /* colNo */
  "lower_part",                        /* aName */
  "antilog_approx",                    /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\antilog_approx.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  19,                                  /* lineNo */
  30,                                  /* colNo */
  "anti_log_num_bin",                  /* aName */
  "antilog_approx",                    /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\antilog_approx.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  46,                                  /* colNo */
  "lower_part",                        /* aName */
  "antilog_approx",                    /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\antilog_approx.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  15,                                  /* lineNo */
  30,                                  /* colNo */
  "anti_log_num_bin",                  /* aName */
  "antilog_approx",                    /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\antilog_approx.m",/* pName */
  0                                    /* checkKind */
};

/* Function Definitions */
uint16_T mitchell(const emlrtStack *sp, uint8_T a, uint8_T b)
{
  uint16_T result;
  real_T b_a;
  real_T lower_a;
  real_T b_b;
  real_T lower2;
  int32_T row;
  int32_T col;
  uint16_T c;
  static const real_T lut[64] = { 0.0048, 0.0131, 0.0198, 0.0254, 0.0301, 0.0342,
    0.0377, 0.0266, 0.0131, 0.036, 0.0548, 0.0705, 0.0838, 0.0952, 0.091, 0.0328,
    0.0198, 0.0548, 0.0837, 0.108, 0.1287, 0.1324, 0.0811, 0.025, 0.0254, 0.0705,
    0.108, 0.1397, 0.1527, 0.1093, 0.0601, 0.0187, 0.0301, 0.0838, 0.1287,
    0.1527, 0.1186, 0.0774, 0.0428, 0.0133, 0.0342, 0.0952, 0.1324, 0.1093,
    0.0774, 0.0507, 0.0282, 0.0088, 0.0377, 0.091, 0.0611, 0.0601, 0.0428,
    0.0282, 0.0157, 0.0049, 0.0266, 0.0328, 0.025, 0.0187, 0.0133, 0.0088,
    0.0049, 0.0015 };

  uint8_T u0;
  uint16_T hfi;
  uint16_T log_addition;
  int32_T j;
  char_T anti_log_num_bin_data[52];
  char_T lower_part_data[52];
  int32_T anti_log_num_bin_size[2];
  int32_T characteristic_num;
  int32_T characteristic_num_pos;
  int32_T lower_part_size_idx_1;
  int32_T b_hfi;
  boolean_T exitg1;
  boolean_T p;
  char_T b_lower_part_data[52];
  int32_T i1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if ((a < 1) || (b < 1)) {
    result = 0;
  } else {
    st.site = &w_emlrtRSI;
    log_approx(&st, a, &b_a, &lower_a);
    st.site = &x_emlrtRSI;
    log_approx(&st, b, &b_b, &lower2);
    st.site = &y_emlrtRSI;
    row = 0;
    if (lower_a < 0.125) {
      row = 1;
    } else if (lower_a < 0.25) {
      row = 2;
    } else if (lower_a < 0.375) {
      row = 3;
    } else if (lower_a < 0.5) {
      row = 4;
    } else if (lower_a < 0.625) {
      row = 5;
    } else if (lower_a < 0.75) {
      row = 6;
    } else if (lower_a < 0.875) {
      row = 7;
    } else {
      if (lower_a <= 1.0) {
        row = 8;
      }
    }

    col = 0;
    if (lower2 < 0.125) {
      col = 1;
    } else if (lower2 < 0.25) {
      col = 2;
    } else if (lower2 < 0.375) {
      col = 3;
    } else if (lower2 < 0.5) {
      col = 4;
    } else if (lower2 < 0.625) {
      col = 5;
    } else if (lower2 < 0.75) {
      col = 6;
    } else if (lower2 < 0.875) {
      col = 7;
    } else {
      if (lower2 <= 1.0) {
        col = 8;
      }
    }

    if (!(row >= 1)) {
      emlrtDynamicBoundsCheckR2012b(0, 1, 8, &b_emlrtBCI, &st);
    }

    if (!(col >= 1)) {
      emlrtDynamicBoundsCheckR2012b(0, 1, 8, &c_emlrtBCI, &st);
    }

    b_a *= 128.0;
    lower_a = muDoubleScalarAbs(b_a);
    if (lower_a < 4.503599627370496E+15) {
      if (lower_a >= 0.5) {
        b_a = muDoubleScalarFloor(b_a + 0.5);
      } else {
        b_a *= 0.0;
      }
    }

    if (muDoubleScalarIsNaN(b_a) || muDoubleScalarIsInf(b_a)) {
      lower2 = 0.0;
    } else {
      lower2 = muDoubleScalarRem(b_a, 2048.0);
    }

    b_a = b_b * 128.0;
    lower_a = muDoubleScalarAbs(b_a);
    if (lower_a < 4.503599627370496E+15) {
      if (lower_a >= 0.5) {
        b_a = muDoubleScalarFloor(b_a + 0.5);
      } else {
        b_a *= 0.0;
      }
    }

    if (muDoubleScalarIsNaN(b_a) || muDoubleScalarIsInf(b_a)) {
      b_a = 0.0;
    } else {
      b_a = muDoubleScalarRem(b_a, 2048.0);
    }

    c = (uint16_T)((int32_T)((uint32_T)((uint16_T)(int16_T)muDoubleScalarFloor
      (lower2) & 2047) + ((uint16_T)(int16_T)muDoubleScalarFloor(b_a) & 2047)) &
                   2047);
    b_a = lut[(row + ((col - 1) << 3)) - 1] * 128.0;
    if (b_a >= 0.5) {
      lower2 = muDoubleScalarFloor(b_a + 0.5);
    } else {
      lower2 = 0.0;
    }

    u0 = (uint8_T)lower2;
    hfi = u0;
    log_addition = (uint16_T)((int32_T)((uint32_T)c + hfi) & 2047);
    st.site = &ab_emlrtRSI;
    b_a = (real_T)((int32_T)((uint32_T)c + hfi) & 2047) * 0.0078125;
    for (row = 0; row < 52; row++) {
      anti_log_num_bin_data[row] = '0';
    }

    for (j = 37; j < 53; j++) {
      anti_log_num_bin_data[j - 37] = '0';
    }

    memcpy(&lower_part_data[0], &anti_log_num_bin_data[0], (uint32_T)(16 *
            (int32_T)sizeof(char_T)));
    anti_log_num_bin_size[0] = 1;
    anti_log_num_bin_size[1] = 16;
    memcpy(&anti_log_num_bin_data[0], &lower_part_data[0], (uint32_T)(16 *
            (int32_T)sizeof(char_T)));
    characteristic_num = (int32_T)muDoubleScalarFloor((real_T)log_addition *
      0.0078125);
    characteristic_num_pos = 16 - (int32_T)muDoubleScalarFloor(b_a);
    row = 16 - characteristic_num;
    anti_log_num_bin_data[row - 1] = '1';
    b_a = ((real_T)log_addition * 0.0078125 - muDoubleScalarFloor(b_a)) * 256.0;
    lower_a = muDoubleScalarAbs(b_a);
    if (lower_a >= 0.5) {
      lower2 = muDoubleScalarFloor(b_a + 0.5);
    } else {
      lower2 = b_a * 0.0;
    }

    if (lower2 >= 0.0) {
      hfi = (uint16_T)lower2;
    } else {
      hfi = 0;
    }

    lower_part_size_idx_1 = 52;
    for (row = 0; row < 52; row++) {
      lower_part_data[row] = '0';
    }

    if ((int32_T)((uint32_T)hfi >> 8) == 0) {
      b_hfi = (uint16_T)(hfi << 8);
    } else {
      b_hfi = 65535;
    }

    row = (int32_T)((uint32_T)b_hfi >> 8);
    j = 52;
    exitg1 = false;
    while ((!exitg1) && (j > 0)) {
      col = row;
      row = (int32_T)muDoubleScalarFloor((real_T)row / 2.0);
      if ((row << 1) < col) {
        lower_part_data[j - 1] = '1';
      }

      if (row > 0) {
        j--;
      } else {
        exitg1 = true;
      }
    }

    col = 45;
    j = 1;
    exitg1 = false;
    while ((!exitg1) && (j <= 44)) {
      p = false;
      if (lower_part_data[j - 1] != '0') {
        p = true;
      }

      if (p) {
        col = j;
        exitg1 = true;
      } else {
        j++;
      }
    }

    if (col > 1) {
      for (j = col; j < 53; j++) {
        lower_part_data[j - col] = lower_part_data[j - 1];
      }

      row = 53 - col;
      memcpy(&b_lower_part_data[0], &lower_part_data[0], (uint32_T)(row *
              (int32_T)sizeof(char_T)));
      lower_part_size_idx_1 = 53 - col;
      row = 53 - col;
      memcpy(&lower_part_data[0], &b_lower_part_data[0], (uint32_T)(row *
              (int32_T)sizeof(char_T)));
    }

    if (25 - characteristic_num <= 16) {
      col = 0;
      while (col <= 7) {
        j = (characteristic_num_pos + col) + 1;
        i1 = (j + characteristic_num) - 16;
        if (!((i1 >= 1) && (i1 <= lower_part_size_idx_1))) {
          emlrtDynamicBoundsCheckR2012b(i1, 1, lower_part_size_idx_1,
            &f_emlrtBCI, &st);
        }

        if (!(j <= 16)) {
          emlrtDynamicBoundsCheckR2012b(j, 1, 16, &g_emlrtBCI, &st);
        }

        anti_log_num_bin_data[j - 1] = lower_part_data[i1 - 1];
        col++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    } else {
      col = 0;
      while (col <= characteristic_num - 1) {
        j = (characteristic_num_pos + col) + 1;
        row = (j + characteristic_num) - 16;
        if (!((row >= 1) && (row <= lower_part_size_idx_1))) {
          emlrtDynamicBoundsCheckR2012b(row, 1, lower_part_size_idx_1,
            &d_emlrtBCI, &st);
        }

        if (!(j <= 16)) {
          emlrtDynamicBoundsCheckR2012b(j, 1, 16, &e_emlrtBCI, &st);
        }

        anti_log_num_bin_data[j - 1] = lower_part_data[row - 1];
        col++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
    }

    b_st.site = &fb_emlrtRSI;
    lower2 = muDoubleScalarRound(bin2dec(&b_st, anti_log_num_bin_data,
      anti_log_num_bin_size));
    if (lower2 < 65536.0) {
      if (lower2 >= 0.0) {
        result = (uint16_T)lower2;
      } else {
        result = 0;
      }
    } else if (lower2 >= 65536.0) {
      result = MAX_uint16_T;
    } else {
      result = 0;
    }
  }

  return result;
}

/* End of code generation (mitchell.c) */
