/*
 * File: _coder_COMPARATIVE_ETM_api.h
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 31-Aug-2018 21:26:41
 */

#ifndef _CODER_COMPARATIVE_ETM_API_H
#define _CODER_COMPARATIVE_ETM_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_COMPARATIVE_ETM_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern uint32_T COMPARATIVE_ETM(real_T a, real_T b, real_T selector);
extern void COMPARATIVE_ETM_api(const mxArray * const prhs[3], const mxArray
  *plhs[1]);
extern void COMPARATIVE_ETM_atexit(void);
extern void COMPARATIVE_ETM_initialize(void);
extern void COMPARATIVE_ETM_terminate(void);
extern void COMPARATIVE_ETM_xil_terminate(void);

#endif

/*
 * File trailer for _coder_COMPARATIVE_ETM_api.h
 *
 * [EOF]
 */
