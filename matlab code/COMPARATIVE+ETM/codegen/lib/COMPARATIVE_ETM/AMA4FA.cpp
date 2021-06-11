//
// File: AMA4FA.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 21:26:41
//

// Include Files
#include "rt_nonfinite.h"
#include "COMPARATIVE_ETM.h"
#include "AMA4FA.h"

// Function Definitions

//
// Arguments    : double X
//                double Y
//                double Cin
//                double *AMA4Cout
//                boolean_T *AMA4Sum
// Return Type  : void
//
void AMA4FA(double X, double Y, double Cin, double *AMA4Cout, boolean_T *AMA4Sum)
{
  boolean_T Xbar;

  //  Approximate MA4
  Xbar = !(X != 0.0);
  *AMA4Sum = ((Xbar && (!(Y != 0.0)) && (Cin != 0.0)) || ((Xbar && (Y != 0.0) &&
    (Cin != 0.0)) || ((X != 0.0) && (Y != 0.0) && (Cin != 0.0))));
  *AMA4Cout = X;
}

//
// Arguments    : double X
//                boolean_T Y
//                boolean_T Cin
//                double *AMA4Cout
//                boolean_T *AMA4Sum
// Return Type  : void
//
void b_AMA4FA(double X, boolean_T Y, boolean_T Cin, double *AMA4Cout, boolean_T *
              AMA4Sum)
{
  boolean_T Xbar;

  //  Approximate MA4
  Xbar = !(X != 0.0);
  *AMA4Sum = ((Xbar && (!Y) && Cin) || ((Xbar && Y && Cin) || ((X != 0.0) && Y &&
    Cin)));
  *AMA4Cout = X;
}

//
// Arguments    : double X
//                boolean_T Y
//                double Cin
//                double *AMA4Cout
//                boolean_T *AMA4Sum
// Return Type  : void
//
void c_AMA4FA(double X, boolean_T Y, double Cin, double *AMA4Cout, boolean_T
              *AMA4Sum)
{
  boolean_T Xbar;

  //  Approximate MA4
  Xbar = !(X != 0.0);
  *AMA4Sum = ((Xbar && (!Y) && (Cin != 0.0)) || ((Xbar && Y && (Cin != 0.0)) ||
    ((X != 0.0) && Y && (Cin != 0.0))));
  *AMA4Cout = X;
}

//
// File trailer for AMA4FA.cpp
//
// [EOF]
//
