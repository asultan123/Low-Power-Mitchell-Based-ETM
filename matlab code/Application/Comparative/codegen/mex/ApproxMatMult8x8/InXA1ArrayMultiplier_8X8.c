/*
 * InXA1ArrayMultiplier_8X8.c
 *
 * Code generation for function 'InXA1ArrayMultiplier_8X8'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "InXA1ArrayMultiplier_8X8.h"
#include "bi2de.h"
#include "MAFA.h"
#include "InXA1FA.h"
#include "HalfAdder.h"
#include "de2bi.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo qj_emlrtRSI = { 6,  /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo rj_emlrtRSI = { 7,  /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo sj_emlrtRSI = { 15, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo tj_emlrtRSI = { 16, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo uj_emlrtRSI = { 17, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo vj_emlrtRSI = { 18, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo wj_emlrtRSI = { 19, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo xj_emlrtRSI = { 20, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo yj_emlrtRSI = { 21, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ak_emlrtRSI = { 22, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo bk_emlrtRSI = { 24, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ck_emlrtRSI = { 25, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo dk_emlrtRSI = { 26, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ek_emlrtRSI = { 27, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo fk_emlrtRSI = { 28, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo gk_emlrtRSI = { 29, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo hk_emlrtRSI = { 30, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ik_emlrtRSI = { 31, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo jk_emlrtRSI = { 33, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo kk_emlrtRSI = { 34, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo lk_emlrtRSI = { 35, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo mk_emlrtRSI = { 36, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo nk_emlrtRSI = { 37, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ok_emlrtRSI = { 38, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo pk_emlrtRSI = { 39, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo qk_emlrtRSI = { 40, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo rk_emlrtRSI = { 43, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo sk_emlrtRSI = { 44, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo tk_emlrtRSI = { 45, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo uk_emlrtRSI = { 46, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo vk_emlrtRSI = { 47, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo wk_emlrtRSI = { 48, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo xk_emlrtRSI = { 49, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo yk_emlrtRSI = { 50, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo al_emlrtRSI = { 52, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo bl_emlrtRSI = { 53, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo cl_emlrtRSI = { 54, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo dl_emlrtRSI = { 55, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo el_emlrtRSI = { 56, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo fl_emlrtRSI = { 57, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo gl_emlrtRSI = { 58, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo hl_emlrtRSI = { 59, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo il_emlrtRSI = { 61, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo jl_emlrtRSI = { 62, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo kl_emlrtRSI = { 63, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ll_emlrtRSI = { 64, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ml_emlrtRSI = { 65, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo nl_emlrtRSI = { 66, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ol_emlrtRSI = { 67, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo pl_emlrtRSI = { 68, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ql_emlrtRSI = { 70, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo rl_emlrtRSI = { 71, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo sl_emlrtRSI = { 72, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo tl_emlrtRSI = { 73, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ul_emlrtRSI = { 74, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo vl_emlrtRSI = { 75, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo wl_emlrtRSI = { 76, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo xl_emlrtRSI = { 77, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo yl_emlrtRSI = { 80, /* lineNo */
  "InXA1ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA1ArrayMultiplier_8X8.m"/* pathName */
};

