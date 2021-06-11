//
// File: bi2de.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 21:26:41
//

// Include Files
#include "rt_nonfinite.h"
#include "COMPARATIVE_ETM.h"
#include "bi2de.h"

// Function Definitions

//
// Arguments    : double *d_i
//                double pp
//                double b_ij
// Return Type  : void
//
void UPDATE_DECIMAL(double *d_i, double pp, double b_ij)
{
  if (b_ij != 0.0) {
    *d_i += pp * b_ij;
  }
}

//
// File trailer for bi2de.cpp
//
// [EOF]
//
