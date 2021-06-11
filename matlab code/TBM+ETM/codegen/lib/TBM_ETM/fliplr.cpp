//
// File: fliplr.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 20:34:45
//

// Include Files
#include "rt_nonfinite.h"
#include "TBM_ETM.h"
#include "fliplr.h"

// Function Definitions

//
// Arguments    : double x[11]
// Return Type  : void
//
void fliplr(double x[11])
{
  int b_j1;
  double xtmp;
  for (b_j1 = 0; b_j1 < 5; b_j1++) {
    xtmp = x[b_j1];
    x[b_j1] = x[10 - b_j1];
    x[10 - b_j1] = xtmp;
  }
}

//
// File trailer for fliplr.cpp
//
// [EOF]
//
