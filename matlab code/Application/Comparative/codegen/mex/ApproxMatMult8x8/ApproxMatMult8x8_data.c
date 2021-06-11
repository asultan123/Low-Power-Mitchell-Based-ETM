/*
 * ApproxMatMult8x8_data.c
 *
 * Code generation for function 'ApproxMatMult8x8_data'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "ApproxMatMult8x8_data.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131451U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "ApproxMatMult8x8",                  /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 979717659U, 3812793578U, 420178624U, 2211665539U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

emlrtRSInfo i_emlrtRSI = { 5,          /* lineNo */
  "dec2binfrac",                       /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\dec2binfrac.m"/* pathName */
};

emlrtRSInfo j_emlrtRSI = { 7,          /* lineNo */
  "dec2binfrac",                       /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\dec2binfrac.m"/* pathName */
};

emlrtRSInfo k_emlrtRSI = { 10,         /* lineNo */
  "dec2binfrac",                       /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\dec2binfrac.m"/* pathName */
};

emlrtRSInfo l_emlrtRSI = { 40,         /* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\mpower.m"/* pathName */
};

emlrtRSInfo m_emlrtRSI = { 49,         /* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

emlrtRSInfo n_emlrtRSI = { 26,         /* lineNo */
  "char",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\strfun\\char.m"/* pathName */
};

emlrtRSInfo o_emlrtRSI = { 38,         /* lineNo */
  "charCastCheck",                     /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\charCastCheck.m"/* pathName */
};

emlrtRSInfo q_emlrtRSI = { 100,        /* lineNo */
  "cat",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m"/* pathName */
};

emlrtRSInfo md_emlrtRSI = { 125,       /* lineNo */
  "de2bi",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\comm\\comm\\eml\\de2bi.m"/* pathName */
};

emlrtRSInfo nd_emlrtRSI = { 121,       /* lineNo */
  "de2bi",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\comm\\comm\\eml\\de2bi.m"/* pathName */
};

emlrtRSInfo od_emlrtRSI = { 3,         /* lineNo */
  "HalfAdder",                         /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\HalfAdder.m"/* pathName */
};

emlrtRSInfo pd_emlrtRSI = { 4,         /* lineNo */
  "HalfAdder",                         /* fcnName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\Comparative\\HalfAdder.m"/* pathName */
};

emlrtRSInfo qd_emlrtRSI = { 12,        /* lineNo */
  "toLogicalCheck",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\eml\\+coder\\+internal\\toLogicalCheck.m"/* pathName */
};

emlrtRSInfo rd_emlrtRSI = { 16,        /* lineNo */
  "xor",                               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\ops\\xor.m"/* pathName */
};

emlrtRSInfo de_emlrtRSI = { 53,        /* lineNo */
  "bi2de",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\comm\\comm\\eml\\bi2de.m"/* pathName */
};

emlrtRSInfo cm_emlrtRSI = { 141,       /* lineNo */
  "dec2bin",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\strfun\\dec2bin.m"/* pathName */
};

emlrtRTEInfo emlrtRTEI = { 24,         /* lineNo */
  15,                                  /* colNo */
  "bin2dec",                           /* fName */
  "C:\\Program Files\\MATLAB\\R2017b\\toolbox\\eml\\lib\\matlab\\strfun\\bin2dec.m"/* pName */
};

/* End of code generation (ApproxMatMult8x8_data.c) */
