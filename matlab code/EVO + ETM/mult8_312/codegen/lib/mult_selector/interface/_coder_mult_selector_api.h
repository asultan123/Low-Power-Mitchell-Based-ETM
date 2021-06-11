/*
 * File: _coder_mult_selector_api.h
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 31-Aug-2018 13:44:33
 */

#ifndef _CODER_MULT_SELECTOR_API_H
#define _CODER_MULT_SELECTOR_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_mult_selector_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern uint16_T mult_selector(real_T a, real_T b, real_T sel);
extern void mult_selector_api(const mxArray * const prhs[3], const mxArray *
  plhs[1]);
extern void mult_selector_atexit(void);
extern void mult_selector_initialize(void);
extern void mult_selector_terminate(void);
extern void mult_selector_xil_terminate(void);

#endif

/*
 * File trailer for _coder_mult_selector_api.h
 *
 * [EOF]
 */
