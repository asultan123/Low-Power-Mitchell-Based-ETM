/*
 * Comp_E_AMA5_8X8_Multiplier.c
 *
 * Code generation for function 'Comp_E_AMA5_8X8_Multiplier'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "Comp_E_AMA5_8X8_Multiplier.h"
#include "MAFA.h"
#include "bi2de.h"
#include "de2bi.h"
#include "HalfAdder.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo ee_emlrtRSI = { 5,  /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 6,  /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo ge_emlrtRSI = { 17, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo he_emlrtRSI = { 18, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo ie_emlrtRSI = { 19, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo je_emlrtRSI = { 21, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo ke_emlrtRSI = { 22, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo le_emlrtRSI = { 23, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo me_emlrtRSI = { 24, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo ne_emlrtRSI = { 25, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo oe_emlrtRSI = { 26, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo pe_emlrtRSI = { 31, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo qe_emlrtRSI = { 36, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo re_emlrtRSI = { 40, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo se_emlrtRSI = { 46, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo te_emlrtRSI = { 47, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo ue_emlrtRSI = { 48, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo ve_emlrtRSI = { 49, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo we_emlrtRSI = { 52, /* lineNo */
  "Comp_E_AMA5_8X8_Multiplier",        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Comp_E_AMA5_8X8_Multiplier.m"/* pathName */
};

static emlrtRSInfo xe_emlrtRSI = { 4,  /* lineNo */
  "Approx4to3_AMA5",                   /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Approx4to3_AMA5.m"/* pathName */
};

static emlrtRSInfo ye_emlrtRSI = { 5,  /* lineNo */
  "Approx4to3_AMA5",                   /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Approx4to3_AMA5.m"/* pathName */
};

static emlrtRSInfo af_emlrtRSI = { 5,  /* lineNo */
  "Approx5to3_AMA5",                   /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Approx5to3_AMA5.m"/* pathName */
};

static emlrtRSInfo bf_emlrtRSI = { 5,  /* lineNo */
  "Approx6to3_AMA5",                   /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Approx6to3_AMA5.m"/* pathName */
};

static emlrtRSInfo cf_emlrtRSI = { 4,  /* lineNo */
  "Approx8to4_AMA5",                   /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Approx8to4_AMA5.m"/* pathName */
};

static emlrtRSInfo df_emlrtRSI = { 11, /* lineNo */
  "Approx8to4_AMA5",                   /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Approx8to4_AMA5.m"/* pathName */
};

static emlrtRSInfo ef_emlrtRSI = { 4,  /* lineNo */
  "Exact7to3",                         /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Exact7to3.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 5,  /* lineNo */
  "Exact7to3",                         /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Exact7to3.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 6,  /* lineNo */
  "Exact7to3",                         /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Exact7to3.m"/* pathName */
};

static emlrtRSInfo hf_emlrtRSI = { 10, /* lineNo */
  "Exact6to3",                         /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Exact6to3.m"/* pathName */
};

static emlrtRSInfo if_emlrtRSI = { 11, /* lineNo */
  "Exact6to3",                         /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Exact6to3.m"/* pathName */
};

static emlrtRSInfo jf_emlrtRSI = { 10, /* lineNo */
  "Exact5to3",                         /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Exact5to3.m"/* pathName */
};

static emlrtRSInfo kf_emlrtRSI = { 11, /* lineNo */
  "Exact5to3",                         /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Exact5to3.m"/* pathName */
};

static emlrtRSInfo lf_emlrtRSI = { 9,  /* lineNo */
  "Exact4to3",                         /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Exact4to3.m"/* pathName */
};

static emlrtRSInfo mf_emlrtRSI = { 10, /* lineNo */
  "Exact4to3",                         /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\Exact4to3.m"/* pathName */
};

static emlrtRSInfo nf_emlrtRSI = { 2,  /* lineNo */
  "RCA_15bits",                        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\RCA_15bits.m"/* pathName */
};

static emlrtRSInfo of_emlrtRSI = { 3,  /* lineNo */
  "RCA_15bits",                        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\RCA_15bits.m"/* pathName */
};

static emlrtRSInfo pf_emlrtRSI = { 8,  /* lineNo */
  "RCA_15bits",                        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\RCA_15bits.m"/* pathName */
};

static emlrtRSInfo qf_emlrtRSI = { 12, /* lineNo */
  "RCA_15bits",                        /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\RCA_15bits.m"/* pathName */
};

