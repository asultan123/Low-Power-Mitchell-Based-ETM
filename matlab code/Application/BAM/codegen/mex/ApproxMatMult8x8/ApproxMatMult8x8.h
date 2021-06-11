/*
 * ApproxMatMult8x8.h
 *
 * Code generation for function 'ApproxMatMult8x8'
 *
 */

#ifndef APPROXMATMULT8X8_H
#define APPROXMATMULT8X8_H

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
extern void ApproxMatMult8x8(const emlrtStack *sp, const real_T T[64], const
  real_T I[64], real_T vbl, real_T hbl, real_T res[64]);

#endif

/* End of code generation (ApproxMatMult8x8.h) */
