/*
 * AMA4ArrayMultiplier_8X8.c
 *
 * Code generation for function 'AMA4ArrayMultiplier_8X8'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "AMA4ArrayMultiplier_8X8.h"
#include "bi2de.h"
#include "MAFA.h"
#include "AMA4FA.h"
#include "HalfAdder.h"
#include "de2bi.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo cb_emlrtRSI = { 7,  /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 8,  /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 16, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 17, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 18, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 19, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 20, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 21, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 22, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 23, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 25, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 26, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 27, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 28, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 29, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 30, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 31, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 32, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 34, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 35, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 36, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 37, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 38, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 39, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 40, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 41, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 44, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 45, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 46, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 47, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 48, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 49, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 50, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 51, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 53, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 54, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 55, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 56, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 57, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 58, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 59, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 60, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 62, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 63, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 64, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 65, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 66, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo yc_emlrtRSI = { 67, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 68, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 69, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 71, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 72, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 73, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo fd_emlrtRSI = { 74, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo gd_emlrtRSI = { 75, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo hd_emlrtRSI = { 76, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo id_emlrtRSI = { 77, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo jd_emlrtRSI = { 78, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo kd_emlrtRSI = { 81, /* lineNo */
  "AMA4ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA4ArrayMultiplier_8X8.m"/* pathName */
};

