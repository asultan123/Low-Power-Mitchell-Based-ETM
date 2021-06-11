/*
 * mult_selector.c
 *
 * Code generation for function 'mult_selector'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mult_selector.h"
#include "InXA1ArrayMultiplier_8X8.h"
#include "bi2de.h"
#include "MAFA.h"
#include "InXA2FA.h"
#include "HalfAdder.h"
#include "de2bi.h"
#include "Comp_E_AMA5_8X8_Multiplier.h"
#include "AMA4ArrayMultiplier_8X8.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
static emlrtRSInfo w_emlrtRSI = { 4,   /* lineNo */
  "mult_selector",                     /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\mult_selector.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 6,   /* lineNo */
  "mult_selector",                     /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\mult_selector.m"/* pathName */
};

static emlrtRSInfo y_emlrtRSI = { 8,   /* lineNo */
  "mult_selector",                     /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\mult_selector.m"/* pathName */
};

static emlrtRSInfo ab_emlrtRSI = { 10, /* lineNo */
  "mult_selector",                     /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\mult_selector.m"/* pathName */
};

static emlrtRSInfo bb_emlrtRSI = { 12, /* lineNo */
  "mult_selector",                     /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\mult_selector.m"/* pathName */
};

static emlrtRSInfo rf_emlrtRSI = { 7,  /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo sf_emlrtRSI = { 8,  /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo tf_emlrtRSI = { 16, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo uf_emlrtRSI = { 23, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo vf_emlrtRSI = { 25, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo wf_emlrtRSI = { 31, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo xf_emlrtRSI = { 32, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo yf_emlrtRSI = { 34, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ag_emlrtRSI = { 39, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo bg_emlrtRSI = { 40, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo cg_emlrtRSI = { 41, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo dg_emlrtRSI = { 44, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo eg_emlrtRSI = { 48, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo fg_emlrtRSI = { 49, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo gg_emlrtRSI = { 50, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo hg_emlrtRSI = { 51, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ig_emlrtRSI = { 53, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo jg_emlrtRSI = { 56, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo kg_emlrtRSI = { 57, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo lg_emlrtRSI = { 58, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo mg_emlrtRSI = { 59, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ng_emlrtRSI = { 60, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo og_emlrtRSI = { 62, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo pg_emlrtRSI = { 64, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo qg_emlrtRSI = { 65, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo rg_emlrtRSI = { 66, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo sg_emlrtRSI = { 67, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo tg_emlrtRSI = { 68, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ug_emlrtRSI = { 69, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo vg_emlrtRSI = { 71, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo wg_emlrtRSI = { 72, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo xg_emlrtRSI = { 73, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo yg_emlrtRSI = { 74, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ah_emlrtRSI = { 75, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo bh_emlrtRSI = { 76, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ch_emlrtRSI = { 77, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo dh_emlrtRSI = { 78, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo eh_emlrtRSI = { 81, /* lineNo */
  "AMA5ArrayMultiplier_8X8",           /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\AMA5ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo fh_emlrtRSI = { 6,  /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo gh_emlrtRSI = { 7,  /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo hh_emlrtRSI = { 15, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ih_emlrtRSI = { 16, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo jh_emlrtRSI = { 17, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo kh_emlrtRSI = { 18, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo lh_emlrtRSI = { 19, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo mh_emlrtRSI = { 20, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo nh_emlrtRSI = { 21, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo oh_emlrtRSI = { 22, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ph_emlrtRSI = { 24, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo qh_emlrtRSI = { 25, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo rh_emlrtRSI = { 26, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo sh_emlrtRSI = { 27, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo th_emlrtRSI = { 28, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo uh_emlrtRSI = { 29, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo vh_emlrtRSI = { 30, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo wh_emlrtRSI = { 31, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo xh_emlrtRSI = { 33, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo yh_emlrtRSI = { 34, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ai_emlrtRSI = { 35, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo bi_emlrtRSI = { 36, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ci_emlrtRSI = { 37, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo di_emlrtRSI = { 38, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ei_emlrtRSI = { 39, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo fi_emlrtRSI = { 40, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo gi_emlrtRSI = { 43, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo hi_emlrtRSI = { 44, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ii_emlrtRSI = { 45, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ji_emlrtRSI = { 46, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ki_emlrtRSI = { 47, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo li_emlrtRSI = { 48, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo mi_emlrtRSI = { 49, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ni_emlrtRSI = { 50, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo oi_emlrtRSI = { 52, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo pi_emlrtRSI = { 53, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo qi_emlrtRSI = { 54, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ri_emlrtRSI = { 55, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo si_emlrtRSI = { 56, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ti_emlrtRSI = { 57, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ui_emlrtRSI = { 58, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo vi_emlrtRSI = { 59, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo wi_emlrtRSI = { 61, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo xi_emlrtRSI = { 62, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo yi_emlrtRSI = { 63, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo aj_emlrtRSI = { 64, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo bj_emlrtRSI = { 65, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo cj_emlrtRSI = { 66, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo dj_emlrtRSI = { 67, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ej_emlrtRSI = { 68, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo fj_emlrtRSI = { 70, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo gj_emlrtRSI = { 71, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo hj_emlrtRSI = { 72, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo ij_emlrtRSI = { 73, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo jj_emlrtRSI = { 74, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo kj_emlrtRSI = { 75, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo lj_emlrtRSI = { 76, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo mj_emlrtRSI = { 77, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtRSInfo nj_emlrtRSI = { 80, /* lineNo */
  "InXA2ArrayMultiplier_8X8",          /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\InXA2ArrayMultiplier_8X8.m"/* pathName */
};

static emlrtDCInfo emlrtDCI = { 2,     /* lineNo */
  12,                                  /* colNo */
  "mult_selector",                     /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\mult_selector.m",/* pName */
  1                                    /* checkKind */
};

/* Function Definitions */
real_T mult_selector(const emlrtStack *sp, uint8_T a, uint8_T b, real_T sel)
{
  real_T res;
  uint8_T Abin[8];
  uint8_T Bbin[8];
  int32_T i;
  int8_T PP[64];
  boolean_T C22;
  boolean_T S1;
  int32_T j;
  boolean_T S28;
  boolean_T S22;
  boolean_T C29;
  boolean_T C38;
  boolean_T S55;
  boolean_T S46;
  boolean_T S47;
  boolean_T S37;
  boolean_T S2;
  boolean_T S48;
  boolean_T C39;
  boolean_T S38;
  boolean_T S3;
  boolean_T S4;
  boolean_T S5;
  boolean_T S6;
  boolean_T S77;
  boolean_T C79;
  boolean_T S78;
  int8_T output[16];
  real_T pp;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (sel != (int32_T)muDoubleScalarFloor(sel)) {
    emlrtIntegerCheckR2012b(sel, &emlrtDCI, sp);
  }

  switch ((int32_T)sel) {
   case 0:
    st.site = &w_emlrtRSI;
    res = AMA4ArrayMultiplier_8X8(&st, a, b);
    break;

   case 1:
    st.site = &x_emlrtRSI;
    res = Comp_E_AMA5_8X8_Multiplier(&st, a, b);
    break;

   case 2:
    st.site = &y_emlrtRSI;

    /* %%  EM5 */
    /*  Approximate 8X8 Array Multiplier based on AMA5 */
    /*  C = A X B */
    /* convert input from decimal to 4 bits binary */
    b_st.site = &rf_emlrtRSI;
    de2bi(&b_st, a, Abin);
    b_st.site = &sf_emlrtRSI;
    de2bi(&b_st, b, Bbin);

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
          emlrtBreakCheckR2012b(&st);
        }
      }

      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    b_st.site = &tf_emlrtRSI;
    HalfAdder(&b_st, PP[1], PP[8], &C22, &S1);

    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    b_st.site = &uf_emlrtRSI;
    HalfAdder(&b_st, PP[57], PP[56], &C29, &S28);

    /*  first row of FAs */
    b_st.site = &vf_emlrtRSI;
    HalfAdder(&b_st, PP[2], PP[9], &C22, &S2);

    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    b_st.site = &wf_emlrtRSI;
    MAFA(&b_st, PP[50], S28, PP[42], &C38, &S37);
    b_st.site = &xf_emlrtRSI;
    b_MAFA(&b_st, PP[58], C29, C38, &C39, &S38);

    /*  second row of FAS */
    b_st.site = &yf_emlrtRSI;
    HalfAdder(&b_st, PP[3], PP[17], &C22, &S3);

    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    b_st.site = &ag_emlrtRSI;
    MAFA(&b_st, PP[43], S37, PP[35], &C22, &S46);
    b_st.site = &bg_emlrtRSI;
    b_MAFA(&b_st, PP[51], S38, C22, &S28, &S47);
    b_st.site = &cg_emlrtRSI;
    b_MAFA(&b_st, PP[59], C39, S28, &S37, &S48);

    /*  Third row of FAS */
    b_st.site = &dg_emlrtRSI;
    HalfAdder(&b_st, PP[4], PP[25], &C22, &S4);

    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    b_st.site = &eg_emlrtRSI;
    MAFA(&b_st, PP[36], S46, PP[28], &S28, &S55);
    b_st.site = &fg_emlrtRSI;
    b_MAFA(&b_st, PP[44], S47, S28, &C22, &S38);
    b_st.site = &gg_emlrtRSI;
    b_MAFA(&b_st, PP[52], S48, C22, &S28, &S46);
    b_st.site = &hg_emlrtRSI;
    b_MAFA(&b_st, PP[60], S37, S28, &S48, &S47);

    /*  Fourth row of FA */
    b_st.site = &ig_emlrtRSI;
    HalfAdder(&b_st, PP[5], PP[33], &C22, &S5);

    /*  Approximate MA5 */
    /*  Cin is discarded */
    /*  Approximate MA5 */
    /*  Cin is discarded */
    b_st.site = &jg_emlrtRSI;
    MAFA(&b_st, PP[29], S55, PP[21], &C22, &C38);
    b_st.site = &kg_emlrtRSI;
    b_MAFA(&b_st, PP[37], S38, C22, &S28, &S37);
    b_st.site = &lg_emlrtRSI;
    b_MAFA(&b_st, PP[45], S46, S28, &C22, &S38);
    b_st.site = &mg_emlrtRSI;
    b_MAFA(&b_st, PP[53], S47, C22, &S28, &S46);
    b_st.site = &ng_emlrtRSI;
    b_MAFA(&b_st, PP[61], S48, S28, &C39, &S47);

    /*  5th row of FA */
    b_st.site = &og_emlrtRSI;
    HalfAdder(&b_st, PP[6], PP[41], &C22, &S6);

    /*  Approximate MA5 */
    /*  Cin is discarded */
    b_st.site = &pg_emlrtRSI;
    MAFA(&b_st, PP[22], C38, PP[14], &S28, &C29);
    b_st.site = &qg_emlrtRSI;
    b_MAFA(&b_st, PP[30], S37, S28, &C22, &C38);
    b_st.site = &rg_emlrtRSI;
    b_MAFA(&b_st, PP[38], S38, C22, &S28, &S48);
    b_st.site = &sg_emlrtRSI;
    b_MAFA(&b_st, PP[46], S46, S28, &C22, &S55);
    b_st.site = &tg_emlrtRSI;
    b_MAFA(&b_st, PP[54], S47, C22, &S28, &S77);
    b_st.site = &ug_emlrtRSI;
    b_MAFA(&b_st, PP[62], C39, S28, &C79, &S78);

    /*  siXth row of FA */
    b_st.site = &vg_emlrtRSI;
    HalfAdder(&b_st, PP[7], PP[49], &C22, &S37);
    b_st.site = &wg_emlrtRSI;
    b_MAFA(&b_st, PP[15], C29, C22, &S28, &C39);
    b_st.site = &xg_emlrtRSI;
    b_MAFA(&b_st, PP[23], C38, S28, &C22, &S47);
    b_st.site = &yg_emlrtRSI;
    b_MAFA(&b_st, PP[31], S48, C22, &S28, &S46);
    b_st.site = &ah_emlrtRSI;
    b_MAFA(&b_st, PP[39], S55, S28, &C22, &S38);
    b_st.site = &bh_emlrtRSI;
    b_MAFA(&b_st, PP[47], S77, C22, &S28, &S55);
    b_st.site = &ch_emlrtRSI;
    b_MAFA(&b_st, PP[55], S78, S28, &C29, &C38);
    b_st.site = &dh_emlrtRSI;
    b_MAFA(&b_st, PP[63], C79, C29, &C22, &S28);

    /*  7th row of FA */
    /* ************************************% */
    output[0] = PP[0];
    output[1] = (int8_T)S1;
    output[2] = (int8_T)S2;
    output[3] = (int8_T)S3;
    output[4] = (int8_T)S4;
    output[5] = (int8_T)S5;
    output[6] = (int8_T)S6;
    output[7] = (int8_T)S37;
    output[8] = (int8_T)C39;
    output[9] = (int8_T)S47;
    output[10] = (int8_T)S46;
    output[11] = (int8_T)S38;
    output[12] = (int8_T)S55;
    output[13] = (int8_T)C38;
    output[14] = (int8_T)S28;
    output[15] = (int8_T)C22;
    b_st.site = &eh_emlrtRSI;
    pp = 1.0;
    res = 0.0;
    for (j = 0; j < 16; j++) {
      c_st.site = &de_emlrtRSI;
      UPDATE_DECIMAL(&c_st, &res, pp, output[j]);
      pp *= 2.0;
    }
    break;

   case 3:
    st.site = &ab_emlrtRSI;

    /* %%  EIn2 */
    /*  Approximate 8X8 Array Multiplier based on AMA1 */
    /*  C = A X B */
    /* convert input from decimal to 4 bits binary */
    b_st.site = &fh_emlrtRSI;
    de2bi(&b_st, a, Abin);
    b_st.site = &gh_emlrtRSI;
    de2bi(&b_st, b, Bbin);

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
          emlrtBreakCheckR2012b(&st);
        }
      }

      i++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b(&st);
      }
    }

    b_st.site = &hh_emlrtRSI;
    HalfAdder(&b_st, PP[1], PP[8], &C22, &S1);
    b_st.site = &ih_emlrtRSI;
    InXA2FA(&b_st, PP[16], PP[9], C22, &S28, &S22);
    b_st.site = &jh_emlrtRSI;
    InXA2FA(&b_st, PP[24], PP[17], S28, &C22, &C29);
    b_st.site = &kh_emlrtRSI;
    InXA2FA(&b_st, PP[32], PP[25], C22, &S28, &C38);
    b_st.site = &lh_emlrtRSI;
    InXA2FA(&b_st, PP[40], PP[33], S28, &C22, &S55);
    b_st.site = &mh_emlrtRSI;
    InXA2FA(&b_st, PP[48], PP[41], C22, &S28, &S46);
    b_st.site = &nh_emlrtRSI;
    InXA2FA(&b_st, PP[56], PP[49], S28, &S47, &S37);
    b_st.site = &oh_emlrtRSI;

    /*  first row of FAs */
    b_st.site = &ph_emlrtRSI;
    b_st.site = &qh_emlrtRSI;
    b_InXA2FA(&b_st, PP[10], C29, (PP[2] != 0) && S22, &C22, &S2);
    b_st.site = &rh_emlrtRSI;
    b_InXA2FA(&b_st, PP[18], C38, C22, &S28, &C29);
    b_st.site = &sh_emlrtRSI;
    b_InXA2FA(&b_st, PP[26], S55, S28, &C22, &S48);
    b_st.site = &th_emlrtRSI;
    b_InXA2FA(&b_st, PP[34], S46, C22, &S28, &S55);
    b_st.site = &uh_emlrtRSI;
    b_InXA2FA(&b_st, PP[42], S37, S28, &C22, &S46);
    b_st.site = &vh_emlrtRSI;
    b_MAFA(&b_st, PP[50], ((PP[57] != 0) ^ S47) != 0, C22, &C38, &S37);
    b_st.site = &wh_emlrtRSI;
    b_MAFA(&b_st, PP[58], (PP[57] != 0) && S47, C38, &C39, &S38);

    /*  second row of FAS */
    b_st.site = &xh_emlrtRSI;
    b_st.site = &yh_emlrtRSI;
    b_InXA2FA(&b_st, PP[11], C29, (PP[3] != 0) && S2, &C22, &S3);
    b_st.site = &ai_emlrtRSI;
    b_InXA2FA(&b_st, PP[19], S48, C22, &S28, &C29);
    b_st.site = &bi_emlrtRSI;
    b_InXA2FA(&b_st, PP[27], S55, S28, &C22, &C38);
    b_st.site = &ci_emlrtRSI;
    b_InXA2FA(&b_st, PP[35], S46, C22, &S28, &S55);
    b_st.site = &di_emlrtRSI;
    b_MAFA(&b_st, PP[43], S37, S28, &C22, &S46);
    b_st.site = &ei_emlrtRSI;
    b_MAFA(&b_st, PP[51], S38, C22, &S28, &S47);
    b_st.site = &fi_emlrtRSI;
    b_MAFA(&b_st, PP[59], C39, S28, &S37, &S48);

    /*  Third row of FAS */
    b_st.site = &gi_emlrtRSI;
    b_st.site = &hi_emlrtRSI;
    b_InXA2FA(&b_st, PP[12], C29, (PP[4] != 0) && S3, &C22, &S4);
    b_st.site = &ii_emlrtRSI;
    b_InXA2FA(&b_st, PP[20], C38, C22, &S28, &C29);
    b_st.site = &ji_emlrtRSI;
    b_InXA2FA(&b_st, PP[28], S55, S28, &C22, &C38);
    b_st.site = &ki_emlrtRSI;
    b_MAFA(&b_st, PP[36], S46, C22, &S28, &S55);
    b_st.site = &li_emlrtRSI;
    b_MAFA(&b_st, PP[44], S47, S28, &C22, &S38);
    b_st.site = &mi_emlrtRSI;
    b_MAFA(&b_st, PP[52], S48, C22, &S28, &S46);
    b_st.site = &ni_emlrtRSI;
    b_MAFA(&b_st, PP[60], S37, S28, &S48, &S47);

    /*  Fourth row of FA */
    b_st.site = &oi_emlrtRSI;
    b_st.site = &pi_emlrtRSI;
    b_InXA2FA(&b_st, PP[13], C29, (PP[5] != 0) && S4, &C22, &S5);
    b_st.site = &qi_emlrtRSI;
    b_InXA2FA(&b_st, PP[21], C38, C22, &S28, &C29);
    b_st.site = &ri_emlrtRSI;
    b_MAFA(&b_st, PP[29], S55, S28, &C22, &C38);
    b_st.site = &si_emlrtRSI;
    b_MAFA(&b_st, PP[37], S38, C22, &S28, &S37);
    b_st.site = &ti_emlrtRSI;
    b_MAFA(&b_st, PP[45], S46, S28, &C22, &S38);
    b_st.site = &ui_emlrtRSI;
    b_MAFA(&b_st, PP[53], S47, C22, &S28, &S46);
    b_st.site = &vi_emlrtRSI;
    b_MAFA(&b_st, PP[61], S48, S28, &C39, &S47);

    /*  5th row of FA */
    b_st.site = &wi_emlrtRSI;
    b_st.site = &xi_emlrtRSI;
    b_InXA2FA(&b_st, PP[14], C29, (PP[6] != 0) && S5, &C22, &S6);
    b_st.site = &yi_emlrtRSI;
    b_MAFA(&b_st, PP[22], C38, C22, &S28, &C29);
    b_st.site = &aj_emlrtRSI;
    b_MAFA(&b_st, PP[30], S37, S28, &C22, &C38);
    b_st.site = &bj_emlrtRSI;
    b_MAFA(&b_st, PP[38], S38, C22, &S28, &S48);
    b_st.site = &cj_emlrtRSI;
    b_MAFA(&b_st, PP[46], S46, S28, &C22, &S55);
    b_st.site = &dj_emlrtRSI;
    b_MAFA(&b_st, PP[54], S47, C22, &S28, &S77);
    b_st.site = &ej_emlrtRSI;
    b_MAFA(&b_st, PP[62], C39, S28, &C79, &S78);

    /*  siXth row of FA */
    b_st.site = &fj_emlrtRSI;
    b_st.site = &gj_emlrtRSI;
    b_MAFA(&b_st, PP[15], C29, (PP[7] != 0) && S6, &S28, &C39);
    b_st.site = &hj_emlrtRSI;
    b_MAFA(&b_st, PP[23], C38, S28, &C22, &S47);
    b_st.site = &ij_emlrtRSI;
    b_MAFA(&b_st, PP[31], S48, C22, &S28, &S46);
    b_st.site = &jj_emlrtRSI;
    b_MAFA(&b_st, PP[39], S55, S28, &C22, &S38);
    b_st.site = &kj_emlrtRSI;
    b_MAFA(&b_st, PP[47], S77, C22, &S28, &S55);
    b_st.site = &lj_emlrtRSI;
    b_MAFA(&b_st, PP[55], S78, S28, &C29, &C38);
    b_st.site = &mj_emlrtRSI;
    b_MAFA(&b_st, PP[63], C79, C29, &C22, &S28);

    /*  7th row of FA */
    /* ************************************% */
    output[0] = PP[0];
    output[1] = (int8_T)S1;
    output[2] = (int8_T)(((PP[2] != 0) ^ S22) != 0);
    output[3] = (int8_T)(((PP[3] != 0) ^ S2) != 0);
    output[4] = (int8_T)(((PP[4] != 0) ^ S3) != 0);
    output[5] = (int8_T)(((PP[5] != 0) ^ S4) != 0);
    output[6] = (int8_T)(((PP[6] != 0) ^ S5) != 0);
    output[7] = (int8_T)(((PP[7] != 0) ^ S6) != 0);
    output[8] = (int8_T)C39;
    output[9] = (int8_T)S47;
    output[10] = (int8_T)S46;
    output[11] = (int8_T)S38;
    output[12] = (int8_T)S55;
    output[13] = (int8_T)C38;
    output[14] = (int8_T)S28;
    output[15] = (int8_T)C22;
    b_st.site = &nj_emlrtRSI;
    pp = 1.0;
    res = 0.0;
    for (j = 0; j < 16; j++) {
      c_st.site = &de_emlrtRSI;
      UPDATE_DECIMAL(&c_st, &res, pp, output[j]);
      pp *= 2.0;
    }
    break;

   case 4:
    st.site = &bb_emlrtRSI;
    res = InXA1ArrayMultiplier_8X8(&st, a, b);
    break;

   default:
    res = 0.0;
    break;
  }

  return res;
}

/* End of code generation (mult_selector.c) */
