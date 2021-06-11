/*
 * AMA4FA.h
 *
 * Code generation for function 'AMA4FA'
 *
 */

#ifndef AMA4FA_H
#define AMA4FA_H

/* Include files */
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "rtwtypes.h"
#include "ApproxMatMult8x8_types.h"

/* Function Declarations */
extern void AMA4FA(const emlrtStack *sp, real_T X, real_T Y, real_T Cin, real_T *
                   AMA4Cout, boolean_T *AMA4Sum);
extern void b_AMA4FA(const emlrtStack *sp, real_T X, boolean_T Y, boolean_T Cin,
                     real_T *AMA4Cout, boolean_T *AMA4Sum);
extern void c_AMA4FA(const emlrtStack *sp, real_T X, boolean_T Y, real_T Cin,
                     real_T *AMA4Cout, boolean_T *AMA4Sum);

#endif

/* End of code generation (AMA4FA.h) */