/* Function Definitions */
real_T AMA4ArrayMultiplier_8X8(const emlrtStack *sp, uint8_T A, uint8_T B)
{
  real_T C;
  uint8_T Abin[8];
  uint8_T Bbin[8];
  int32_T i;
  int8_T PP[64];
  boolean_T Cin;
  boolean_T S1;
  int32_T j;
  boolean_T Xbar;
  boolean_T S22;
  real_T pp;
  real_T C25;
  boolean_T S25;
  boolean_T S26;
  boolean_T S27;
  boolean_T C29;
  boolean_T S28;
  boolean_T S32;
  boolean_T S33;
  boolean_T C39;
  boolean_T S42;
  real_T C45;
  boolean_T C49;
  boolean_T S52;
  boolean_T S62;
  boolean_T S72;
  boolean_T S77;
  boolean_T C79;
  boolean_T S78;
  int8_T output[16];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* %%%EM4 */
  /*  Approximate 8X8 Array Multiplier based on AMA4 */
  /*  C = A X B */
  /* convert input from decimal to 4 bits binary */
  st.site = &cb_emlrtRSI;
  de2bi(&st, A, Abin);
  st.site = &db_emlrtRSI;
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

  st.site = &eb_emlrtRSI;
  HalfAdder(&st, PP[1], PP[8], &Cin, &S1);
  st.site = &fb_emlrtRSI;

  /*  Approximate MA4 */
  Xbar = !(PP[16] != 0);
  S22 = ((Xbar && (!(PP[9] != 0)) && Cin) || ((Xbar && (PP[9] != 0) && Cin) ||
          ((PP[16] != 0) && (PP[9] != 0) && Cin)));
  st.site = &gb_emlrtRSI;
  AMA4FA(&st, PP[24], PP[17], PP[16], &pp, &Cin);
  st.site = &hb_emlrtRSI;
  AMA4FA(&st, PP[32], PP[25], pp, &C25, &Xbar);
  st.site = &ib_emlrtRSI;
  AMA4FA(&st, PP[40], PP[33], C25, &pp, &S25);
  st.site = &jb_emlrtRSI;
  AMA4FA(&st, PP[48], PP[41], pp, &C25, &S26);
  st.site = &kb_emlrtRSI;
  AMA4FA(&st, PP[56], PP[49], C25, &pp, &S27);
  st.site = &lb_emlrtRSI;
  HalfAdder(&st, PP[57], pp, &C29, &S28);

  /*  first row of FAs */
  st.site = &mb_emlrtRSI;
  st.site = &nb_emlrtRSI;
  b_AMA4FA(&st, PP[10], Cin, (PP[2] != 0) && S22, &pp, &S32);
  st.site = &ob_emlrtRSI;
  c_AMA4FA(&st, PP[18], Xbar, pp, &C25, &S33);
  st.site = &pb_emlrtRSI;
  c_AMA4FA(&st, PP[26], S25, C25, &pp, &Xbar);
  st.site = &qb_emlrtRSI;
  c_AMA4FA(&st, PP[34], S26, pp, &C25, &S25);
  st.site = &rb_emlrtRSI;
  c_AMA4FA(&st, PP[42], S27, C25, &pp, &S26);
  st.site = &sb_emlrtRSI;
  MAFA(&st, PP[50], S28, pp, &Cin, &S27);
  st.site = &tb_emlrtRSI;
  b_MAFA(&st, PP[58], C29, Cin, &C39, &S28);

  /*  second row of FAS */
  st.site = &ub_emlrtRSI;
  st.site = &vb_emlrtRSI;
  b_AMA4FA(&st, PP[11], S33, (PP[3] != 0) && S32, &pp, &S42);
  st.site = &wb_emlrtRSI;
  c_AMA4FA(&st, PP[19], Xbar, pp, &C25, &C29);
  st.site = &xb_emlrtRSI;
  c_AMA4FA(&st, PP[27], S25, C25, &C45, &S33);
  st.site = &yb_emlrtRSI;
  c_AMA4FA(&st, PP[35], S26, C45, &pp, &S25);
  st.site = &ac_emlrtRSI;
  MAFA(&st, PP[43], S27, pp, &Cin, &S26);
  st.site = &bc_emlrtRSI;
  b_MAFA(&st, PP[51], S28, Cin, &Xbar, &S27);
  st.site = &cc_emlrtRSI;
  b_MAFA(&st, PP[59], C39, Xbar, &C49, &S28);

  /*  Third row of FAS */
  st.site = &dc_emlrtRSI;
  st.site = &ec_emlrtRSI;
  b_AMA4FA(&st, PP[12], C29, (PP[4] != 0) && S42, &pp, &S52);
  st.site = &fc_emlrtRSI;
  c_AMA4FA(&st, PP[20], S33, pp, &C25, &C29);
  st.site = &gc_emlrtRSI;
  c_AMA4FA(&st, PP[28], S25, C25, &pp, &S33);
  st.site = &hc_emlrtRSI;
  MAFA(&st, PP[36], S26, pp, &Cin, &S25);
  st.site = &ic_emlrtRSI;
  b_MAFA(&st, PP[44], S27, Cin, &Xbar, &S26);
  st.site = &jc_emlrtRSI;
  b_MAFA(&st, PP[52], S28, Xbar, &Cin, &S27);
  st.site = &kc_emlrtRSI;
  b_MAFA(&st, PP[60], C49, Cin, &C39, &S28);

  /*  Fourth row of FA */
  st.site = &lc_emlrtRSI;
  st.site = &mc_emlrtRSI;
  b_AMA4FA(&st, PP[13], C29, (PP[5] != 0) && S52, &pp, &S62);
  st.site = &nc_emlrtRSI;
  c_AMA4FA(&st, PP[21], S33, pp, &C25, &C29);
  st.site = &oc_emlrtRSI;
  MAFA(&st, PP[29], S25, C25, &Cin, &S33);
  st.site = &pc_emlrtRSI;
  b_MAFA(&st, PP[37], S26, Cin, &Xbar, &S25);
  st.site = &qc_emlrtRSI;
  b_MAFA(&st, PP[45], S27, Xbar, &Cin, &S26);
  st.site = &rc_emlrtRSI;
  b_MAFA(&st, PP[53], S28, Cin, &Xbar, &S27);
  st.site = &sc_emlrtRSI;
  b_MAFA(&st, PP[61], C39, Xbar, &C49, &S28);

  /*  5th row of FA */
  st.site = &tc_emlrtRSI;
  st.site = &uc_emlrtRSI;
  b_AMA4FA(&st, PP[14], C29, (PP[6] != 0) && S62, &pp, &S72);
  st.site = &vc_emlrtRSI;
  MAFA(&st, PP[22], S33, pp, &Cin, &C29);
  st.site = &wc_emlrtRSI;
  b_MAFA(&st, PP[30], S25, Cin, &Xbar, &C39);
  st.site = &xc_emlrtRSI;
  b_MAFA(&st, PP[38], S26, Xbar, &Cin, &S25);
  st.site = &yc_emlrtRSI;
  b_MAFA(&st, PP[46], S27, Cin, &Xbar, &S26);
  st.site = &ad_emlrtRSI;
  b_MAFA(&st, PP[54], S28, Xbar, &Cin, &S77);
  st.site = &bd_emlrtRSI;
  b_MAFA(&st, PP[62], C49, Cin, &C79, &S78);

  /*  siXth row of FA */
  st.site = &cd_emlrtRSI;
  st.site = &dd_emlrtRSI;
  b_MAFA(&st, PP[15], C29, (PP[7] != 0) && S72, &Cin, &C49);
  st.site = &ed_emlrtRSI;
  b_MAFA(&st, PP[23], C39, Cin, &Xbar, &S33);
  st.site = &fd_emlrtRSI;
  b_MAFA(&st, PP[31], S25, Xbar, &Cin, &C29);
  st.site = &gd_emlrtRSI;
  b_MAFA(&st, PP[39], S26, Cin, &Xbar, &S28);
  st.site = &hd_emlrtRSI;
  b_MAFA(&st, PP[47], S77, Xbar, &Cin, &S27);
  st.site = &id_emlrtRSI;
  b_MAFA(&st, PP[55], S78, Cin, &S25, &S26);
  st.site = &jd_emlrtRSI;
  b_MAFA(&st, PP[63], C79, S25, &Cin, &Xbar);

  /*  7th row of FA */
  /* ************************************% */
  output[0] = PP[0];
  output[1] = (int8_T)S1;
  output[2] = (int8_T)(((PP[2] != 0) ^ S22) != 0);
  output[3] = (int8_T)(((PP[3] != 0) ^ S32) != 0);
  output[4] = (int8_T)(((PP[4] != 0) ^ S42) != 0);
  output[5] = (int8_T)(((PP[5] != 0) ^ S52) != 0);
  output[6] = (int8_T)(((PP[6] != 0) ^ S62) != 0);
  output[7] = (int8_T)(((PP[7] != 0) ^ S72) != 0);
  output[8] = (int8_T)C49;
  output[9] = (int8_T)S33;
  output[10] = (int8_T)C29;
  output[11] = (int8_T)S28;
  output[12] = (int8_T)S27;
  output[13] = (int8_T)S26;
  output[14] = (int8_T)Xbar;
  output[15] = (int8_T)Cin;
  st.site = &kd_emlrtRSI;
  pp = 1.0;
  C = 0.0;
  for (j = 0; j < 16; j++) {
    b_st.site = &de_emlrtRSI;
    UPDATE_DECIMAL(&b_st, &C, pp, output[j]);
    pp *= 2.0;
  }

  return C;
}

/* End of code generation (AMA4ArrayMultiplier_8X8.c) */
