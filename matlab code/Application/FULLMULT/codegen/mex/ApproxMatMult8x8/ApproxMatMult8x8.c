/*
 * ApproxMatMult8x8.c
 *
 * Code generation for function 'ApproxMatMult8x8'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "scalexpAlloc.h"
#include "dec2bin.h"
#include "bin2dec.h"
#include "dec2binfrac.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 26,    /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\FULLMULT\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 25,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\FULLMULT\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 24,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\FULLMULT\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 22,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\FULLMULT\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 21,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\FULLMULT\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 19,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\FULLMULT\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 18,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\FULLMULT\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 17,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\FULLMULT\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 16,  /* lineNo */
  "ApproxMatMult8x8",                  /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\FULLMULT\\ApproxMatMult8x8.m"/* pathName */
};

static emlrtRSInfo n_emlrtRSI = { 49,  /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 2,   /* lineNo */
  "binfrac2dec",                       /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\FULLMULT\\binfrac2dec.m"/* pathName */
};

static emlrtRSInfo s_emlrtRSI = { 58,  /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 45,  /* lineNo */
  "applyBinaryScalarFunction",         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\applyBinaryScalarFunction.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 9,   /* lineNo */
  "sum",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"/* pathName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  48,                                  /* colNo */
  "mult",                              /* aName */
  "ApproxMatMult8x8",                  /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\FULLMULT\\ApproxMatMult8x8.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo emlrtECI = { 2,     /* nDims */
  2,                                   /* lineNo */
  15,                                  /* colNo */
  "binfrac2dec",                       /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\FULLMULT\\binfrac2dec.m"/* pName */
};

static emlrtRTEInfo c_emlrtRTEI = { 17,/* lineNo */
  19,                                  /* colNo */
  "scalexpAlloc",                      /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\scalexpAlloc.m"/* pName */
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
  int32_T b_size[2];
  int32_T z1_size[2];
  int32_T j;
  boolean_T y;
  int32_T b_sign;
  real_T di;
  real_T olddi;
  uint16_T u0;
  real_T t1;
  real_T varargin_1;
  real_T t2;
  char_T t1_int_bin_data[52];
  int32_T b_t1_int_bin_size[2];
  char_T t2_int_bin_data[52];
  int32_T b_t2_int_bin_size[2];
  char_T t1_frac_bin[13];
  char_T t2_frac_bin[13];
  int32_T loop_ub;
  int32_T b_j;
  char_T b_t1_int_bin_data[65];
  boolean_T exitg1;
  int32_T firstcol;
  int32_T exitg2;
  static const int8_T iv0[6] = { 0, 1, 2, 3, 4, 5 };

  int8_T b_data[46];
  int32_T z_size[2];
  real_T z1_data[46];
  int32_T iv1[2];
  real_T z_data[46];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  i = 0;
  while (i < 8) {
    k = 0;
    while (k < 8) {
      acc = 0.0;
      t1_int_bin_size[0] = 1;
      t2_int_bin_size[0] = 1;
      b_size[0] = 1;
      z1_size[0] = 1;
      j = 0;
      while (j < 8) {
        y = (((I[j + (k << 3)] > 0.0) ^ (T[i + (j << 3)] > 0.0)) != 0);
        b_sign = -(int32_T)y;
        if (-(int32_T)y == 0) {
          b_sign = 1;
        }

        di = muDoubleScalarAbs(I[j + (k << 3)]);
        olddi = di * 8192.0;
        if (olddi < 4.503599627370496E+15) {
          if (olddi >= 0.5) {
            olddi = muDoubleScalarFloor(olddi + 0.5);
          } else {
            olddi *= 0.0;
          }
        }

        if (olddi < 65536.0) {
          u0 = (uint16_T)olddi;
        } else if (olddi >= 65536.0) {
          u0 = MAX_uint16_T;
        } else {
          u0 = 0;
        }

        t1 = (real_T)u0 * 0.0001220703125;
        varargin_1 = muDoubleScalarAbs(T[i + (j << 3)]);
        olddi = varargin_1 * 8192.0;
        if (olddi < 4.503599627370496E+15) {
          if (olddi >= 0.5) {
            olddi = muDoubleScalarFloor(olddi + 0.5);
          } else {
            olddi *= 0.0;
          }
        }

        if (olddi < 65536.0) {
          u0 = (uint16_T)olddi;
        } else if (olddi >= 65536.0) {
          u0 = MAX_uint16_T;
        } else {
          u0 = 0;
        }

        t2 = (real_T)u0 * 0.0001220703125;
        st.site = &i_emlrtRSI;
        dec2bin(&st, muDoubleScalarFloor(t1), t1_int_bin_data, b_t1_int_bin_size);
        st.site = &h_emlrtRSI;
        dec2bin(&st, muDoubleScalarFloor(t2), t2_int_bin_data, b_t2_int_bin_size);
        olddi = di * 8192.0;
        if (olddi < 4.503599627370496E+15) {
          if (olddi >= 0.5) {
            olddi = muDoubleScalarFloor(olddi + 0.5);
          } else {
            olddi *= 0.0;
          }
        }

        if (olddi < 65536.0) {
          u0 = (uint16_T)olddi;
        } else if (olddi >= 65536.0) {
          u0 = MAX_uint16_T;
        } else {
          u0 = 0;
        }

        st.site = &g_emlrtRSI;
        dec2binfrac(&st, (real_T)u0 * 0.0001220703125 - muDoubleScalarFloor(t1),
                    t1_frac_bin);
        olddi = varargin_1 * 8192.0;
        if (olddi < 4.503599627370496E+15) {
          if (olddi >= 0.5) {
            olddi = muDoubleScalarFloor(olddi + 0.5);
          } else {
            olddi *= 0.0;
          }
        }

        if (olddi < 65536.0) {
          u0 = (uint16_T)olddi;
        } else if (olddi >= 65536.0) {
          u0 = MAX_uint16_T;
        } else {
          u0 = 0;
        }

        st.site = &f_emlrtRSI;
        dec2binfrac(&st, (real_T)u0 * 0.0001220703125 - muDoubleScalarFloor(t2),
                    t2_frac_bin);
        t1_int_bin_size[1] = b_t1_int_bin_size[1] + 13;
        loop_ub = b_t1_int_bin_size[1];
        for (b_j = 0; b_j < loop_ub; b_j++) {
          b_t1_int_bin_data[b_j] = t1_int_bin_data[b_t1_int_bin_size[0] * b_j];
        }

        for (b_j = 0; b_j < 13; b_j++) {
          b_t1_int_bin_data[b_j + b_t1_int_bin_size[1]] = t1_frac_bin[b_j];
        }

        st.site = &e_emlrtRSI;
        t1 = bin2dec(&st, b_t1_int_bin_data, t1_int_bin_size);
        t2_int_bin_size[1] = b_t2_int_bin_size[1] + 13;
        loop_ub = b_t2_int_bin_size[1];
        for (b_j = 0; b_j < loop_ub; b_j++) {
          b_t1_int_bin_data[b_j] = t2_int_bin_data[b_t2_int_bin_size[0] * b_j];
        }

        for (b_j = 0; b_j < 13; b_j++) {
          b_t1_int_bin_data[b_j + b_t2_int_bin_size[1]] = t2_frac_bin[b_j];
        }

        st.site = &d_emlrtRSI;
        t2 = bin2dec(&st, b_t1_int_bin_data, t2_int_bin_size);
        st.site = &c_emlrtRSI;
        di = t1 * t2;
        if (!all_nonnegative_and_finite(di)) {
          emlrtErrorWithMessageIdR2012b(&st, &emlrtRTEI,
            "MATLAB:dec2bin:MustBeNonNegativeFinite", 0);
        }

        b_t1_int_bin_size[1] = 52;
        for (b_j = 0; b_j < 52; b_j++) {
          t1_int_bin_data[b_j] = '0';
        }

        b_j = 52;
        exitg1 = false;
        while ((!exitg1) && (b_j > 0)) {
          olddi = di;
          di = muDoubleScalarFloor(di / 2.0);
          if (2.0 * di < olddi) {
            t1_int_bin_data[b_j - 1] = '1';
          }

          if (di > 0.0) {
            b_j--;
          } else {
            exitg1 = true;
          }
        }

        firstcol = 21;
        b_j = 1;
        exitg1 = false;
        while ((!exitg1) && (b_j <= 20)) {
          y = false;
          if (t1_int_bin_data[b_j - 1] != '0') {
            y = true;
          }

          if (y) {
            firstcol = b_j;
            exitg1 = true;
          } else {
            b_j++;
          }
        }

        if (firstcol > 1) {
          for (b_j = firstcol; b_j < 53; b_j++) {
            t1_int_bin_data[b_j - firstcol] = t1_int_bin_data[b_j - 1];
          }

          loop_ub = 53 - firstcol;
          memcpy(&t2_int_bin_data[0], &t1_int_bin_data[0], (uint32_T)(loop_ub *
                  (int32_T)sizeof(char_T)));
          b_t1_int_bin_size[1] = 53 - firstcol;
          loop_ub = 53 - firstcol;
          memcpy(&t1_int_bin_data[0], &t2_int_bin_data[0], (uint32_T)(loop_ub *
                  (int32_T)sizeof(char_T)));
        }

        st.site = &b_emlrtRSI;
        b_j = 0;
        do {
          exitg2 = 0;
          if (b_j < 6) {
            if ((t1_int_bin_data[iv0[b_j]] != '0') && (t1_int_bin_data[iv0[b_j]]
                 != '1')) {
              y = false;
              exitg2 = 1;
            } else {
              b_j++;
            }
          } else {
            y = true;
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (!y) {
          emlrtErrorWithMessageIdR2012b(&st, &b_emlrtRTEI,
            "MATLAB:bin2dec:IllegalBinaryString", 0);
        }

        olddi = 0.0;
        di = 1.0;
        for (b_j = 0; b_j < 6; b_j++) {
          if (t1_int_bin_data[iv0[5 - b_j]] == '1') {
            olddi += di;
          }

          di += di;
        }

        b_j = b_t1_int_bin_size[1];
        if (!(b_j <= b_t1_int_bin_size[1])) {
          emlrtDynamicBoundsCheckR2012b(b_j, 1, b_t1_int_bin_size[1], &emlrtBCI,
            sp);
        }

        st.site = &emlrtRSI;
        b_size[1] = b_t1_int_bin_size[1] - 6;
        loop_ub = b_t1_int_bin_size[1] - 7;
        for (b_j = 0; b_j <= loop_ub; b_j++) {
          b_data[b_j] = (int8_T)(-1 - b_j);
        }

        b_st.site = &r_emlrtRSI;
        c_st.site = &n_emlrtRSI;
        d_st.site = &s_emlrtRSI;
        e_st.site = &t_emlrtRSI;
        z_size[0] = 1;
        z_size[1] = b_size[1];
        if (!dimagree(z_size, b_size)) {
          emlrtErrorWithMessageIdR2012b(&e_st, &c_emlrtRTEI, "MATLAB:dimagree",
            0);
        }

        z1_size[1] = b_size[1];
        for (b_j = 0; b_j + 1 <= b_size[1]; b_j++) {
          z1_data[b_j] = muDoubleScalarPower(2.0, b_data[b_j]);
        }

        for (b_j = 0; b_j < 2; b_j++) {
          b_t2_int_bin_size[b_j] = z1_size[b_j];
        }

        iv1[0] = 1;
        iv1[1] = b_t1_int_bin_size[1] - 6;
        if ((b_t2_int_bin_size[0] != 1) || (b_t2_int_bin_size[1] != iv1[1])) {
          emlrtSizeEqCheckNDR2012b(&b_t2_int_bin_size[0], &iv1[0], &emlrtECI,
            &st);
        }

        b_st.site = &r_emlrtRSI;
        loop_ub = b_size[1];
        for (b_j = 0; b_j < loop_ub; b_j++) {
          z_data[b_j] = z1_data[b_j] * ((real_T)t1_int_bin_data[6 + b_j] - 48.0);
        }

        c_st.site = &u_emlrtRSI;
        di = z_data[0];
        for (b_j = 2; b_j <= z1_size[1]; b_j++) {
          di += z_data[b_j - 1];
        }

        acc += (real_T)b_sign * (olddi + di);

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
