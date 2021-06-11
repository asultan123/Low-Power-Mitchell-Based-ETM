/*
 * ApproxMatMult8x8_initialize.c
 *
 * Code generation for function 'ApproxMatMult8x8_initialize'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "ApproxMatMult8x8_initialize.h"
#include "_coder_ApproxMatMult8x8_mex.h"
#include "ApproxMatMult8x8_data.h"

/* Function Definitions */
void ApproxMatMult8x8_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 3U, "ForceOff");
  emlrtEnterRtStackR2012b(&st);
  emlrtLicenseCheckR2012b(&st, "Fixed_Point_Toolbox", 2);
  emlrtLicenseCheckR2012b(&st, "Communication_Toolbox", 2);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/* End of code generation (ApproxMatMult8x8_initialize.c) */
