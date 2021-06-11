/*
 * File: _coder_BAM_ETM_api.h
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 02-Sep-2018 18:37:39
 */

#ifndef _CODER_BAM_ETM_API_H
#define _CODER_BAM_ETM_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_BAM_ETM_api.h"

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern uint32_T BAM_ETM(real_T a, real_T b, real_T vbl, real_T hbl);
extern void BAM_ETM_api(const mxArray * const prhs[4], const mxArray *plhs[1]);
extern void BAM_ETM_atexit(void);
extern void BAM_ETM_initialize(void);
extern void BAM_ETM_terminate(void);
extern void BAM_ETM_xil_terminate(void);

#endif

/*
 * File trailer for _coder_BAM_ETM_api.h
 *
 * [EOF]
 */
