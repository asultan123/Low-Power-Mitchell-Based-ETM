/*
 * de2bi.h
 *
 * Code generation for function 'de2bi'
 *
 */

#ifndef DE2BI_H
#define DE2BI_H

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
extern void b_de2bi(const emlrtStack *sp, real_T d, real_T b[16]);
extern void de2bi(const emlrtStack *sp, uint8_T d, uint8_T b[8]);

#endif

/* End of code generation (de2bi.h) */
