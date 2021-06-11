//
// File: HalfAdder.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 21:26:41
//

// Include Files
#include "rt_nonfinite.h"
#include "COMPARATIVE_ETM.h"
#include "HalfAdder.h"

// Function Definitions

//
// Arguments    : double X
//                double Y
//                boolean_T *HACout
//                boolean_T *HASum
// Return Type  : void
//
void HalfAdder(double X, double Y, boolean_T *HACout, boolean_T *HASum)
{
  *HACout = ((X != 0.0) && (Y != 0.0));
  *HASum = (((X != 0.0) ^ (Y != 0.0)) != 0);
}

//
// File trailer for HalfAdder.cpp
//
// [EOF]
//
