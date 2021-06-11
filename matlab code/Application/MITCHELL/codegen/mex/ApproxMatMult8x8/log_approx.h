/*
 * log_approx.h
 *
 * Code generation for function 'log_approx'
 *
 */

#ifndef LOG_APPROX_H
#define LOG_APPROX_H

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
extern void log_approx(const emlrtStack *sp, uint8_T input, real_T *log_num,
  real_T *lower);

#endif

/* End of code generation (log_approx.h) */
