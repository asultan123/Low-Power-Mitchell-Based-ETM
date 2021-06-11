/*
 * File: MITCHELL_ETM.c
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 02-Sep-2018 17:52:20
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "MITCHELL_ETM.h"
#include "mitchell.h"
#include "log_approx.h"
#include "MITCHELL_ETM_rtwutil.h"

/* Function Declarations */
static double rt_roundd_snf(double u);

/* Function Definitions */

/*
 * Arguments    : double u
 * Return Type  : double
 */
static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/*
 * Arguments    : double a
 *                double b
 * Return Type  : unsigned int
 */
unsigned int MITCHELL_ETM(double a, double b)
{
  unsigned int res;
  double pp;
  unsigned short b_a;
  unsigned short b_b;
  unsigned char upper_a;
  unsigned char upper_b;
  unsigned char lower_a;
  unsigned char lower_b;
  int first_one;
  int i;
  boolean_T exitg1;
  signed char lower_approx_bin[16];
  double d;
  unsigned int u0;
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
    res = mitchell(lower_a, lower_b);

    /*          res = bitor(bitshift(uint32(upper_a),16),res); */
    /*          res = bitor(bitshift(uint32(upper_b),16),res); */
  } else {
    lower_a |= lower_b;
    first_one = 0;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 8)) {
      if (lower_a >= (int)rt_powd_snf(2.0, 7.0 + -(double)i)) {
        first_one = 7 - i;
        exitg1 = true;
      } else {
        i++;
      }
    }

    for (i = 0; i < 16; i++) {
      lower_approx_bin[i] = 0;
    }

    for (i = 0; i <= first_one + 8; i++) {
      lower_approx_bin[(i - first_one) + 7] = 1;
    }

    for (i = 0; i < 8; i++) {
      first_one = lower_approx_bin[i];
      lower_approx_bin[i] = lower_approx_bin[15 - i];
      lower_approx_bin[15 - i] = (signed char)first_one;
    }

    pp = 1.0;
    d = 0.0;
    for (i = 0; i < 16; i++) {
      if (lower_approx_bin[i] != 0) {
        d += pp;
      }

      pp *= 2.0;
    }

    if (d < 4.294967296E+9) {
      u0 = (unsigned int)d;
    } else {
      u0 = MAX_uint32_T;
    }

    res = (unsigned int)mitchell(upper_a, upper_b) << 16 | u0;
  }

  return res;
}

/*
 * File trailer for MITCHELL_ETM.c
 *
 * [EOF]
 */
