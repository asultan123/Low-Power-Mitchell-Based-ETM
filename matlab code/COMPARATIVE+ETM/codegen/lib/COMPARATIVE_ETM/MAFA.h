//
// File: MAFA.h
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 21:26:41
//
#ifndef MAFA_H
#define MAFA_H

// Include Files
#include <cmath>
#include <float.h>
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "COMPARATIVE_ETM_types.h"

// Function Declarations
extern void MAFA(double X, boolean_T Y, double Cin, boolean_T *MAFACout,
                 boolean_T *MAFASum);
extern void b_MAFA(double X, boolean_T Y, boolean_T Cin, boolean_T *MAFACout,
                   boolean_T *MAFASum);
extern void c_MAFA(double X, double Y, double Cin, boolean_T *MAFACout,
                   boolean_T *MAFASum);
extern void d_MAFA(boolean_T X, boolean_T Y, double Cin, boolean_T *MAFACout,
                   boolean_T *MAFASum);

#endif

//
// File trailer for MAFA.h
//
// [EOF]
//
