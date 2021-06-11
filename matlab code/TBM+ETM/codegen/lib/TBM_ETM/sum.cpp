//
// File: sum.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 20:34:45
//

// Include Files
#include "rt_nonfinite.h"
#include "TBM_ETM.h"
#include "sum.h"

// Function Definitions

//
// Arguments    : const double x[9]
// Return Type  : double
//
double sum(const double x[9])
{
  double y;
  int k;
  y = x[0];
  for (k = 0; k < 8; k++) {
    y += x[k + 1];
  }

  return y;
}

//
// File trailer for sum.cpp
//
// [EOF]
//