/* Function Definitions */
real_T InXA1ArrayMultiplier_8X8(const emlrtStack *sp, uint8_T A, uint8_T B)
{
  real_T C;
  uint8_T Abin[8];
  uint8_T Bbin[8];
  int32_T i;
  int8_T PP[64];
  boolean_T C22;
  boolean_T S1;
  boolean_T Cin;
  boolean_T S22;
  int32_T j;
  boolean_T C32;
  boolean_T S32;
  boolean_T S37;
  boolean_T C39;
  boolean_T S38;
  boolean_T C42;
  boolean_T S42;
  boolean_T S46;
  boolean_T S47;
  boolean_T C49;
  boolean_T C52;
  boolean_T S52;
  boolean_T C59;
  boolean_T S62;
  boolean_T S64;
  boolean_T S65;
  boolean_T S66;
  boolean_T C69;
  boolean_T S68;
  int8_T output[16];
  real_T pp;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* %%%    EIn1 */
  /*  Approximate 8X8 Array Multiplier based on InXA1 */
  /*  C = A X B */
  /* convert input from decimal to 4 bits binary */
  st.site = &qj_emlrtRSI;
  de2bi(&st, A, Abin);
  st.site = &rj_emlrtRSI;
  de2bi(&st, B, Bbin);

  /* (R,C) */
  i = 0;
  while (i < 8) {
    /*  row   generate partial products   */
    j = 0;
    while (j < 8) {
      /*  column */
      PP[i + (j << 3)] = (int8_T)((Abin[j] != 0) && (Bbin[i] != 0));

      /*  inner loop   PP(R,C) */
      j++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(sp);
      }
    }

    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  st.site = &sj_emlrtRSI;
  HalfAdder(&st, PP[1], PP[8], &C22, &S1);
  st.site = &tj_emlrtRSI;
  InXA1FA(&st, PP[16], PP[9], C22, &Cin, &S22);
  st.site = &uj_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &vj_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &wj_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &xj_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &yj_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &ak_emlrtRSI;

  /*  first row of FAs */
  st.site = &bk_emlrtRSI;
  C32 = ((PP[2] != 0) && S22);
  st.site = &ck_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  S32 = (((((PP[10] != 0) ^ (((((PP[24] != 0) ^ (PP[17] != 0)) != 0) ^ Cin) != 0))
           != 0) ^ C32) != 0);
  st.site = &dk_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &ek_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &fk_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &gk_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &hk_emlrtRSI;
  b_MAFA(&st, PP[50], ((PP[57] != 0) ^ Cin) != 0, C32, &C22, &S37);
  st.site = &ik_emlrtRSI;
  b_MAFA(&st, PP[58], (PP[57] != 0) && Cin, C22, &C39, &S38);

  /*  second row of FAS */
  st.site = &jk_emlrtRSI;
  C42 = ((PP[3] != 0) && S32);
  st.site = &kk_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  S42 = (((((PP[11] != 0) ^ (((((PP[18] != 0) ^ (((((PP[32] != 0) ^ (PP[25] != 0))
    != 0) ^ Cin) != 0)) != 0) ^ C32) != 0)) != 0) ^ C42) != 0);
  st.site = &lk_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &mk_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &nk_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &ok_emlrtRSI;
  b_MAFA(&st, PP[43], S37, C42, &C22, &S46);
  st.site = &pk_emlrtRSI;
  b_MAFA(&st, PP[51], S38, C22, &S37, &S47);
  st.site = &qk_emlrtRSI;
  b_MAFA(&st, PP[59], C39, S37, &C49, &S38);

  /*  Third row of FAS */
  st.site = &rk_emlrtRSI;
  C52 = ((PP[4] != 0) && S42);
  st.site = &sk_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  S52 = (((((PP[12] != 0) ^ (((((PP[19] != 0) ^ (((((PP[26] != 0) ^ (((((PP[40]
    != 0) ^ (PP[33] != 0)) != 0) ^ Cin) != 0)) != 0) ^ C32) != 0)) != 0) ^ C42)
             != 0)) != 0) ^ C52) != 0);
  st.site = &tk_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &uk_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &vk_emlrtRSI;
  b_MAFA(&st, PP[36], S46, C52, &C22, &C39);
  st.site = &wk_emlrtRSI;
  b_MAFA(&st, PP[44], S47, C22, &S37, &S46);
  st.site = &xk_emlrtRSI;
  b_MAFA(&st, PP[52], S38, S37, &C22, &S47);
  st.site = &yk_emlrtRSI;
  b_MAFA(&st, PP[60], C49, C22, &C59, &S38);

  /*  Fourth row of FA */
  st.site = &al_emlrtRSI;
  C49 = ((PP[5] != 0) && S52);
  st.site = &bl_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  S62 = (((((PP[13] != 0) ^ (((((PP[20] != 0) ^ (((((PP[27] != 0) ^ (((((PP[34]
    != 0) ^ (((((PP[48] != 0) ^ (PP[41] != 0)) != 0) ^ Cin) != 0)) != 0) ^ C32)
    != 0)) != 0) ^ C42) != 0)) != 0) ^ C52) != 0)) != 0) ^ C49) != 0);
  st.site = &cl_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  st.site = &dl_emlrtRSI;
  b_MAFA(&st, PP[29], C39, C49, &C22, &S64);
  st.site = &el_emlrtRSI;
  b_MAFA(&st, PP[37], S46, C22, &S37, &S65);
  st.site = &fl_emlrtRSI;
  b_MAFA(&st, PP[45], S47, S37, &C22, &S66);
  st.site = &gl_emlrtRSI;
  b_MAFA(&st, PP[53], S38, C22, &S37, &S47);
  st.site = &hl_emlrtRSI;
  b_MAFA(&st, PP[61], C59, S37, &C69, &S68);

  /*  5th row of FA */
  st.site = &il_emlrtRSI;
  S37 = ((PP[6] != 0) && S62);
  st.site = &jl_emlrtRSI;

  /*  InExact Adder 1 InXA1 */
  C42 = (((((PP[14] != 0) ^ (((((PP[21] != 0) ^ (((((PP[28] != 0) ^ (((((PP[35]
    != 0) ^ (((((PP[42] != 0) ^ (((((PP[56] != 0) ^ (PP[49] != 0)) != 0) ^ Cin)
    != 0)) != 0) ^ C32) != 0)) != 0) ^ C42) != 0)) != 0) ^ C52) != 0)) != 0) ^
              C49) != 0)) != 0) ^ S37) != 0);
  st.site = &kl_emlrtRSI;
  b_MAFA(&st, PP[22], S64, S37, &C22, &S38);
  st.site = &ll_emlrtRSI;
  b_MAFA(&st, PP[30], S65, C22, &S37, &C39);
  st.site = &ml_emlrtRSI;
  b_MAFA(&st, PP[38], S66, S37, &C22, &S46);
  st.site = &nl_emlrtRSI;
  b_MAFA(&st, PP[46], S47, C22, &S37, &S64);
  st.site = &ol_emlrtRSI;
  b_MAFA(&st, PP[54], S68, S37, &C22, &S65);
  st.site = &pl_emlrtRSI;
  b_MAFA(&st, PP[62], C69, C22, &C52, &S66);

  /*  siXth row of FA */
  st.site = &ql_emlrtRSI;
  st.site = &rl_emlrtRSI;
  b_MAFA(&st, PP[15], S38, (PP[7] != 0) && C42, &C22, &S68);
  st.site = &sl_emlrtRSI;
  b_MAFA(&st, PP[23], C39, C22, &S37, &C59);
  st.site = &tl_emlrtRSI;
  b_MAFA(&st, PP[31], S46, S37, &C22, &C49);
  st.site = &ul_emlrtRSI;
  b_MAFA(&st, PP[39], S64, C22, &S37, &S47);
  st.site = &vl_emlrtRSI;
  b_MAFA(&st, PP[47], S65, S37, &C22, &S46);
  st.site = &wl_emlrtRSI;
  b_MAFA(&st, PP[55], S66, C22, &S38, &C39);
  st.site = &xl_emlrtRSI;
  b_MAFA(&st, PP[63], C52, S38, &C22, &S37);

  /*  7th row of FA */
  /* ************************************% */
  output[0] = PP[0];
  output[1] = (int8_T)S1;
  output[2] = (int8_T)(((PP[2] != 0) ^ S22) != 0);
  output[3] = (int8_T)(((PP[3] != 0) ^ S32) != 0);
  output[4] = (int8_T)(((PP[4] != 0) ^ S42) != 0);
  output[5] = (int8_T)(((PP[5] != 0) ^ S52) != 0);
  output[6] = (int8_T)(((PP[6] != 0) ^ S62) != 0);
  output[7] = (int8_T)(((PP[7] != 0) ^ C42) != 0);
  output[8] = (int8_T)S68;
  output[9] = (int8_T)C59;
  output[10] = (int8_T)C49;
  output[11] = (int8_T)S47;
  output[12] = (int8_T)S46;
  output[13] = (int8_T)C39;
  output[14] = (int8_T)S37;
  output[15] = (int8_T)C22;
  st.site = &yl_emlrtRSI;
  pp = 1.0;
  C = 0.0;
  for (j = 0; j < 16; j++) {
    b_st.site = &de_emlrtRSI;
    UPDATE_DECIMAL(&b_st, &C, pp, output[j]);
    pp *= 2.0;
  }

  return C;
}

/* End of code generation (InXA1ArrayMultiplier_8X8.c) */
