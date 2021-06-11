/*
 * dec2bin.h
 *
 * Code generation for function 'dec2bin'
 *
 */

#ifndef DEC2BIN_H
#define DEC2BIN_H

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
extern boolean_T all_nonnegative_and_finite(real_T d);
extern void dec2bin(const emlrtStack *sp, real_T d, char_T s_data[], int32_T
                    s_size[2]);

#endif

/* End of code generation (dec2bin.h) */
