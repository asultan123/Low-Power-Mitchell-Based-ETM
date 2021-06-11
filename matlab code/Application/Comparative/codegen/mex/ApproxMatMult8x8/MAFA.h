/*
 * MAFA.h
 *
 * Code generation for function 'MAFA'
 *
 */

#ifndef MAFA_H
#define MAFA_H

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
extern void MAFA(const emlrtStack *sp, real_T X, boolean_T Y, real_T Cin,
                 boolean_T *MAFACout, boolean_T *MAFASum);
extern void b_MAFA(const emlrtStack *sp, real_T X, boolean_T Y, boolean_T Cin,
                   boolean_T *MAFACout, boolean_T *MAFASum);
extern void c_MAFA(const emlrtStack *sp, real_T X, real_T Y, real_T Cin,
                   boolean_T *MAFACout, boolean_T *MAFASum);
extern void d_MAFA(const emlrtStack *sp, boolean_T X, boolean_T Y, real_T Cin,
                   boolean_T *MAFACout, boolean_T *MAFASum);

#endif

/* End of code generation (MAFA.h) */
