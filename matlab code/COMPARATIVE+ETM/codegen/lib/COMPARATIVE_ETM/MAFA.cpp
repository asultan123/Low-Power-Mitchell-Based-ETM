//
// File: MAFA.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 21:26:41
//

// Include Files
#include "rt_nonfinite.h"
#include "COMPARATIVE_ETM.h"
#include "MAFA.h"

// Function Definitions

//
// X=[0 0 0 0 1 1 1 1];
//  Y=[0 0 1 1 0 0 1 1];
//  Cin=[0 1 0 1 0 1 0 1];
// Arguments    : double X
//                boolean_T Y
//                double Cin
//                boolean_T *MAFACout
//                boolean_T *MAFASum
// Return Type  : void
//
void MAFA(double X, boolean_T Y, double Cin, boolean_T *MAFACout, boolean_T
          *MAFASum)
{
  *MAFASum = (((((X != 0.0) ^ Y) != 0) ^ (Cin != 0.0)) != 0);
  *MAFACout = (((X != 0.0) && Y) || (Y && (Cin != 0.0)) || ((X != 0.0) && (Cin
    != 0.0)));
}

//
// X=[0 0 0 0 1 1 1 1];
//  Y=[0 0 1 1 0 0 1 1];
//  Cin=[0 1 0 1 0 1 0 1];
// Arguments    : double X
//                boolean_T Y
//                boolean_T Cin
//                boolean_T *MAFACout
//                boolean_T *MAFASum
// Return Type  : void
//
void b_MAFA(double X, boolean_T Y, boolean_T Cin, boolean_T *MAFACout, boolean_T
            *MAFASum)
{
  *MAFASum = (((((X != 0.0) ^ Y) != 0) ^ Cin) != 0);
  *MAFACout = (((X != 0.0) && Y) || (Y && Cin) || ((X != 0.0) && Cin));
}

//
// X=[0 0 0 0 1 1 1 1];
//  Y=[0 0 1 1 0 0 1 1];
//  Cin=[0 1 0 1 0 1 0 1];
// Arguments    : double X
//                double Y
//                double Cin
//                boolean_T *MAFACout
//                boolean_T *MAFASum
// Return Type  : void
//
void c_MAFA(double X, double Y, double Cin, boolean_T *MAFACout, boolean_T
            *MAFASum)
{
  *MAFASum = (((((X != 0.0) ^ (Y != 0.0)) != 0) ^ (Cin != 0.0)) != 0);
  *MAFACout = (((X != 0.0) && (Y != 0.0)) || ((Y != 0.0) && (Cin != 0.0)) || ((X
    != 0.0) && (Cin != 0.0)));
}

//
// X=[0 0 0 0 1 1 1 1];
//  Y=[0 0 1 1 0 0 1 1];
//  Cin=[0 1 0 1 0 1 0 1];
// Arguments    : boolean_T X
//                boolean_T Y
//                double Cin
//                boolean_T *MAFACout
//                boolean_T *MAFASum
// Return Type  : void
//
void d_MAFA(boolean_T X, boolean_T Y, double Cin, boolean_T *MAFACout, boolean_T
            *MAFASum)
{
  *MAFASum = ((((X ^ Y) != 0) ^ (Cin != 0.0)) != 0);
  *MAFACout = ((X && Y) || (Y && (Cin != 0.0)) || (X && (Cin != 0.0)));
}

//
// File trailer for MAFA.cpp
//
// [EOF]
//