/* Function Definitions */
real_T Comp_E_AMA5_8X8_Multiplier(const emlrtStack *sp, uint8_T A, uint8_T B)
{
  real_T C;
  uint8_T Abin[8];
  uint8_T Bbin[8];
  int32_T i;
  int32_T j;
  int8_T PP[64];
  boolean_T X;
  boolean_T x4;
  boolean_T S3;
  boolean_T y6;
  boolean_T CHF;
  boolean_T x6;
  boolean_T C11;
  boolean_T S11;
  boolean_T C16;
  boolean_T S4;
  boolean_T b_S11;
  boolean_T C12;
  boolean_T x9;
  boolean_T S2;
  boolean_T b_S3;
  boolean_T b_X;
  boolean_T S1;
  boolean_T b_S2;
  boolean_T c_S3;
  boolean_T b_S1;
  boolean_T c_S2;
  boolean_T c_S1;
  boolean_T y14;
  boolean_T w10;
  boolean_T f9;
  boolean_T b_C12;
  boolean_T w13;
  boolean_T f13;
  int8_T input1[15];
  int8_T input2[15];
  real_T pp;
  real_T d;
  real_T b_d;
  real_T b_Abin[16];
  real_T b_Bbin[16];
  int8_T Cin[17];
  int8_T S[16];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /* %%% CEM5 */
  /* 8X8  Exact-approximate compressor AMA5 */
  st.site = &ee_emlrtRSI;
  de2bi(&st, A, Abin);
  st.site = &fe_emlrtRSI;
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

  /* .................................................. */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  st.site = &ge_emlrtRSI;

  /*  approx 4 to 3 compressor based on approximate MA5 */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  b_st.site = &xe_emlrtRSI;
  HalfAdder(&b_st, PP[17], PP[3], &X, &x4);
  b_st.site = &ye_emlrtRSI;
  st.site = &he_emlrtRSI;

  /*  approx 5-3 compressor based on approximate AMA5 */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  b_st.site = &af_emlrtRSI;
  HalfAdder(&b_st, PP[25], PP[32], &S3, &y6);
  st.site = &ie_emlrtRSI;

  /*  approx 6-3 compressor based on approximate AMA5 */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  b_st.site = &bf_emlrtRSI;
  HalfAdder(&b_st, PP[33], PP[12], &CHF, &x6);

  /*  Approximate MA5 */
  /*  Cin is discarded */
  /*  approx 7-3 compressor based on approximate AMA5 */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  st.site = &je_emlrtRSI;

  /*  approx 8-4 compressor based on approximate AMA5 */
  b_st.site = &cf_emlrtRSI;
  HalfAdder(&b_st, PP[14], PP[7], &C11, &S11);

  /*  Approximate MA5 */
  /*  Cin is discarded */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  b_st.site = &df_emlrtRSI;
  C16 = (S11 && (PP[35] != 0));
  S4 = (C16 && C11);
  S3 = ((C16 ^ C11) != 0);
  st.site = &ke_emlrtRSI;

  /*  Exact 7 to 3 compressor based on exact FA */
  b_st.site = &ef_emlrtRSI;
  c_MAFA(&b_st, PP[36], PP[29], PP[22], &C11, &b_S11);
  b_st.site = &ff_emlrtRSI;
  c_MAFA(&b_st, PP[57], PP[50], PP[43], &C12, &CHF);
  b_st.site = &gf_emlrtRSI;
  d_MAFA(&b_st, CHF, b_S11, PP[15], &C16, &x9);

  /*  X=[0 0 0 0 1 1 1 1]; */
  /*  Y=[0 0 1 1 0 0 1 1]; */
  /*  Cin=[0 1 0 1 0 1 0 1]; */
  S2 = ((((C12 ^ C11) != 0) ^ C16) != 0);
  b_S3 = ((C12 && C11) || (C11 && C16) || (C12 && C16));

  /* result=S1+S2*2+S3*4; */
  st.site = &le_emlrtRSI;

  /*  Exact 6 to 3 compressor based on exact FA */
  /*    X1=[0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1]; */
  /*    X2=[0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1]; */
  /*    X3=[0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1]; */
  /*    X4=[0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1]; */
  /*    X5=[0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1]; */
  b_st.site = &hf_emlrtRSI;
  c_MAFA(&b_st, PP[37], PP[30], PP[23], &C11, &b_S11);
  b_st.site = &if_emlrtRSI;
  c_MAFA(&b_st, PP[58], PP[51], PP[44], &b_X, &C16);
  CHF = (C16 && b_S11);
  S1 = ((C16 ^ b_S11) != 0);

  /*  X=[0 0 0 0 1 1 1 1]; */
  /*  Y=[0 0 1 1 0 0 1 1]; */
  /*  Cin=[0 1 0 1 0 1 0 1]; */
  b_S2 = ((((b_X ^ C11) != 0) ^ CHF) != 0);
  c_S3 = ((b_X && C11) || (C11 && CHF) || (b_X && CHF));

  /* result=S1+S2*2+S3*4; */
  st.site = &me_emlrtRSI;

  /*  Exact 5 to 3 compressor based on exact FA */
  /*    X1=[0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1]; */
  /*    X2=[0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1]; */
  /*    X3=[0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1]; */
  /*    X4=[0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1]; */
  /*    X5=[0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1]; */
  b_st.site = &jf_emlrtRSI;
  c_MAFA(&b_st, PP[59], PP[52], PP[45], &C11, &b_X);
  b_st.site = &kf_emlrtRSI;

  /*  X=[0 0 0 0 1 1 1 1]; */
  /*  Y=[0 0 1 1 0 0 1 1]; */
  /*  Cin=[0 1 0 1 0 1 0 1]; */
  b_S1 = ((((b_X ^ (PP[38] != 0)) != 0) ^ (PP[31] != 0)) != 0);
  C12 = ((b_X && (PP[38] != 0)) || ((PP[38] != 0) && (PP[31] != 0)) || (b_X &&
          (PP[31] != 0)));
  b_S11 = (C12 && C11);
  c_S2 = ((C12 ^ C11) != 0);

  /* result=S1+S2*2+S3*4; */
  st.site = &ne_emlrtRSI;

  /*  Exact 4 to 3 compressor based on exact FA */
  /*   X1=[0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1]; */
  /*   X2=[0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1]; */
  /*   X3=[0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1]; */
  /*   X4=[0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1]; */
  b_st.site = &lf_emlrtRSI;
  c_MAFA(&b_st, PP[60], PP[53], PP[46], &C11, &b_X);
  b_st.site = &mf_emlrtRSI;
  C12 = (b_X && (PP[39] != 0));
  c_S1 = ((b_X ^ (PP[39] != 0)) != 0);
  C16 = ((C12 ^ C11) != 0);

  /* result=S1+S2*2+S3*4; */
  st.site = &oe_emlrtRSI;
  c_MAFA(&st, PP[61], PP[54], PP[47], &y14, &CHF);

  /* ------------------------------------------------- */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  /*  Approximate MA5 */
  /*  Cin is discarded */
  st.site = &pe_emlrtRSI;
  d_MAFA(&st, x9, (S11 ^ (PP[35] != 0)) != 0, PP[48], &w10, &f9);

  /*  X=[0 0 0 0 1 1 1 1]; */
  /*  Y=[0 0 1 1 0 0 1 1]; */
  /*  Cin=[0 1 0 1 0 1 0 1]; */
  /*  Exact 4 to 3 compressor based on exact FA */
  /*   X1=[0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1]; */
  /*   X2=[0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1]; */
  /*   X3=[0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1]; */
  /*   X4=[0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1]; */
  /*  X=[0 0 0 0 1 1 1 1]; */
  /*  Y=[0 0 1 1 0 0 1 1]; */
  /*  Cin=[0 1 0 1 0 1 0 1]; */
  S11 = ((((b_S1 ^ b_S2) != 0) ^ b_S3) != 0);
  x9 = ((b_S1 && b_S2) || (b_S2 && b_S3) || (b_S1 && b_S3));
  b_C12 = (S11 && S4);
  b_S3 = (b_C12 && x9);

  /* result=S1+S2*2+S3*4; */
  /*  X=[0 0 0 0 1 1 1 1]; */
  /*  Y=[0 0 1 1 0 0 1 1]; */
  /*  Cin=[0 1 0 1 0 1 0 1]; */
  w13 = ((c_S1 && c_S2) || (c_S2 && c_S3) || (c_S1 && c_S3));

  /*  X=[0 0 0 0 1 1 1 1]; */
  /*  Y=[0 0 1 1 0 0 1 1]; */
  /*  Cin=[0 1 0 1 0 1 0 1]; */
  f13 = ((((CHF ^ C16) != 0) ^ b_S11) != 0);
  C16 = ((CHF && C16) || (C16 && b_S11) || (CHF && b_S11));
  st.site = &qe_emlrtRSI;

  /*  Exact 4 to 3 compressor based on exact FA */
  /*   X1=[0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1]; */
  /*   X2=[0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1]; */
  /*   X3=[0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1]; */
  /*   X4=[0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1]; */
  b_st.site = &lf_emlrtRSI;
  d_MAFA(&b_st, y14, C12 && C11, PP[62], &CHF, &b_X);
  b_st.site = &mf_emlrtRSI;
  C12 = (b_X && (PP[55] != 0));
  b_S1 = ((b_X ^ (PP[55] != 0)) != 0);
  b_S2 = ((C12 ^ CHF) != 0);

  /* result=S1+S2*2+S3*4; */
  /* ........................................... */
  /*  X=[0 0 0 0 1 1 1 1]; */
  /*  Y=[0 0 1 1 0 0 1 1]; */
  /*  Cin=[0 1 0 1 0 1 0 1]; */
  st.site = &re_emlrtRSI;
  b_st.site = &od_emlrtRSI;
  b_st.site = &pd_emlrtRSI;

  /* ................................................ */
  input1[0] = PP[8];
  input1[1] = PP[9];
  input1[2] = (int8_T)x4;
  input1[3] = PP[11];
  input1[4] = (int8_T)y6;
  input1[5] = PP[19];
  input1[6] = PP[27];
  input1[7] = (int8_T)f9;
  input1[8] = (int8_T)((((S1 ^ S2) != 0) ^ S3) != 0);
  input1[9] = (int8_T)((S11 ^ S4) != 0);
  input1[10] = (int8_T)((((c_S1 ^ c_S2) != 0) ^ c_S3) != 0);
  input1[11] = (int8_T)((((f13 ^ w13) != 0) ^ b_S3) != 0);
  input1[12] = (int8_T)((b_S1 ^ C16) != 0);
  input1[13] = (int8_T)(((PP[63] != 0) ^ b_S2) != 0);
  input1[14] = (int8_T)(C12 && CHF);
  input2[0] = PP[1];
  input2[1] = 0;
  input2[2] = PP[16];
  input2[3] = (int8_T)((X ^ (PP[24] != 0)) != 0);
  input2[4] = 0;
  input2[5] = (int8_T)x6;
  input2[6] = PP[20];
  input2[7] = PP[28];
  input2[8] = (int8_T)w10;
  input2[9] = (int8_T)((S1 && S2) || (S2 && S3) || (S1 && S3));
  input2[10] = (int8_T)((b_C12 ^ x9) != 0);
  input2[11] = 0;
  input2[12] = (int8_T)((f13 && w13) || (w13 && b_S3) || (f13 && b_S3));
  input2[13] = (int8_T)(b_S1 && C16);
  input2[14] = (int8_T)((PP[63] != 0) && b_S2);
  st.site = &se_emlrtRSI;
  pp = 1.0;
  d = 0.0;
  for (j = 0; j < 15; j++) {
    b_st.site = &de_emlrtRSI;
    UPDATE_DECIMAL(&b_st, &d, pp, input1[j]);
    pp *= 2.0;
  }

  st.site = &te_emlrtRSI;
  pp = 1.0;
  b_d = 0.0;
  for (j = 0; j < 15; j++) {
    b_st.site = &de_emlrtRSI;
    UPDATE_DECIMAL(&b_st, &b_d, pp, input2[j]);
    pp *= 2.0;
  }

  st.site = &ue_emlrtRSI;
  b_st.site = &nf_emlrtRSI;
  b_de2bi(&b_st, d, b_Abin);

  /*  make the size one bit larger to get Cout */
  b_st.site = &of_emlrtRSI;
  b_de2bi(&b_st, b_d, b_Bbin);

  /* (R,C) */
  for (i = 0; i < 17; i++) {
    Cin[i] = 0;
  }

  i = 0;
  while (i < 16) {
    b_st.site = &pf_emlrtRSI;
    c_MAFA(&b_st, b_Abin[i], b_Bbin[i], Cin[i], &C16, &CHF);
    Cin[i + 1] = (int8_T)C16;
    S[i] = (int8_T)CHF;
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  b_Bbin[0] = S[0];
  b_Bbin[1] = S[1];
  b_Bbin[2] = S[2];
  b_Bbin[3] = S[3];
  b_Bbin[4] = S[4];
  b_Bbin[5] = S[5];
  b_Bbin[6] = S[6];
  b_Bbin[7] = S[7];
  b_Bbin[8] = S[8];
  b_Bbin[9] = S[9];
  b_Bbin[10] = S[10];
  b_Bbin[11] = S[11];
  b_Bbin[12] = S[12];
  b_Bbin[13] = S[13];
  b_Bbin[14] = S[14];
  b_Bbin[15] = S[15];
  b_st.site = &qf_emlrtRSI;
  pp = 1.0;
  d = 0.0;
  for (j = 0; j < 16; j++) {
    c_st.site = &de_emlrtRSI;
    UPDATE_DECIMAL(&c_st, &d, pp, b_Bbin[j]);
    pp *= 2.0;
  }

  st.site = &ve_emlrtRSI;
  b_de2bi(&st, d, b_Abin);
  b_Bbin[0] = PP[0];
  memcpy(&b_Bbin[1], &b_Abin[0], 15U * sizeof(real_T));
  st.site = &we_emlrtRSI;
  pp = 1.0;
  C = 0.0;
  for (j = 0; j < 16; j++) {
    b_st.site = &de_emlrtRSI;
    UPDATE_DECIMAL(&b_st, &C, pp, b_Bbin[j]);
    pp *= 2.0;
  }

  return C;
}

/* End of code generation (Comp_E_AMA5_8X8_Multiplier.c) */
