/*
 * File: _coder_MITCHELL_ETM_api.h
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 02-Sep-2018 17:52:20
 */

#ifndef _CODER_MITCHELL_ETM_API_H
#define _CODER_MITCHELL_ETM_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_MITCHELL_ETM_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern uint32_T MITCHELL_ETM(real_T a, real_T b);
extern void MITCHELL_ETM_api(const mxArray * const prhs[2], const mxArray *plhs
  [1]);
extern void MITCHELL_ETM_atexit(void);
extern void MITCHELL_ETM_initialize(void);
extern void MITCHELL_ETM_terminate(void);
extern void MITCHELL_ETM_xil_terminate(void);

#endif

/*
 * File trailer for _coder_MITCHELL_ETM_api.h
 *
 * [EOF]
 */
