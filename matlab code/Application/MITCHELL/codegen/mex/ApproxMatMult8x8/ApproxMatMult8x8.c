/*
 * ApproxMatMult8x8.c
 *
 * Code generation for function 'ApproxMatMult8x8'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mitchell.h"
#include "bin2dec.h"
#include "dec2binfrac.h"
#include "dec2bin.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 17,    /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 18,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 19,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 20,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 22,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 23,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 25,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 26,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo p_emlrtRSI = { 25,  /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 12,  /* lineNo */
  "MITCHELL_ETM",                      /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\MITCHELL_ETM.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 18,  /* lineNo */
  "MITCHELL_ETM",                      /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\MITCHELL_ETM.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 25,  /* lineNo */
  "MITCHELL_ETM",                      /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\MITCHELL_ETM.m"/* pathName */
};

static emlrtRSInfo v_emlrtRSI = { 37,  /* lineNo */
  "MITCHELL_ETM",                      /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\MITCHELL_ETM.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 33, /* lineNo */
  "dec2bin",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\strfun\\dec2bin.m"/* pathName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  16,                                  /* iLast */
  34,                                  /* lineNo */
  26,                                  /* colNo */
  "lower_approx_bin",                  /* aName */
  "MITCHELL_ETM",                      /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\MITCHELL\\MITCHELL_ETM.m",/* pName */
  3                                    /* checkKind */
};

