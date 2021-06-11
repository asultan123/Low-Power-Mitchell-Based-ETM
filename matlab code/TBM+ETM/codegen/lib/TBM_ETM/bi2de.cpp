//
// File: bi2de.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 20:34:45
//

// Include Files
#include "rt_nonfinite.h"
#include "TBM_ETM.h"
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
// Arguments    : const double b[11]
// Return Type  : double
//
double bi2de(const double b[11])
{
  double dOut;
  double pp;
  int j;
  pp = 1.0;
  dOut = 0.0;
  for (j = 0; j < 11; j++) {
    UPDATE_DECIMAL(&dOut, pp, b[j]);
    pp *= 2.0;
  }

  return dOut;
}

//
// File trailer for bi2de.cpp
//
// [EOF]
//
