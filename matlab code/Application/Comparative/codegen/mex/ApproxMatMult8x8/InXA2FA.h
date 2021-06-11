/*
 * InXA2FA.h
 *
 * Code generation for function 'InXA2FA'
 *
 */

#ifndef INXA2FA_H
#define INXA2FA_H

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
extern void InXA2FA(const emlrtStack *sp, real_T X, real_T Y, boolean_T Cin,
                    boolean_T *InXA2Cout, boolean_T *InXA2Sum);
extern void b_InXA2FA(const emlrtStack *sp, real_T X, boolean_T Y, boolean_T Cin,
                      boolean_T *InXA2Cout, boolean_T *InXA2Sum);

#endif

/* End of code generation (InXA2FA.h) */
