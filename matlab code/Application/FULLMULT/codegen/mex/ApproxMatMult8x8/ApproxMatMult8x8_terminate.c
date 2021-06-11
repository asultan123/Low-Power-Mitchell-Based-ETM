/*
 * ApproxMatMult8x8_terminate.c
 *
 * Code generation for function 'ApproxMatMult8x8_terminate'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "ApproxMatMult8x8_terminate.h"
#include "_coder_ApproxMatMult8x8_mex.h"
#include "ApproxMatMult8x8_data.h"

/* Function Definitions */
void ApproxMatMult8x8_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void ApproxMatMult8x8_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/* End of code generation (ApproxMatMult8x8_terminate.c) */
