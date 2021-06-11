//
// File: mul8_429.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 13:44:33
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_selector.h"
#include "mul8_429.h"
#include "mul8_347.h"
#include "mult_selector_rtwutil.h"

// Function Definitions

//
// Approximate function mul8_429
//   Library = EvoApprox8b
//   Circuit = mul8_429
//   Area   (180) = 4919
//   Delay  (180) = 2.330
//   Power  (180) = 1731.40
//   Area   (45) = 367
//   Delay  (45) = 0.880
//   Power  (45) = 146.30
//   Nodes = 100
//   HD = 371398
//   MAE = 617.15933
//   MSE = 726404.50781
//   MRE = 9.10 %
//   WCE = 3042
//   WCRE = 500 %
//   EP = 99.1 %
// Arguments    : double a
//                double b
// Return Type  : unsigned short
//
unsigned short mul8_429(double a, double b)
{
  unsigned short c;
  double d9;
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
  unsigned short n18;
  unsigned short n20;
  unsigned short n22;
  unsigned short n24;
  unsigned short n26;
  unsigned short n28;
  unsigned short n30;
  unsigned short n42;
  unsigned short n53;
  unsigned short n120;
  unsigned short n121;
  unsigned short n157;
  unsigned short n175;
  unsigned short n420;
  unsigned short n491;
  unsigned short n595;
  unsigned short n608;
  unsigned short n698;
  unsigned short n712;
  unsigned short n728;
  unsigned short n802;
  unsigned short n816;
  unsigned short n817;
  unsigned short n832;
  unsigned short n846;
  unsigned short n920;
  unsigned short n921;
  unsigned short n934;
  unsigned short n950;
  unsigned short n1335;
  unsigned short n1350;
  unsigned short n1351;
  d9 = rt_roundd_snf(a);
  if (d9 < 65536.0) {
    if (d9 >= 0.0) {
      b_a = (unsigned short)d9;
    } else {
      b_a = 0;
    }
  } else if (d9 >= 65536.0) {
    b_a = MAX_uint16_T;
  } else {
    b_a = 0;
  }

  d9 = rt_roundd_snf(b);
  if (d9 < 65536.0) {
    if (d9 >= 0.0) {
      b_b = (unsigned short)d9;
    } else {
      b_b = 0;
    }
  } else if (d9 >= 65536.0) {
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
  b_a = (unsigned short)(b_b & 1);
  n18 = (unsigned short)((int)((unsigned int)b_b >> 1) & 1);
  n20 = (unsigned short)((int)((unsigned int)b_b >> 2) & 1);
  n22 = (unsigned short)((int)((unsigned int)b_b >> 3) & 1);
  n24 = (unsigned short)((int)((unsigned int)b_b >> 4) & 1);
  n26 = (unsigned short)((int)((unsigned int)b_b >> 5) & 1);
  n28 = (unsigned short)((int)((unsigned int)b_b >> 6) & 1);
  n30 = (unsigned short)((int)((unsigned int)b_b >> 7) & 1);
  n42 = (unsigned short)~(unsigned short)(n18 & (n0 & (unsigned short)~(unsigned
    short)(n10 | n6)));
  n53 = (unsigned short)~(unsigned short)((n12 | ((n0 & 65535) | (n0 & n2) | (n2
    & 65535))) & n30);
  b_b = (unsigned short)~(unsigned short)(n30 | n24 | (n28 | ((n14 & b_a) | (b_a
    & n26) | (n14 & n26))));
  b_a = (unsigned short)(b_b & n20);
  n120 = (unsigned short)(n12 & b_a);
  n121 = (unsigned short)(n12 & b_a);
  n157 = (unsigned short)~(unsigned short)((n53 & (unsigned short)~(unsigned
    short)(n6 | (n4 | n14))) | b_b);
  n175 = (unsigned short)~(unsigned short)~(unsigned short)(n6 | (n4 | n14));
  n420 = (unsigned short)(n26 & (n6 | n8));
  b_b = (unsigned short)(n12 & n22);
  n491 = (unsigned short)(n14 & n22);
  n0 = (unsigned short)(n10 & n24);
  n595 = (unsigned short)(n12 & n24);
  n608 = (unsigned short)(n14 & n24);
  n698 = (unsigned short)(n10 & n26);
  n712 = (unsigned short)(n12 & n26);
  n728 = (unsigned short)(n14 & n26);
  n802 = (unsigned short)(n8 & n28);
  n816 = (unsigned short)(n10 & n28);
  n817 = (unsigned short)(n10 & n28);
  n832 = (unsigned short)(n12 & n28);
  n846 = (unsigned short)(n14 & n28);
  n4 &= n30;
  n6 &= n30;
  n920 = (unsigned short)(n8 & n30);
  n921 = (unsigned short)(n8 & n30);
  n934 = (unsigned short)(n10 & n30);
  n950 = (unsigned short)(n12 & n30);
  b_a = (unsigned short)((n10 & (n22 | n20)) | (n8 & n24));
  n26 = (unsigned short)(b_b ^ n0);
  n22 = (unsigned short)(b_b & n0);
  n20 = (unsigned short)(n491 ^ n595 ^ n698);
  b_b = (unsigned short)((n491 & n595) | (n595 & n698) | (n491 & n698));
  n595 = (unsigned short)(n608 & n712);
  n698 = (unsigned short)(n608 ^ n712);
  n24 = (unsigned short)(n157 | n120);
  n1335 = (unsigned short)((n817 & 65535) | (b_a & 65535) | (n817 & b_a));
  n1350 = (unsigned short)(n4 ^ n420 ^ n26);
  n1351 = (unsigned short)((n4 & n420) | (n420 & n26) | (n4 & n26));
  n0 = (unsigned short)(n22 ^ n802 ^ n6);
  n491 = (unsigned short)((n22 & n802) | (n802 & n6) | (n22 & n6));
  b_a = (unsigned short)(b_b ^ n816 ^ n920);
  n4 = (unsigned short)((b_b & n816) | (n816 & n920) | (b_b & n920));
  b_b = (unsigned short)(n595 ^ n832 ^ n934);
  n6 = (unsigned short)((n595 & n832) | (n832 & n934) | (n595 & n934));
  n22 = (unsigned short)(n846 ^ n950);
  n817 = (unsigned short)(n1350 & n1335);
  n420 = (unsigned short)(n20 ^ n595 ^ n0);
  n712 = (unsigned short)((n20 & n595) | (n595 & n0) | (n20 & n0));
  n0 = (unsigned short)(n698 & b_a);
  b_a |= n698;
  n26 = (unsigned short)(n728 & b_b);
  b_b ^= n728;
  c = (unsigned short)(n921 | (n10 | (n42 | n12)));
  n24 = (unsigned short)((unsigned short)(n24 & 65535) | (unsigned short)
    ((unsigned short)~n24 & n491));
  n8 = (unsigned short)((n420 & n817) | (n817 & n1351) | (n420 & n1351));
  n608 = (unsigned short)(b_a ^ n712 ^ n491);
  n698 = (unsigned short)((b_a & n712) | (n712 & n491) | (b_a & n491));
  n20 = (unsigned short)(b_b ^ n0 ^ n4);
  n491 = (unsigned short)((b_b & n0) | (n0 & n4) | (b_b & n4));
  n595 = (unsigned short)(n22 ^ n26 ^ n6);
  n22 = (unsigned short)((n22 & n26) | (n26 & n6) | (n22 & n6));
  b_b = (unsigned short)((n14 & n30) ^ (n846 & n950));
  n0 = (unsigned short)(n608 & n8);
  n26 = (unsigned short)((n20 & n698) | (n698 & n0) | (n20 & n0));
  n4 = (unsigned short)((n595 & n491) | (n491 & n26) | (n595 & n26));
  n6 = (unsigned short)((n157 & 1) << 1);
  b_a = (unsigned short)((unsigned short)~(unsigned short)(n120 ^ (n42 | n12)) &
    1);
  return (unsigned short)(n121 | n6 | b_a << 2 | ((unsigned short)~c & 1) << 3 |
    ((unsigned short)(n921 ^ n121) & 1) << 4 | (n24 & 1) << 5 | (n157 & 1) << 6 |
    (n24 & 1) << 7 | ((unsigned short)((unsigned short)(n712 | (unsigned short)
    ~(unsigned short)~(unsigned short)((n18 & n14) | (n18 & n12))) | (unsigned
    short)(((unsigned short)(n175 & 65535) | (unsigned short)((unsigned short)
    ~n175 & n2)) & n28)) & 1) << 8 | (n1350 ^ n1335) << 9 | (n420 ^ n817 ^ n1351)
    << 10 | (n608 ^ n8) << 11 | (n20 ^ n698 ^ n0) << 12 | (n595 ^ n491 ^ n26) <<
    13 | (b_b ^ n22 ^ n4) << 14 | ((unsigned short)((unsigned short)((unsigned
    short)~(unsigned short)~(unsigned short)(n12 & (n28 & n14)) & (unsigned
    short)~n53 & 65535) | (unsigned short)((b_b & n22) | (n22 & n4) | (b_b & n4)))
    & 1) << 15);
}

//
// File trailer for mul8_429.cpp
//
// [EOF]
//
