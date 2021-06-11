//
// File: mul8_478.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 13:44:33
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_selector.h"
#include "mul8_478.h"
#include "mul8_347.h"
#include "mult_selector_rtwutil.h"

// Function Definitions

//
// Approximate function mul8_478
//   Library = EvoApprox8b
//   Circuit = mul8_478
//   Area   (180) = 5888
//   Delay  (180) = 4.760
//   Power  (180) = 2539.10
//   Area   (45) = 423
//   Delay  (45) = 1.730
//   Power  (45) = 220.60
//   Nodes = 95
//   HD = 304762
//   MAE = 160.06265
//   MSE = 41894.16065
//   MRE = 4.01 %
//   WCE = 1033
//   WCRE = 100 %
//   EP = 97.7 %
// Arguments    : double a
//                double b
// Return Type  : unsigned short
//
unsigned short mul8_478(double a, double b)
{
  unsigned short c;
  double d4;
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
  unsigned short n39;
  unsigned short n41;
  unsigned short n81;
  unsigned short n201;
  unsigned short n264;
  unsigned short n414;
  unsigned short n415;
  unsigned short n498;
  unsigned short n682;
  unsigned short n882;
  unsigned short n898;
  unsigned short n914;
  unsigned short n932;
  unsigned short n998;
  unsigned short n1148;
  unsigned short n1164;
  unsigned short n1182;
  unsigned short n1214;
  unsigned short n1398;
  unsigned short n1414;
  unsigned short n1514;
  unsigned short n1632;
  unsigned short n1664;
  unsigned short n1682;
  d4 = rt_roundd_snf(a);
  if (d4 < 65536.0) {
    if (d4 >= 0.0) {
      b_a = (unsigned short)d4;
    } else {
      b_a = 0;
    }
  } else if (d4 >= 65536.0) {
    b_a = MAX_uint16_T;
  } else {
    b_a = 0;
  }

  d4 = rt_roundd_snf(b);
  if (d4 < 65536.0) {
    if (d4 >= 0.0) {
      b_b = (unsigned short)d4;
    } else {
      b_b = 0;
    }
  } else if (d4 >= 65536.0) {
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
  n18 = (unsigned short)((int)((unsigned int)b_b >> 1) & 1);
  n20 = (unsigned short)((int)((unsigned int)b_b >> 2) & 1);
  n22 = (unsigned short)((int)((unsigned int)b_b >> 3) & 1);
  n24 = (unsigned short)((int)((unsigned int)b_b >> 4) & 1);
  n26 = (unsigned short)((int)((unsigned int)b_b >> 5) & 1);
  n28 = (unsigned short)((int)((unsigned int)b_b >> 6) & 1);
  n30 = (unsigned short)((int)((unsigned int)b_b >> 7) & 1);
  b_a = (unsigned short)~(unsigned short)(n18 & (b_b & 1 & n6));
  b_b = (unsigned short)~(unsigned short)(n22 | (b_a | n6));
  n39 = (unsigned short)~(unsigned short)(n22 | (b_a | n6));
  n41 = (unsigned short)(n2 & b_b);
  n81 = (unsigned short)(n41 & b_b);
  n201 = (unsigned short)~(unsigned short)((unsigned short)~(unsigned short)
    ((unsigned short)~(unsigned short)(n81 | n39) & (n14 & (unsigned short)
    ~(unsigned short)(n39 & (n14 & n0)) & (n22 & (unsigned short)~(unsigned
    short)(n28 | n30)))) | (unsigned short)(n28 | n39));
  n264 = (unsigned short)(n12 & n18);
  b_a = (unsigned short)(n14 & n18);
  b_b = (unsigned short)(n201 & n264);
  n414 = (unsigned short)(b_b ^ b_a);
  n415 = (unsigned short)(b_b & b_a);
  n498 = (unsigned short)(n81 & n20);
  b_a = (unsigned short)(n12 & n20);
  b_b = (unsigned short)(n14 & n20);
  n201 = (unsigned short)((unsigned short)(n201 ^ n264) | (unsigned short)(n10 &
    n20));
  n20 = (unsigned short)(n414 ^ b_a);
  b_a &= n414;
  n682 = (unsigned short)(n415 ^ b_b ^ b_a);
  n264 = (unsigned short)((n415 & b_b) | (b_b & b_a) | (n415 & b_a));
  b_a = (unsigned short)(n8 & n22);
  b_b = (unsigned short)(n10 & n22);
  n81 = (unsigned short)(n12 & n22);
  n414 = (unsigned short)(n14 & n22);
  n882 = (unsigned short)((n41 | n498) ^ (n6 & n22));
  n898 = (unsigned short)(n201 ^ b_a);
  b_a &= n201;
  n914 = (unsigned short)(n20 ^ b_b ^ b_a);
  b_a = (unsigned short)((n20 & b_b) | (b_b & b_a) | (n20 & b_a));
  n932 = (unsigned short)(n682 ^ n81 ^ b_a);
  b_a = (unsigned short)((n682 & n81) | (n81 & b_a) | (n682 & b_a));
  n20 = (unsigned short)(n264 ^ n414 ^ b_a);
  n414 = (unsigned short)((n264 & n414) | (n414 & b_a) | (n264 & b_a));
  n998 = (unsigned short)(n41 & n24);
  b_a = (unsigned short)(n6 & n24);
  n81 = (unsigned short)(n8 & n24);
  n201 = (unsigned short)(n10 & n24);
  n264 = (unsigned short)(n12 & n24);
  n415 = (unsigned short)(n14 & n24);
  b_b = (unsigned short)(n882 & n998);
  n1148 = (unsigned short)(n898 ^ b_a ^ b_b);
  b_a = (unsigned short)((n898 & b_a) | (b_a & b_b) | (n898 & b_b));
  n1164 = (unsigned short)(n914 ^ n81 ^ b_a);
  b_a = (unsigned short)((n914 & n81) | (n81 & b_a) | (n914 & b_a));
  n1182 = (unsigned short)(n932 ^ n201 ^ b_a);
  n201 = (unsigned short)((n932 & n201) | (n201 & b_a) | (n932 & b_a));
  n682 = (unsigned short)(n20 ^ n264 ^ n201);
  b_a = (unsigned short)((n20 & n264) | (n264 & n201) | (n20 & n201));
  n1214 = (unsigned short)(n414 ^ n415 ^ b_a);
  n415 = (unsigned short)((n414 & n415) | (n415 & b_a) | (n414 & b_a));
  b_a = (unsigned short)(n4 & n26);
  b_b = (unsigned short)(n6 & n26);
  n81 = (unsigned short)(n8 & n26);
  n264 = (unsigned short)(n10 & n26);
  n414 = (unsigned short)(n12 & n26);
  n20 = (unsigned short)(n14 & n26);
  n1398 = (unsigned short)(n1148 ^ b_a ^ n201);
  b_a = (unsigned short)((n1148 & b_a) | (b_a & n201) | (n1148 & n201));
  n1414 = (unsigned short)(n1164 ^ b_b ^ b_a);
  b_a = (unsigned short)((n1164 & b_b) | (b_b & b_a) | (n1164 & b_a));
  n914 = (unsigned short)(n1182 ^ n81 ^ b_a);
  b_a = (unsigned short)((n1182 & n81) | (n81 & b_a) | (n1182 & b_a));
  n898 = (unsigned short)(n682 ^ n264 ^ b_a);
  b_a = (unsigned short)((n682 & n264) | (n264 & b_a) | (n682 & b_a));
  n932 = (unsigned short)(n1214 ^ n414 ^ b_a);
  b_a = (unsigned short)((n1214 & n414) | (n414 & b_a) | (n1214 & b_a));
  n682 = (unsigned short)(n415 ^ n20 ^ b_a);
  n20 = (unsigned short)((n415 & n20) | (n20 & b_a) | (n415 & b_a));
  n1514 = (unsigned short)(n2 & n28);
  b_b = (unsigned short)(n4 & n28);
  n81 = (unsigned short)(n6 & n28);
  n201 = (unsigned short)(n8 & n28);
  n264 = (unsigned short)(n10 & n28);
  n414 = (unsigned short)(n12 & n28);
  n415 = (unsigned short)(n14 & n28);
  n1632 = (unsigned short)((n882 ^ n998) | (n2 & n26) | n1414);
  b_a = (unsigned short)(n1398 & n1514);
  n1664 = (unsigned short)(n1414 ^ b_b ^ b_a);
  b_a = (unsigned short)((n1414 & b_b) | (b_b & b_a) | (n1414 & b_a));
  n1682 = (unsigned short)(n914 ^ n81 ^ b_a);
  b_a = (unsigned short)((n914 & n81) | (n81 & b_a) | (n914 & b_a));
  n26 = (unsigned short)(n898 ^ n201 ^ b_a);
  b_a = (unsigned short)((n898 & n201) | (n201 & b_a) | (n898 & b_a));
  n28 = (unsigned short)(n932 ^ n264 ^ b_a);
  b_a = (unsigned short)((n932 & n264) | (n264 & b_a) | (n932 & b_a));
  n882 = (unsigned short)(n682 ^ n414 ^ b_a);
  b_a = (unsigned short)((n682 & n414) | (n414 & b_a) | (n682 & b_a));
  n998 = (unsigned short)(n20 ^ n415 ^ b_a);
  n1414 = (unsigned short)((n20 & n415) | (n415 & b_a) | (n20 & b_a));
  n1148 = (unsigned short)(n2 & n30);
  n1182 = (unsigned short)(n4 & n30);
  n1164 = (unsigned short)(n6 & n30);
  n1214 = (unsigned short)(n8 & n30);
  n898 = (unsigned short)(n10 & n30);
  n914 = (unsigned short)(n12 & n30);
  n932 = (unsigned short)(n14 & n30);
  n81 = (unsigned short)((unsigned short)(n1398 ^ n1514) | (unsigned short)(n0 &
    n30));
  n201 = (unsigned short)(n1664 & n1148);
  n264 = (unsigned short)((n1682 & n1182) | (n1182 & n201) | (n1682 & n201));
  n414 = (unsigned short)((n26 & n1164) | (n1164 & n264) | (n26 & n264));
  n415 = (unsigned short)((n28 & n1214) | (n1214 & n414) | (n28 & n414));
  n20 = (unsigned short)((n882 & n898) | (n898 & n415) | (n882 & n415));
  n682 = (unsigned short)((n998 & n914) | (n914 & n20) | (n998 & n20));
  c = (unsigned short)(n41 | n498);
  b_b = (unsigned short)(((unsigned short)~(unsigned short)((unsigned short)
    ~(unsigned short)(n18 & (n12 & n6)) | n24) & 1) << 1);
  b_a = (unsigned short)(n39 & 1);
  return (unsigned short)(c | b_b | b_a << 2 | n1632 << 3 | (n6 & n22) << 4 |
    (n81 & 1) << 5 | n1632 << 6 | (n81 & 1) << 7 | (n1664 ^ n1148) << 8 | (n1682
    ^ n1182 ^ n201) << 9 | (n26 ^ n1164 ^ n264) << 10 | (n28 ^ n1214 ^ n414) <<
    11 | (n882 ^ n898 ^ n415) << 12 | (n998 ^ n914 ^ n20) << 13 | (n1414 ^ n932 ^
    n682) << 14 | ((n1414 & n932) | (n932 & n682) | (n1414 & n682)) << 15);
}

//
// File trailer for mul8_478.cpp
//
// [EOF]
//
