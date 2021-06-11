/*
 * File: EXACT_ETM.c
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 01-Sep-2018 11:58:36
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "EXACT_ETM.h"

/* Function Declarations */
static double rt_powd_snf(double u0, double u1);
static double rt_roundd_snf(double u);

/* Function Definitions */

/*
 * Arguments    : double u0
 *                double u1
 * Return Type  : double
 */
static double rt_powd_snf(double u0, double u1)
{
  double y;
  double d0;
  double d1;
  if (rtIsNaN(u0) || rtIsNaN(u1)) {
    y = rtNaN;
  } else {
    d0 = fabs(u0);
    d1 = fabs(u1);
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
      y = sqrt(u0);
    } else if ((u0 < 0.0) && (u1 > floor(u1))) {
      y = rtNaN;
    } else {
      y = pow(u0, u1);
    }
  }

  return y;
}

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
unsigned int EXACT_ETM(double a, double b)
{
  unsigned int res;
  double pp;
  unsigned short b_a;
  unsigned short b_b;
  unsigned short c;
  unsigned short b_c;
  int i;
  unsigned char lower_approx;
  int first_one;
  boolean_T exitg1;
  signed char lower_approx_bin[16];
  double d;
  unsigned int q0;
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

  c = (unsigned short)((unsigned int)(b_a & 65280) >> 8);
  b_c = (unsigned short)((unsigned int)(b_b & 65280) >> 8);
  if ((c == 0) || (b_c == 0)) {
    res = (unsigned int)(b_a & 255) * (b_b & 255);

    /*          res = bitor(bitshift(uint32(upper_a),16),res); */
    /*          res = bitor(bitshift(uint32(upper_b),16),res); */
  } else {
    /*      elseif(upper_a == 0) */
    /*          res = bitshift(uint32(bitshift(lower_a,16)*upper_b),-16); */
    /*          return */
    /*      elseif(upper_b == 0) */
    /*          res = bitshift(uint32(bitshift(lower_b,16)*upper_a),-16); */
    /*          return */
    /*      end */
    i = (int)((unsigned int)(b_a & 255) | (b_b & 255));
    if ((unsigned int)i > 255U) {
      i = 255;
    }

    lower_approx = (unsigned char)i;
    first_one = -7;
    i = 0;
    exitg1 = false;
    while ((!exitg1) && (i < 8)) {
      if (lower_approx >= (int)rt_powd_snf(2.0, 7.0 + -(double)i)) {
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
      if (lower_approx_bin[i] != 0) {
        d += pp * (double)lower_approx_bin[i];
      }

      pp *= 2.0;
    }

    q0 = ((unsigned int)c * b_c) << 16U;
    if (d < 4.294967296E+9) {
      u0 = (unsigned int)d;
    } else if (d >= 4.294967296E+9) {
      u0 = MAX_uint32_T;
    } else {
      u0 = 0U;
    }

    res = q0 + u0;
    if (res < q0) {
      res = MAX_uint32_T;
    }
  }

  return res;
}

/*
 * File trailer for EXACT_ETM.c
 *
 * [EOF]
 */
