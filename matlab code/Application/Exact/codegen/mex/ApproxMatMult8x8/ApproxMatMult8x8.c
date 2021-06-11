/*
 * ApproxMatMult8x8.c
 *
 * Code generation for function 'ApproxMatMult8x8'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "bin2dec.h"
#include "dec2binfrac.h"
#include "dec2bin.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 17,    /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Exact\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 18,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Exact\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 19,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Exact\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 20,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Exact\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 22,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Exact\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 23,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Exact\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 25,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Exact\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 26,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Exact\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtBCInfo emlrtBCI = { 1,     /* iFirst */
  16,                                  /* iLast */
  40,                                  /* lineNo */
  26,                                  /* colNo */
  "lower_approx_bin",                  /* aName */
  "EXACT_ETM",                         /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Exact\\EXACT_ETM.m",/* pName */
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
  int32_T lower_a;
  int32_T i0;
  char_T b_t1_int_bin_data[65];
  real_T d;
  int32_T upper_a;
  int32_T upper_b;
  int32_T lower_b;
  uint32_T qY;
  char_T mult[32];
  uint8_T lower_approx;
  boolean_T exitg1;
  int32_T exitg2;
  int8_T lower_approx_bin[16];
  static const int8_T iv0[6] = { 0, 1, 2, 3, 4, 5 };

  uint32_T q0;
  real_T x[26];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
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
        t1_int_bin_size[1] = b_t1_int_bin_size[1] + 13;
        lower_a = b_t1_int_bin_size[1];
        for (i0 = 0; i0 < lower_a; i0++) {
          b_t1_int_bin_data[i0] = t1_int_bin_data[i0];
        }

        for (i0 = 0; i0 < 13; i0++) {
          b_t1_int_bin_data[i0 + b_t1_int_bin_size[1]] = t1_frac_bin[i0];
        }

        st.site = &e_emlrtRSI;
        t1 = bin2dec(&st, b_t1_int_bin_data, t1_int_bin_size);
        st.site = &f_emlrtRSI;
        t2_int_bin_size[1] = b_t2_int_bin_size[1] + 13;
        lower_a = b_t2_int_bin_size[1];
        for (i0 = 0; i0 < lower_a; i0++) {
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

        upper_a = (int32_T)((uint32_T)(a & 65280) >> 8);
        upper_b = (int32_T)((uint32_T)(b & 65280) >> 8);
        lower_a = a & 255;
        lower_b = b & 255;
        if ((upper_a == 0) || (upper_b == 0)) {
          qY = (uint32_T)lower_a * lower_b;

          /*          res = bitor(bitshift(uint32(upper_a),16),res); */
          /*          res = bitor(bitshift(uint32(upper_b),16),res); */
        } else {
          /*      elseif(upper_a == 0) */
          /*          res = bitshift(uint32(bitshift(lower_a,16)*upper_b),-16); */
          /*          return */
          /*      elseif(upper_b == 0) */
          /*          res = bitshift(uint32(bitshift(lower_b,16)*upper_a),-16); */
          /*          return */
          /*      end */
          i0 = (int32_T)((uint32_T)lower_a | lower_b);
          if ((uint32_T)i0 > 255U) {
            i0 = 255;
          }

          lower_approx = (uint8_T)i0;
          lower_a = -7;
          lower_b = 0;
          exitg1 = false;
          while ((!exitg1) && (lower_b < 8)) {
            if (lower_approx >= (int32_T)muDoubleScalarPower(2.0, 7.0 + -(real_T)
                 lower_b)) {
              lower_a = -lower_b;
              exitg1 = true;
            } else {
              lower_b++;
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&st);
              }
            }
          }

          for (i0 = 0; i0 < 16; i0++) {
            lower_approx_bin[i0] = 0;
          }

          lower_b = 0;
          while (lower_b <= lower_a + 15) {
            i0 = (lower_b - lower_a) + 1;
            if (!(i0 <= 16)) {
              emlrtDynamicBoundsCheckR2012b(i0, 1, 16, &emlrtBCI, &st);
            }

            lower_approx_bin[i0 - 1] = 1;
            lower_b++;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }

          for (lower_a = 0; lower_a < 8; lower_a++) {
            lower_b = lower_approx_bin[lower_a];
            lower_approx_bin[lower_a] = lower_approx_bin[15 - lower_a];
            lower_approx_bin[15 - lower_a] = (int8_T)lower_b;
          }

          t1 = 1.0;
          d = 0.0;
          for (lower_a = 0; lower_a < 16; lower_a++) {
            if (lower_approx_bin[lower_a] != 0) {
              d += t1;
            }

            t1 *= 2.0;
          }

          q0 = ((uint32_T)upper_a * upper_b) << 16U;
          if (d < 4.294967296E+9) {
            qY = (uint32_T)d;
          } else {
            qY = MAX_uint32_T;
          }

          qY += q0;
          if (qY < q0) {
            qY = MAX_uint32_T;
          }
        }

        st.site = &g_emlrtRSI;
        for (i0 = 0; i0 < 32; i0++) {
          mult[i0] = '0';
        }

        for (lower_a = 0; lower_a < 32; lower_a++) {
          if ((qY & 1U << lower_a) != 0U) {
            mult[31 - lower_a] = '1';
          }
        }

        st.site = &h_emlrtRSI;
        lower_a = 0;
        do {
          exitg2 = 0;
          if (lower_a < 6) {
            if ((mult[iv0[lower_a]] != '0') && (mult[iv0[lower_a]] != '1')) {
              y = false;
              exitg2 = 1;
            } else {
              lower_a++;
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
        for (lower_a = 0; lower_a < 6; lower_a++) {
          if (mult[iv0[5 - lower_a]] == '1') {
            d += t1;
          }

          t1 += t1;
        }

        for (lower_a = 0; lower_a < 26; lower_a++) {
          x[lower_a] = muDoubleScalarPower(2.0, -1.0 + -(((real_T)lower_a + 1.0)
            - 1.0)) * ((real_T)mult[6 + lower_a] - 48.0);
        }

        t1 = x[0];
        for (lower_a = 0; lower_a < 25; lower_a++) {
          t1 += x[lower_a + 1];
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
