/*
 * File: _coder_mult_ETM_int_api.h
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 31-Aug-2018 16:34:01
 */

#ifndef _CODER_MULT_ETM_INT_API_H
#define _CODER_MULT_ETM_INT_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_mult_ETM_int_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern uint32_T mult_ETM_int(real_T a, real_T b, real_T selector);
extern void mult_ETM_int_api(const mxArray * const prhs[3], const mxArray *plhs
  [1]);
extern void mult_ETM_int_atexit(void);
extern void mult_ETM_int_initialize(void);
extern void mult_ETM_int_terminate(void);
extern void mult_ETM_int_xil_terminate(void);

#endif

/*
 * File trailer for _coder_mult_ETM_int_api.h
 *
 * [EOF]
 */
