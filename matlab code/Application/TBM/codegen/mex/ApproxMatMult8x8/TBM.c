/*
 * TBM.c
 *
 * Code generation for function 'TBM'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "TBM.h"
#include "dec2bin.h"
#include "bi2de.h"
#include "fliplr.h"
#include "sum.h"
#include "toLogicalCheck.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo w_emlrtRSI = { 6,   /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 7,   /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 17,  /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 18, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 19, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo cb_emlrtRSI = { 23, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo db_emlrtRSI = { 24, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo eb_emlrtRSI = { 25, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 26, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 30, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 31, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 32, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 33, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 38, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 39, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 40, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 41, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 42, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 47, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 48, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 49, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 50, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 51, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo ub_emlrtRSI = { 52, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo vb_emlrtRSI = { 53, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo wb_emlrtRSI = { 57, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo xb_emlrtRSI = { 58, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo yb_emlrtRSI = { 59, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo ac_emlrtRSI = { 60, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo bc_emlrtRSI = { 61, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo cc_emlrtRSI = { 62, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo dc_emlrtRSI = { 63, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo ec_emlrtRSI = { 64, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo fc_emlrtRSI = { 68, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo gc_emlrtRSI = { 69, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo hc_emlrtRSI = { 70, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo ic_emlrtRSI = { 71, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo jc_emlrtRSI = { 72, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo kc_emlrtRSI = { 73, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo lc_emlrtRSI = { 74, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo mc_emlrtRSI = { 75, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo nc_emlrtRSI = { 81, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo oc_emlrtRSI = { 82, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo pc_emlrtRSI = { 83, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo qc_emlrtRSI = { 84, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo rc_emlrtRSI = { 85, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo sc_emlrtRSI = { 86, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo tc_emlrtRSI = { 87, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo uc_emlrtRSI = { 88, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo vc_emlrtRSI = { 89, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo wc_emlrtRSI = { 93, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

static emlrtRSInfo xc_emlrtRSI = { 99, /* lineNo */
  "TBM",                               /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\TBM\\TBM.m"/* pathName */
};

