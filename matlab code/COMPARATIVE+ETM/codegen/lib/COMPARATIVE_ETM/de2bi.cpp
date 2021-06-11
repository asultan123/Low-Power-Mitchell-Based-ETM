//
// File: de2bi.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 21:26:41
//

// Include Files
#include "rt_nonfinite.h"
#include "COMPARATIVE_ETM.h"
#include "de2bi.h"

// Function Declarations
static double rt_remd_snf(double u0, double u1);

// Function Definitions

//
// Arguments    : double u0
//                double u1
// Return Type  : double
//
static double rt_remd_snf(double u0, double u1)
{
  double y;
  double b_u1;
  double q;
  if (!((!rtIsNaN(u0)) && (!rtIsInf(u0)) && ((!rtIsNaN(u1)) && (!rtIsInf(u1)))))
  {
    y = rtNaN;
  } else {
    if (u1 < 0.0) {
      b_u1 = std::ceil(u1);
    } else {
      b_u1 = std::floor(u1);
    }

    if ((u1 != 0.0) && (u1 != b_u1)) {
      q = std::abs(u0 / u1);
      if (std::abs(q - std::floor(q + 0.5)) <= DBL_EPSILON * q) {
        y = 0.0 * u0;
      } else {
        y = std::fmod(u0, u1);
      }
    } else {
      y = std::fmod(u0, u1);
    }
  }

  return y;
}

//
// Arguments    : double d
//                double b[16]
// Return Type  : void
//
void b_de2bi(double d, double b[16])
{
  int j;
  double tmp;
  memset(&b[0], 0, sizeof(double) << 4);
  j = 1;
  tmp = d;
  while ((j <= 16) && (tmp > 0.0)) {
    b[j - 1] = rt_remd_snf(tmp, 2.0);
    tmp = std::floor(tmp / 2.0);
    j++;
  }
}

//
// Arguments    : unsigned char d
//                unsigned char b[8]
// Return Type  : void
//
void de2bi(unsigned char d, unsigned char b[8])
{
  int j;
  int tmp;
  for (j = 0; j < 8; j++) {
    b[j] = 0;
  }

  j = 1;
  tmp = d;
  while ((j <= 8) && (tmp > 0)) {
    b[j - 1] = (unsigned char)rt_remd_snf((double)tmp, 2.0);
    tmp = (int)std::floor((double)tmp / 2.0);
    j++;
  }
}

//
// File trailer for de2bi.cpp
//
// [EOF]
//
