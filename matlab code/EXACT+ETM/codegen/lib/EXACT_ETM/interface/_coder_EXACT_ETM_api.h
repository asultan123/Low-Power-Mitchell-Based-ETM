/*
 * File: _coder_EXACT_ETM_api.h
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 01-Sep-2018 11:58:36
 */

#ifndef _CODER_EXACT_ETM_API_H
#define _CODER_EXACT_ETM_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_EXACT_ETM_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern uint32_T EXACT_ETM(real_T a, real_T b);
extern void EXACT_ETM_api(const mxArray * const prhs[2], const mxArray *plhs[1]);
extern void EXACT_ETM_atexit(void);
extern void EXACT_ETM_initialize(void);
extern void EXACT_ETM_terminate(void);
extern void EXACT_ETM_xil_terminate(void);

#endif

/*
 * File trailer for _coder_EXACT_ETM_api.h
 *
 * [EOF]
 */
