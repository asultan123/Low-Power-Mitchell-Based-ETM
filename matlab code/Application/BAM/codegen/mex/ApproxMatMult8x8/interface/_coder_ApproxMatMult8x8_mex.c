/*
 * _coder_ApproxMatMult8x8_mex.c
 *
 * Code generation for function '_coder_ApproxMatMult8x8_mex'
 *
 */

/* Include files */
#include "ApproxMatMult8x8.h"
#include "_coder_ApproxMatMult8x8_mex.h"
#include "ApproxMatMult8x8_terminate.h"
#include "_coder_ApproxMatMult8x8_api.h"
#include "ApproxMatMult8x8_initialize.h"
#include "ApproxMatMult8x8_data.h"

/* Function Declarations */
static void ApproxMatMult8x8_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs, const mxArray *prhs[4]);

/* Function Definitions */
static void ApproxMatMult8x8_mexFunction(int32_T nlhs, mxArray *plhs[1], int32_T
  nrhs, const mxArray *prhs[4])
{
  int32_T n;
  const mxArray *inputs[4];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        16, "ApproxMatMult8x8");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 16,
                        "ApproxMatMult8x8");
  }

  /* Temporary copy for mex inputs. */
  for (n = 0; n < nrhs; n++) {
    inputs[n] = prhs[n];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }

  /* Call the function. */
  ApproxMatMult8x8_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  ApproxMatMult8x8_terminate();
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(ApproxMatMult8x8_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  ApproxMatMult8x8_initialize();

  /* Dispatch the entry-point. */
  ApproxMatMult8x8_mexFunction(nlhs, plhs, nrhs, prhs);
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_ApproxMatMult8x8_mex.c) */
