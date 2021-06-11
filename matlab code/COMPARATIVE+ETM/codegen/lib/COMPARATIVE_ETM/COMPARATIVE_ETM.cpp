//
// File: COMPARATIVE_ETM.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 21:26:41
//

// Include Files
#include "rt_nonfinite.h"
#include "COMPARATIVE_ETM.h"
#include "mult_selector.h"
#include "bi2de.h"

// Function Declarations
static double rt_powd_snf(double u0, double u1);
static double rt_roundd_snf(double u);

// Function Definitions

//
// Arguments    : double u0
//                double u1
// Return Type  : double
//
static double rt_powd_snf(double u0, double u1)
{
  double y;
  double d0;
  double d1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d0 = std::abs(u0);
    d1 = std::abs(u1);
    if (rtIsInf(u1)) {
      if (d0 == 1.0) {
        y = 1.0;
      } else if (d0 > 1.0) {
        if (u1 > 0.0) {
          y = rtInf;
        } else {
          y = 0.0;
        }
      } else if (u1 > 0.0) {
        y = 0.0;
      } else {
        y = rtInf;
      }
    } else if (d1 == 0.0) {
      y = 1.0;
    } else if (d1 == 1.0) {
      if (u1 > 0.0) {
        y = u0;
      } else {
        y = 1.0 / u0;
      }
    } else if (u1 == 2.0) {
      y = u0 * u0;
    } else if ((u1 == 0.5) && (u0 >= 0.0)) {
      y = std::sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > std::floor(u1))) {
      y = rtNaN;
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

//
// Arguments    : double u
// Return Type  : double
//
static double rt_roundd_snf(double u)
{
  double y;
  if (std::abs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = std::floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = std::ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

//
// Arguments    : double a
//                double b
//                double selector
// Return Type  : unsigned int
//
unsigned int COMPARATIVE_ETM(double a, double b, double selector)
{
  unsigned int res;
  double pp;
  unsigned short b_a;
  unsigned short b_b;
  unsigned char upper_a;
  unsigned char upper_b;
  unsigned char lower_a;
  unsigned char lower_b;
  unsigned int c_a;
  int first_one;
  int i;
  boolean_T exitg1;
  signed char lower_approx_bin[16];
  double d;
  unsigned int q0;
  pp = rt_roundd_snf(a);
  if (pp < 65536.0) {
    if (pp >= 0.0) {
      b_a = (unsigned short)pp;
    } else {
      b_a = 0;
    }
  } else if (pp >= 65536.0) {
    b_a = MAX_uint16_T;
  } else {
    b_a = 0;
  }

  pp = rt_roundd_snf(b);
  if (pp < 65536.0) {
    if (pp >= 0.0) {
      b_b = (unsigned short)pp;
    } else {
      b_b = 0;
    }
  } else if (pp >= 65536.0) {
    b_b = MAX_uint16_T;
  } else {
    b_b = 0;
  }

  upper_a = (unsigned char)((unsigned int)(b_a & 65280) >> 8);
  upper_b = (unsigned char)((unsigned int)(b_b & 65280) >> 8);
  lower_a = (unsigned char)(b_a & 255);
  lower_b = (unsigned char)(b_b & 255);
  if ((upper_a == 0) || (upper_b == 0)) {
    pp = rt_roundd_snf(mult_selector(lower_a, lower_b, selector));
    if (pp < 4.294967296E+9) {
      if (pp >= 0.0) {
        res = (unsigned int)pp;
      } else {
        res = 0U;
      }
    } else if (pp >= 4.294967296E+9) {
      res = MAX_uint32_T;
    } else {
      res = 0U;
    }
  } else {
    pp = rt_roundd_snf(mult_selector(upper_a, upper_b, selector));
    if (pp < 4.294967296E+9) {
      if (pp >= 0.0) {
        c_a = (unsigned int)pp;
      } else {
        c_a = 0U;
      }
    } else if (pp >= 4.294967296E+9) {
      c_a = MAX_uint32_T;
    } else {
      c_a = 0U;
    }

    upper_a = (unsigned char)(lower_a | lower_b);
    first_one = -7;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 8)) {
      if (upper_a >= (int)rt_powd_snf(2.0, 7.0 + -(double)i)) {
        first_one = -i;
        exitg1 = true;
      } else {
        i++;
      }
    }

    for (i = 0; i < 16; i++) {
      lower_approx_bin[i] = 0;
    }

    for (i = 0; i <= first_one + 15; i++) {
      lower_approx_bin[i - first_one] = 1;
    }

    for (i = 0; i < 8; i++) {
      first_one = lower_approx_bin[i];
      lower_approx_bin[i] = lower_approx_bin[15 - i];
      lower_approx_bin[15 - i] = (signed char)first_one;
    }

    pp = 1.0;
    d = 0.0;
    for (i = 0; i < 16; i++) {
      UPDATE_DECIMAL(&d, pp, (double)lower_approx_bin[i]);
      pp *= 2.0;
    }

    q0 = c_a << 16U;
    pp = rt_roundd_snf(d);
    if (pp < 4.294967296E+9) {
      if (pp >= 0.0) {
        c_a = (unsigned int)pp;
      } else {
        c_a = 0U;
      }
    } else if (pp >= 4.294967296E+9) {
      c_a = MAX_uint32_T;
    } else {
      c_a = 0U;
    }

    res = q0 + c_a;
    if (res < q0) {
      res = MAX_uint32_T;
    }
  }

  return res;
}

//
// File trailer for COMPARATIVE_ETM.cpp
//
// [EOF]
//
