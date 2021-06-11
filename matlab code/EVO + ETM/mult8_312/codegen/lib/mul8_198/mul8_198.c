/*
 * File: mul8_198.c
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 31-Aug-2018 03:27:41
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "mul8_198.h"

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
 * Approximate function mul8_198
 *   Library = EvoApprox8b
 *   Circuit = mul8_198
 *   Area   (180) = 5365
 *   Delay  (180) = 2.330
 *   Power  (180) = 1928.60
 *   Area   (45) = 403
 *   Delay  (45) = 0.880
 *   Power  (45) = 162.70
 *   Nodes = 112
 *   HD = 385676
 *   MAE = 575.77652
 *   MSE = 635894.14844
 *   MRE = 8.07 %
 *   WCE = 2882
 *   WCRE = 312 %
 *   EP = 99.1 %
 * Arguments    : double a
 *                double b
 * Return Type  : unsigned short
 */
unsigned short mul8_198(double a, double b)
{
  unsigned short c;
  double d0;
  unsigned short b_a;
  unsigned short b_b;
  unsigned short n0;
  unsigned short n2;
  unsigned short n4;
  unsigned short n6;
  unsigned short n8;
  unsigned short n10;
  unsigned short n12;
  unsigned short n14;
  unsigned short n16;
  unsigned short n18;
  unsigned short n20;
  unsigned short n22;
  unsigned short n24;
  unsigned short n26;
  unsigned short n28;
  unsigned short n30;
  unsigned short n51;
  unsigned short n53;
  unsigned short n57;
  unsigned short n73;
  unsigned short n91;
  unsigned short b_c;
  unsigned short n157;
  unsigned short n167;
  unsigned short n420;
  unsigned short n476;
  unsigned short c_c;
  unsigned short n712;
  unsigned short n728;
  unsigned short n802;
  unsigned short n816;
  unsigned short n817;
  unsigned short n832;
  unsigned short n846;
  unsigned short n891;
  unsigned short n906;
  unsigned short n920;
  unsigned short n921;
  unsigned short n934;
  unsigned short n950;
  unsigned short n1069;
  unsigned short n1334;
  unsigned short n1350;
  d0 = rt_roundd_snf(a);
  if (d0 < 65536.0) {
    if (d0 >= 0.0) {
      b_a = (unsigned short)d0;
    } else {
      b_a = 0;
    }
  } else if (d0 >= 65536.0) {
    b_a = MAX_uint16_T;
  } else {
    b_a = 0;
  }

  d0 = rt_roundd_snf(b);
  if (d0 < 65536.0) {
    if (d0 >= 0.0) {
      b_b = (unsigned short)d0;
    } else {
      b_b = 0;
    }
  } else if (d0 >= 65536.0) {
    b_b = MAX_uint16_T;
  } else {
    b_b = 0;
  }

  n0 = (unsigned short)(b_a & 1);
  n2 = (unsigned short)((int)((unsigned int)b_a >> 1) & 1);
  n4 = (unsigned short)((int)((unsigned int)b_a >> 2) & 1);
  n6 = (unsigned short)((int)((unsigned int)b_a >> 3) & 1);
  n8 = (unsigned short)((int)((unsigned int)b_a >> 4) & 1);
  n10 = (unsigned short)((int)((unsigned int)b_a >> 5) & 1);
  n12 = (unsigned short)((int)((unsigned int)b_a >> 6) & 1);
  n14 = (unsigned short)((int)((unsigned int)b_a >> 7) & 1);
  n16 = (unsigned short)(b_b & 1);
  n18 = (unsigned short)((int)((unsigned int)b_b >> 1) & 1);
  n20 = (unsigned short)((int)((unsigned int)b_b >> 2) & 1);
  n22 = (unsigned short)((int)((unsigned int)b_b >> 3) & 1);
  n24 = (unsigned short)((int)((unsigned int)b_b >> 4) & 1);
  n26 = (unsigned short)((int)((unsigned int)b_b >> 5) & 1);
  n28 = (unsigned short)((int)((unsigned int)b_b >> 6) & 1);
  n30 = (unsigned short)((int)((unsigned int)b_b >> 7) & 1);
  b_b = (unsigned short)(n26 & n8);
  n51 = (unsigned short)((n0 & 65535) | (n0 & n2) | (n2 & 65535));
  n53 = (unsigned short)~(unsigned short)((n12 | n51) & n30);
  n57 = (unsigned short)(n2 | MAX_uint16_T);
  n73 = (unsigned short)(n57 & b_b);
  n0 = (unsigned short)~(unsigned short)(n6 | (n4 | n14));
  n91 = (unsigned short)~(unsigned short)(n30 | n24 | (n28 | ((n14 & n16) | (n16
    & n26) | (n14 & n26))));
  b_a = (unsigned short)(n20 & 65535);
  c = (unsigned short)((b_b & b_a) | (b_a & n51));
  b_c = (unsigned short)(b_b & n51);
  n157 = (unsigned short)~(unsigned short)((n53 & n0) | n91);
  n167 = (unsigned short)~(unsigned short)(n0 & 65535);
  b_b = (unsigned short)(n22 | n20);
  n420 = (unsigned short)(n26 & (n6 | n8));
  n476 = (unsigned short)(n12 & n22);
  n22 &= n14;
  c_c = (unsigned short)(n167 & (n16 & n91));
  b_a = (unsigned short)(n10 & n24);
  n0 = (unsigned short)(n12 & n24);
  n16 = (unsigned short)(n14 & n24);
  n91 = (unsigned short)(n10 & n26);
  n712 = (unsigned short)(n12 & n26);
  n728 = (unsigned short)(n14 & n26);
  n802 = (unsigned short)(n8 & n28);
  n816 = (unsigned short)(n10 & n28);
  n817 = (unsigned short)(n10 & n28);
  n832 = (unsigned short)(n12 & n28);
  n846 = (unsigned short)(n14 & n28);
  n891 = (unsigned short)(n4 & n30);
  n906 = (unsigned short)(n6 & n30);
  n920 = (unsigned short)(n8 & n30);
  n921 = (unsigned short)(n8 & n30);
  n934 = (unsigned short)(n10 & n30);
  n950 = (unsigned short)(n12 & n30);
  n1069 = (unsigned short)(n8 & b_b & 65535);
  b_b = (unsigned short)((n10 & b_b) | (n8 & n24));
  n26 = (unsigned short)(n476 ^ b_a);
  b_a &= n476;
  n8 = (unsigned short)(n22 ^ n0 ^ n91);
  n91 = (unsigned short)((n22 & n0) | (n0 & n91) | (n22 & n91));
  n476 = (unsigned short)(n16 & n712);
  n712 ^= n16;
  n24 = (unsigned short)(n157 | (unsigned short)(n12 & (n20 & 65535)));
  n1334 = (unsigned short)(n817 ^ n1069 ^ b_b);
  n20 = (unsigned short)((n817 & n1069) | (n1069 & b_b) | (n817 & b_b));
  n1350 = (unsigned short)(n891 ^ n420 ^ n26);
  n420 = (unsigned short)((n891 & n420) | (n420 & n26) | (n891 & n26));
  n0 = (unsigned short)(b_a ^ n802 ^ n906);
  n26 = (unsigned short)((b_a & n802) | (n802 & n906) | (b_a & n906));
  b_a = (unsigned short)(n91 ^ n816 ^ n920);
  n22 = (unsigned short)((n91 & n816) | (n816 & n920) | (n91 & n920));
  b_b = (unsigned short)(n476 ^ n832 ^ n934);
  n16 = (unsigned short)((n476 & n832) | (n832 & n934) | (n476 & n934));
  n10 = (unsigned short)(n846 ^ n950);
  n802 = (unsigned short)(n1350 & n20);
  n906 = (unsigned short)(n8 ^ n476 ^ n0);
  n891 = (unsigned short)((n8 & n476) | (n476 & n0) | (n8 & n0));
  n0 = (unsigned short)(n712 & b_a);
  b_a |= n712;
  n91 = (unsigned short)(n728 & b_b);
  b_b ^= n728;
  n817 = (unsigned short)((unsigned short)(n24 & (unsigned short)~(unsigned
    short)((unsigned short)~(unsigned short)((n57 | n12) & n51) & n30)) |
    (unsigned short)((unsigned short)~n24 & n26));
  n1069 = (unsigned short)((n906 & n802) | (n802 & n420) | (n906 & n420));
  n8 = (unsigned short)(b_a ^ n891 ^ n26);
  n712 = (unsigned short)((b_a & n891) | (n891 & n26) | (b_a & n26));
  n24 = (unsigned short)(b_b ^ n0 ^ n22);
  n26 = (unsigned short)((b_b & n0) | (n0 & n22) | (b_b & n22));
  n476 = (unsigned short)(n10 ^ n91 ^ n16);
  n16 = (unsigned short)((n10 & n91) | (n91 & n16) | (n10 & n16));
  b_a = (unsigned short)((n14 & n30) ^ (n846 & n950));
  b_b = (unsigned short)(n8 & n1069);
  n0 = (unsigned short)((n24 & n712) | (n712 & b_b) | (n24 & b_b));
  n91 = (unsigned short)((n476 & n26) | (n26 & n0) | (n476 & n0));
  n22 = (unsigned short)((n157 & 1) << 1);
  return (unsigned short)(n73 | n22 | n891 << 2 | (n921 | n1334) << 3 |
    ((unsigned short)((unsigned short)(n921 ^ (unsigned short)~(unsigned short)
    (n73 ^ (unsigned short)~c_c)) | (unsigned short)~(unsigned short)~(unsigned
    short)(c | b_c | (n18 & n4))) & 1) << 4 | (n817 & 1) << 5 | (n157 & 1) << 6 |
    (n817 & 1) << 7 | ((unsigned short)((unsigned short)(n1334 | (unsigned short)
    ~(unsigned short)~(unsigned short)((n18 & n14) | (n18 & n12))) | (unsigned
    short)(((unsigned short)(n167 & 65535) | (unsigned short)((unsigned short)
    ~n167 & n2)) & n28)) & 1) << 8 | ((unsigned short)((unsigned short)(n1350 ^
    n20) | (unsigned short)~(unsigned short)~(unsigned short)(n6 & n28)) & 1) <<
    9 | (n906 ^ n802 ^ n420) << 10 | (n8 ^ n1069) << 11 | (n24 ^ n712 ^ b_b) <<
    12 | (n476 ^ n26 ^ n0) << 13 | (b_a ^ n16 ^ n91) << 14 | ((unsigned short)
    ((unsigned short)((unsigned short)~(unsigned short)~(unsigned short)(n12 &
    (n28 & n14)) & (unsigned short)~n53 & 65535) | (unsigned short)((b_a & n16) |
    (n16 & n91) | (b_a & n91))) & 1) << 15);
}

/*
 * File trailer for mul8_198.c
 *
 * [EOF]
 */