/* Function Definitions */
uint16_T TBM(const emlrtStack *sp, uint8_T x, uint8_T y)
{
  char_T x_bin_temp[8];
  char_T y_bin_temp[8];
  int32_T i;
  int16_T y_bin[8];
  int16_T x_bin[8];
  int32_T j;
  int8_T pp[99];
  real_T b_pp;
  real_T pp_dec[9];
  real_T b[11];
  uint16_T u0;
  real_T d;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &w_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  b_dec2bin(x, x_bin_temp);
  st.site = &x_emlrtRSI;
  b_dec2bin(y, y_bin_temp);
  i = 0;
  while (i < 8) {
    x_bin[i] = (int16_T)((uint8_T)x_bin_temp[i] - 48);
    y_bin[i] = (int16_T)((uint8_T)y_bin_temp[i] - 48);
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  st.site = &y_emlrtRSI;
  toLogicalCheck(&st, y_bin[7]);
  st.site = &y_emlrtRSI;
  toLogicalCheck(&st, x_bin[0]);
  st.site = &ab_emlrtRSI;
  toLogicalCheck(&st, y_bin[7]);
  st.site = &ab_emlrtRSI;
  toLogicalCheck(&st, x_bin[1]);
  st.site = &bb_emlrtRSI;
  toLogicalCheck(&st, y_bin[7]);
  st.site = &bb_emlrtRSI;
  toLogicalCheck(&st, x_bin[2]);
  st.site = &cb_emlrtRSI;
  toLogicalCheck(&st, y_bin[6]);
  st.site = &cb_emlrtRSI;
  toLogicalCheck(&st, x_bin[0]);
  st.site = &db_emlrtRSI;
  toLogicalCheck(&st, y_bin[6]);
  st.site = &db_emlrtRSI;
  toLogicalCheck(&st, x_bin[1]);
  st.site = &eb_emlrtRSI;
  toLogicalCheck(&st, y_bin[6]);
  st.site = &eb_emlrtRSI;
  toLogicalCheck(&st, x_bin[2]);
  st.site = &fb_emlrtRSI;
  toLogicalCheck(&st, y_bin[6]);
  st.site = &fb_emlrtRSI;
  toLogicalCheck(&st, x_bin[3]);
  st.site = &gb_emlrtRSI;
  toLogicalCheck(&st, y_bin[5]);
  st.site = &gb_emlrtRSI;
  toLogicalCheck(&st, x_bin[0]);
  st.site = &hb_emlrtRSI;
  toLogicalCheck(&st, y_bin[5]);
  st.site = &hb_emlrtRSI;
  toLogicalCheck(&st, x_bin[1]);
  st.site = &ib_emlrtRSI;
  toLogicalCheck(&st, y_bin[5]);
  st.site = &ib_emlrtRSI;
  toLogicalCheck(&st, x_bin[2]);
  st.site = &jb_emlrtRSI;
  toLogicalCheck(&st, y_bin[5]);
  st.site = &jb_emlrtRSI;
  toLogicalCheck(&st, x_bin[3]);
  st.site = &kb_emlrtRSI;
  toLogicalCheck(&st, y_bin[4]);
  st.site = &kb_emlrtRSI;
  toLogicalCheck(&st, x_bin[0]);
  st.site = &lb_emlrtRSI;
  toLogicalCheck(&st, y_bin[4]);
  st.site = &lb_emlrtRSI;
  toLogicalCheck(&st, x_bin[1]);
  st.site = &mb_emlrtRSI;
  toLogicalCheck(&st, y_bin[4]);
  st.site = &mb_emlrtRSI;
  toLogicalCheck(&st, x_bin[2]);
  st.site = &nb_emlrtRSI;
  toLogicalCheck(&st, y_bin[4]);
  st.site = &nb_emlrtRSI;
  toLogicalCheck(&st, x_bin[3]);
  st.site = &ob_emlrtRSI;
  toLogicalCheck(&st, y_bin[4]);
  st.site = &ob_emlrtRSI;
  toLogicalCheck(&st, x_bin[4]);
  st.site = &pb_emlrtRSI;
  toLogicalCheck(&st, y_bin[3]);
  st.site = &pb_emlrtRSI;
  toLogicalCheck(&st, x_bin[0]);
  st.site = &qb_emlrtRSI;
  toLogicalCheck(&st, y_bin[3]);
  st.site = &qb_emlrtRSI;
  toLogicalCheck(&st, x_bin[1]);
  st.site = &rb_emlrtRSI;
  toLogicalCheck(&st, y_bin[3]);
  st.site = &rb_emlrtRSI;
  toLogicalCheck(&st, x_bin[2]);
  st.site = &sb_emlrtRSI;
  toLogicalCheck(&st, y_bin[3]);
  st.site = &sb_emlrtRSI;
  toLogicalCheck(&st, x_bin[3]);
  st.site = &tb_emlrtRSI;
  toLogicalCheck(&st, y_bin[3]);
  st.site = &tb_emlrtRSI;
  toLogicalCheck(&st, x_bin[4]);
  st.site = &ub_emlrtRSI;
  toLogicalCheck(&st, y_bin[3]);
  st.site = &ub_emlrtRSI;
  toLogicalCheck(&st, x_bin[5]);
  st.site = &vb_emlrtRSI;
  toLogicalCheck(&st, y_bin[3]);
  st.site = &vb_emlrtRSI;
  toLogicalCheck(&st, x_bin[6]);
  st.site = &wb_emlrtRSI;
  toLogicalCheck(&st, y_bin[2]);
  st.site = &wb_emlrtRSI;
  toLogicalCheck(&st, x_bin[0]);
  st.site = &xb_emlrtRSI;
  toLogicalCheck(&st, y_bin[2]);
  st.site = &xb_emlrtRSI;
  toLogicalCheck(&st, x_bin[1]);
  st.site = &yb_emlrtRSI;
  toLogicalCheck(&st, y_bin[2]);
  st.site = &yb_emlrtRSI;
  toLogicalCheck(&st, x_bin[2]);
  st.site = &ac_emlrtRSI;
  toLogicalCheck(&st, y_bin[2]);
  st.site = &ac_emlrtRSI;
  toLogicalCheck(&st, x_bin[3]);
  st.site = &bc_emlrtRSI;
  toLogicalCheck(&st, y_bin[2]);
  st.site = &bc_emlrtRSI;
  toLogicalCheck(&st, x_bin[4]);
  st.site = &cc_emlrtRSI;
  toLogicalCheck(&st, y_bin[2]);
  st.site = &cc_emlrtRSI;
  toLogicalCheck(&st, x_bin[5]);
  st.site = &dc_emlrtRSI;
  toLogicalCheck(&st, y_bin[2]);
  st.site = &dc_emlrtRSI;
  toLogicalCheck(&st, x_bin[6]);
  st.site = &ec_emlrtRSI;
  toLogicalCheck(&st, y_bin[2]);
  st.site = &ec_emlrtRSI;
  toLogicalCheck(&st, x_bin[7]);
  st.site = &fc_emlrtRSI;
  toLogicalCheck(&st, y_bin[1]);
  st.site = &fc_emlrtRSI;
  toLogicalCheck(&st, x_bin[0]);
  st.site = &gc_emlrtRSI;
  toLogicalCheck(&st, y_bin[1]);
  st.site = &gc_emlrtRSI;
  toLogicalCheck(&st, x_bin[1]);
  st.site = &hc_emlrtRSI;
  toLogicalCheck(&st, y_bin[1]);
  st.site = &hc_emlrtRSI;
  toLogicalCheck(&st, x_bin[2]);
  st.site = &ic_emlrtRSI;
  st.site = &ic_emlrtRSI;
  st.site = &jc_emlrtRSI;
  st.site = &jc_emlrtRSI;
  st.site = &kc_emlrtRSI;
  st.site = &kc_emlrtRSI;
  st.site = &lc_emlrtRSI;
  st.site = &lc_emlrtRSI;
  st.site = &mc_emlrtRSI;
  st.site = &mc_emlrtRSI;
  st.site = &nc_emlrtRSI;
  st.site = &nc_emlrtRSI;
  st.site = &oc_emlrtRSI;
  st.site = &oc_emlrtRSI;
  st.site = &pc_emlrtRSI;
  st.site = &pc_emlrtRSI;
  st.site = &qc_emlrtRSI;
  st.site = &qc_emlrtRSI;
  st.site = &rc_emlrtRSI;
  st.site = &rc_emlrtRSI;
  st.site = &sc_emlrtRSI;
  st.site = &sc_emlrtRSI;
  st.site = &tc_emlrtRSI;
  st.site = &tc_emlrtRSI;
  st.site = &uc_emlrtRSI;
  st.site = &uc_emlrtRSI;
  st.site = &vc_emlrtRSI;
  st.site = &vc_emlrtRSI;
  st.site = &wc_emlrtRSI;
  st.site = &wc_emlrtRSI;
  for (j = 0; j < 8; j++) {
    pp[9 * j] = 0;
  }

  pp[72] = (int8_T)((y_bin[7] != 0) && (x_bin[0] != 0));
  pp[81] = (int8_T)((y_bin[7] != 0) && (x_bin[1] != 0));
  pp[90] = (int8_T)((y_bin[7] != 0) && (x_bin[2] != 0));
  for (j = 0; j < 7; j++) {
    pp[1 + 9 * j] = 0;
  }

  pp[64] = (int8_T)((y_bin[6] != 0) && (x_bin[0] != 0));
  pp[73] = (int8_T)((y_bin[6] != 0) && (x_bin[1] != 0));
  pp[82] = (int8_T)((y_bin[6] != 0) && (x_bin[2] != 0));
  pp[91] = (int8_T)((y_bin[6] != 0) && (x_bin[3] != 0));
  for (j = 0; j < 6; j++) {
    pp[2 + 9 * j] = 0;
  }

  pp[56] = (int8_T)((y_bin[5] != 0) && (x_bin[0] != 0));
  pp[65] = (int8_T)((y_bin[5] != 0) && (x_bin[1] != 0));
  pp[74] = (int8_T)((y_bin[5] != 0) && (x_bin[2] != 0));
  pp[83] = (int8_T)((y_bin[5] != 0) && (x_bin[3] != 0));
  pp[92] = 0;
  for (j = 0; j < 5; j++) {
    pp[3 + 9 * j] = 0;
  }

  pp[48] = (int8_T)((y_bin[4] != 0) && (x_bin[0] != 0));
  pp[57] = (int8_T)((y_bin[4] != 0) && (x_bin[1] != 0));
  pp[66] = (int8_T)((y_bin[4] != 0) && (x_bin[2] != 0));
  pp[75] = (int8_T)((y_bin[4] != 0) && (x_bin[3] != 0));
  pp[84] = (int8_T)((y_bin[4] != 0) && (x_bin[4] != 0));
  pp[93] = 0;
  for (j = 0; j < 4; j++) {
    pp[4 + 9 * j] = 0;
  }

  pp[40] = (int8_T)((y_bin[3] != 0) && (x_bin[0] != 0));
  pp[49] = (int8_T)((y_bin[3] != 0) && (x_bin[1] != 0));
  pp[58] = (int8_T)((y_bin[3] != 0) && (x_bin[2] != 0));
  pp[67] = (int8_T)((y_bin[3] != 0) && (x_bin[3] != 0));
  pp[76] = (int8_T)((y_bin[3] != 0) && (x_bin[4] != 0));
  pp[85] = (int8_T)((y_bin[3] != 0) && (x_bin[5] != 0));
  pp[94] = (int8_T)((y_bin[3] != 0) && (x_bin[6] != 0));
  for (j = 0; j < 3; j++) {
    pp[5 + 9 * j] = 0;
  }

  pp[32] = (int8_T)((y_bin[2] != 0) && (x_bin[0] != 0));
  pp[41] = (int8_T)((y_bin[2] != 0) && (x_bin[1] != 0));
  pp[50] = (int8_T)((y_bin[2] != 0) && (x_bin[2] != 0));
  pp[59] = (int8_T)((y_bin[2] != 0) && (x_bin[3] != 0));
  pp[68] = (int8_T)((y_bin[2] != 0) && (x_bin[4] != 0));
  pp[77] = (int8_T)((y_bin[2] != 0) && (x_bin[5] != 0));
  pp[86] = (int8_T)((y_bin[2] != 0) && (x_bin[6] != 0));
  pp[95] = (int8_T)((y_bin[2] != 0) && (x_bin[7] != 0));
  for (j = 0; j < 2; j++) {
    pp[6 + 9 * j] = 0;
  }

  pp[24] = (int8_T)((y_bin[1] != 0) && (x_bin[0] != 0));
  pp[33] = (int8_T)((y_bin[1] != 0) && (x_bin[1] != 0));
  pp[42] = (int8_T)((y_bin[1] != 0) && (x_bin[2] != 0));
  pp[51] = (int8_T)((y_bin[1] != 0) && (x_bin[3] != 0));
  pp[60] = (int8_T)((y_bin[1] != 0) && (x_bin[4] != 0));
  pp[69] = (int8_T)((y_bin[1] != 0) && (x_bin[5] != 0));
  pp[78] = (int8_T)((y_bin[1] != 0) && (x_bin[6] != 0));
  pp[87] = (int8_T)((y_bin[1] != 0) && (x_bin[7] != 0));
  pp[96] = 0;
  pp[7] = 0;
  pp[16] = (int8_T)((y_bin[0] != 0) && (x_bin[0] != 0));
  pp[25] = (int8_T)((y_bin[0] != 0) && (x_bin[1] != 0));
  pp[34] = (int8_T)((y_bin[0] != 0) && (x_bin[2] != 0));
  pp[43] = (int8_T)((y_bin[0] != 0) && (x_bin[3] != 0));
  pp[52] = (int8_T)((y_bin[0] != 0) && (x_bin[4] != 0));
  pp[61] = (int8_T)((y_bin[0] != 0) && (x_bin[5] != 0));
  pp[70] = (int8_T)((y_bin[0] != 0) && (x_bin[6] != 0));
  pp[79] = (int8_T)((y_bin[0] != 0) && (x_bin[7] != 0));
  pp[88] = (int8_T)((y_bin[5] != 0) && (x_bin[4] != 0));
  pp[97] = 0;
  pp[8] = 0;
  pp[17] = 0;
  pp[26] = 0;
  pp[35] = 0;
  pp[44] = 0;
  pp[53] = 0;
  pp[62] = 0;
  pp[71] = 0;
  pp[80] = 1;
  pp[89] = (int8_T)((y_bin[4] != 0) && (x_bin[5] != 0));
  pp[98] = 0;
  i = 0;
  while (i < 9) {
    for (j = 0; j < 11; j++) {
      b[j] = pp[i + 9 * j];
    }

    fliplr(b);
    st.site = &xc_emlrtRSI;
    b_pp = 1.0;
    d = 0.0;
    for (j = 0; j < 11; j++) {
      b_st.site = &cd_emlrtRSI;
      UPDATE_DECIMAL(&b_st, &d, b_pp, b[j]);
      b_pp *= 2.0;
    }

    pp_dec[i] = d;
    i++;
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(sp);
    }
  }

  b_pp = muDoubleScalarRound(sum(pp_dec));
  if (b_pp < 65536.0) {
    if (b_pp >= 0.0) {
      u0 = (uint16_T)b_pp;
    } else {
      u0 = 0;
    }
  } else if (b_pp >= 65536.0) {
    u0 = MAX_uint16_T;
  } else {
    u0 = 0;
  }

  return (uint16_T)(u0 << 5);
}

/* End of code generation (TBM.c) */