/* Function Definitions */
void ApproxMatMult8x8(const emlrtStack *sp, const real_T T[64], const real_T I
                      [64], real_T res[64])
{
  int32_T i;
  int32_T k;
  real_T acc;
  int32_T t1_int_bin_size[2];
  int32_T t2_int_bin_size[2];
  int32_T j;
  boolean_T y;
  int32_T b_sign;
  real_T t1;
  uint16_T a;
  uint16_T b;
  real_T x_data[1];
  char_T t1_int_bin_data[52];
  int32_T b_t1_int_bin_size[2];
  char_T t2_int_bin_data[52];
  int32_T b_t2_int_bin_size[2];
  real_T hfi_data[1];
  char_T t1_frac_bin[13];
  char_T t2_frac_bin[13];
  int32_T first_one;
  int32_T i0;
  char_T b_t1_int_bin_data[65];
  real_T d;
  uint8_T upper_a;
  uint8_T upper_b;
  uint8_T lower_a;
  uint8_T lower_b;
  uint32_T b_d;
  int32_T b_a;
  int32_T xtmp;
  boolean_T exitg1;
  char_T mult[32];
  int8_T lower_approx_bin[16];
  int32_T exitg2;
  static const int8_T iv0[6] = { 0, 1, 2, 3, 4, 5 };

  real_T x[26];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  i = 0;
  while (i < 8) {
    k = 0;
    while (k < 8) {
      acc = 0.0;
      t1_int_bin_size[0] = 1;
      t2_int_bin_size[0] = 1;
      j = 0;
      while (j < 8) {
        y = (((I[j + (k << 3)] > 0.0) ^ (T[i + (j << 3)] > 0.0)) != 0);
        b_sign = -(int32_T)y;
        if (-(int32_T)y == 0) {
          b_sign = 1;
        }

        t1 = muDoubleScalarAbs(I[j + (k << 3)]) * 8192.0;
        if (t1 < 4.503599627370496E+15) {
          if (t1 >= 0.5) {
            t1 = muDoubleScalarFloor(t1 + 0.5);
          } else {
            t1 *= 0.0;
          }
        }

        if (t1 < 65536.0) {
          a = (uint16_T)t1;
        } else if (t1 >= 65536.0) {
          a = MAX_uint16_T;
        } else {
          a = 0;
        }

        t1 = muDoubleScalarAbs(T[i + (j << 3)]) * 8192.0;
        if (t1 < 4.503599627370496E+15) {
          if (t1 >= 0.5) {
            t1 = muDoubleScalarFloor(t1 + 0.5);
          } else {
            t1 *= 0.0;
          }
        }

        if (t1 < 65536.0) {
          b = (uint16_T)t1;
        } else if (t1 >= 65536.0) {
          b = MAX_uint16_T;
        } else {
          b = 0;
        }

        x_data[0] = muDoubleScalarFloor((real_T)a * 0.0001220703125);
        st.site = &emlrtRSI;
        dec2bin(&st, x_data, t1_int_bin_data, b_t1_int_bin_size);
        x_data[0] = muDoubleScalarFloor((real_T)b * 0.0001220703125);
        st.site = &b_emlrtRSI;
        dec2bin(&st, x_data, t2_int_bin_data, b_t2_int_bin_size);
        hfi_data[0] = (real_T)a * 0.0001220703125 - muDoubleScalarFloor((real_T)
          a * 0.0001220703125);
        st.site = &c_emlrtRSI;
        dec2binfrac(&st, hfi_data, t1_frac_bin);
        hfi_data[0] = (real_T)b * 0.0001220703125 - muDoubleScalarFloor((real_T)
          b * 0.0001220703125);
        st.site = &d_emlrtRSI;
        dec2binfrac(&st, hfi_data, t2_frac_bin);
        st.site = &e_emlrtRSI;
        b_st.site = &p_emlrtRSI;
        t1_int_bin_size[1] = b_t1_int_bin_size[1] + 13;
        first_one = b_t1_int_bin_size[1];
        for (i0 = 0; i0 < first_one; i0++) {
          b_t1_int_bin_data[i0] = t1_int_bin_data[i0];
        }

        for (i0 = 0; i0 < 13; i0++) {
          b_t1_int_bin_data[i0 + b_t1_int_bin_size[1]] = t1_frac_bin[i0];
        }

        st.site = &e_emlrtRSI;
        t1 = bin2dec(&st, b_t1_int_bin_data, t1_int_bin_size);
        st.site = &f_emlrtRSI;
        b_st.site = &p_emlrtRSI;
        t2_int_bin_size[1] = b_t2_int_bin_size[1] + 13;
        first_one = b_t2_int_bin_size[1];
        for (i0 = 0; i0 < first_one; i0++) {
          b_t1_int_bin_data[i0] = t2_int_bin_data[i0];
        }

        for (i0 = 0; i0 < 13; i0++) {
          b_t1_int_bin_data[i0 + b_t2_int_bin_size[1]] = t2_frac_bin[i0];
        }

        st.site = &f_emlrtRSI;
        d = bin2dec(&st, b_t1_int_bin_data, t2_int_bin_size);
        st.site = &g_emlrtRSI;
        t1 = muDoubleScalarRound(t1);
        if (t1 < 65536.0) {
          if (t1 >= 0.0) {
            a = (uint16_T)t1;
          } else {
            a = 0;
          }
        } else if (t1 >= 65536.0) {
          a = MAX_uint16_T;
        } else {
          a = 0;
        }

        t1 = muDoubleScalarRound(d);
        if (t1 < 65536.0) {
          if (t1 >= 0.0) {
            b = (uint16_T)t1;
          } else {
            b = 0;
          }
        } else if (t1 >= 65536.0) {
          b = MAX_uint16_T;
        } else {
          b = 0;
        }

        upper_a = (uint8_T)((uint32_T)(a & 65280) >> 8);
        upper_b = (uint8_T)((uint32_T)(b & 65280) >> 8);
        lower_a = (uint8_T)(a & 255);
        lower_b = (uint8_T)(b & 255);
        if ((upper_a == 0) || (upper_b == 0)) {
          b_st.site = &s_emlrtRSI;
          b_d = mitchell(&b_st, lower_a, lower_b);

          /*          res = bitor(bitshift(uint32(upper_a),16),res); */
          /*          res = bitor(bitshift(uint32(upper_b),16),res); */
        } else {
          b_st.site = &t_emlrtRSI;
          c_st.site = &t_emlrtRSI;
          b_a = mitchell(&c_st, upper_a, upper_b);
          upper_a = (uint8_T)(lower_a | lower_b);
          first_one = -7;
          xtmp = 0;
          exitg1 = false;
          while ((!exitg1) && (xtmp < 8)) {
            b_st.site = &u_emlrtRSI;
            if (upper_a >= (int32_T)muDoubleScalarPower(2.0, 7.0 + -(real_T)xtmp))
            {
              first_one = -xtmp;
              exitg1 = true;
            } else {
              xtmp++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&st);
              }
            }
          }

          for (i0 = 0; i0 < 16; i0++) {
            lower_approx_bin[i0] = 0;
          }

          xtmp = 0;
          while (xtmp <= first_one + 15) {
            i0 = (xtmp - first_one) + 1;
            if (!(i0 <= 16)) {
              emlrtDynamicBoundsCheckR2012b(i0, 1, 16, &emlrtBCI, &st);
            }

            lower_approx_bin[i0 - 1] = 1;
            xtmp++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }

          for (first_one = 0; first_one < 8; first_one++) {
            xtmp = lower_approx_bin[first_one];
            lower_approx_bin[first_one] = lower_approx_bin[15 - first_one];
            lower_approx_bin[15 - first_one] = (int8_T)xtmp;
          }

          b_st.site = &v_emlrtRSI;
          t1 = 1.0;
          d = 0.0;
          for (first_one = 0; first_one < 16; first_one++) {
            if (lower_approx_bin[first_one] != 0) {
              d += t1;
            }

            t1 *= 2.0;
          }

          if (d < 4.294967296E+9) {
            b_d = (uint32_T)d;
          } else {
            b_d = MAX_uint32_T;
          }

          b_d |= (uint32_T)b_a << 16;
        }

        st.site = &g_emlrtRSI;
        b_st.site = &cb_emlrtRSI;
        for (i0 = 0; i0 < 32; i0++) {
          mult[i0] = '0';
        }

        for (first_one = 0; first_one < 32; first_one++) {
          if ((b_d & 1U << first_one) != 0U) {
            mult[31 - first_one] = '1';
          }
        }

        st.site = &h_emlrtRSI;
        first_one = 0;
        do {
          exitg2 = 0;
          if (first_one < 6) {
            if ((mult[iv0[first_one]] != '0') && (mult[iv0[first_one]] != '1'))
            {
              y = false;
              exitg2 = 1;
            } else {
              first_one++;
            }
          } else {
            y = true;
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (!y) {
          emlrtErrorWithMessageIdR2012b(&st, &emlrtRTEI,
            "MATLAB:bin2dec:IllegalBinaryString", 0);
        }

        d = 0.0;
        t1 = 1.0;
        for (first_one = 0; first_one < 6; first_one++) {
          if (mult[iv0[5 - first_one]] == '1') {
            d += t1;
          }

          t1 += t1;
        }

        for (first_one = 0; first_one < 26; first_one++) {
          x[first_one] = muDoubleScalarPower(2.0, -1.0 + -(((real_T)first_one +
            1.0) - 1.0)) * ((real_T)mult[6 + first_one] - 48.0);
        }

        t1 = x[0];
        for (first_one = 0; first_one < 25; first_one++) {
          t1 += x[first_one + 1];
        }

        acc += (real_T)b_sign * (d + t1);

        /*                  error = abs((sign*mult)-I(j,k)*T(i,j)); */
        /*                  if(error>0.1) */
        /*                      block_struct.location; */
        /*                  end */
        j++;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(sp);
        }
      }

      res[i + (k << 3)] = acc;
      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }
}

/* End of code generation (ApproxMatMult8x8.c) */
