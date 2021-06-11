//
// File: mul8_478.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 16:34:01
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_ETM_int.h"
#include "mul8_478.h"

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
// Arguments    : unsigned char a
//                unsigned char b
// Return Type  : unsigned short
//
unsigned short mul8_478(unsigned char a, unsigned char b)
{
  unsigned short c;
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
  unsigned short n34;
  unsigned short n38;
  unsigned short n39;
  unsigned short n41;
  unsigned short n81;
  unsigned short n201;
  unsigned short n264;
  unsigned short n414;
  unsigned short n415;
  unsigned short n498;
  unsigned short n664;
  unsigned short n882;
  unsigned short n898;
  unsigned short n914;
  unsigned short n998;
  unsigned short n1148;
  unsigned short n1164;
  unsigned short n1182;
  unsigned short n1214;
  unsigned short n1398;
  unsigned short n1414;
  unsigned short n1464;
  unsigned short n1514;
  unsigned short n1632;
  unsigned short n1664;
  unsigned short n1682;
  n0 = (unsigned short)(a & 1);
  n2 = (unsigned short)((int)((unsigned int)a >> 1) & 1);
  n4 = (unsigned short)((int)((unsigned int)a >> 2) & 1);
  n6 = (unsigned short)((int)((unsigned int)a >> 3) & 1);
  n8 = (unsigned short)((int)((unsigned int)a >> 4) & 1);
  n10 = (unsigned short)((int)((unsigned int)a >> 5) & 1);
  n12 = (unsigned short)((int)((unsigned int)a >> 6) & 1);
  n14 = (unsigned short)((unsigned int)a >> 7);
  n18 = (unsigned short)((int)((unsigned int)b >> 1) & 1);
  n20 = (unsigned short)((int)((unsigned int)b >> 2) & 1);
  n22 = (unsigned short)((int)((unsigned int)b >> 3) & 1);
  n24 = (unsigned short)((int)((unsigned int)b >> 4) & 1);
  n26 = (unsigned short)((int)((unsigned int)b >> 5) & 1);
  n28 = (unsigned short)((int)((unsigned int)b >> 6) & 1);
  n30 = (unsigned short)((unsigned int)b >> 7);
  n34 = (unsigned short)~(unsigned short)(n18 & (b & 1 & n6));
  n38 = (unsigned short)~(unsigned short)(n22 | (n34 | n6));
  n39 = (unsigned short)~(unsigned short)(n22 | (n34 | n6));
  n41 = (unsigned short)(n2 & n38);
  n81 = (unsigned short)(n41 & n38);
  n201 = (unsigned short)~(unsigned short)((unsigned short)~(unsigned short)
    ((unsigned short)~(unsigned short)(n81 | n39) & (n14 & (unsigned short)
    ~(unsigned short)(n39 & (n14 & n0)) & (n22 & (unsigned short)~(unsigned
    short)(n28 | n30)))) | (unsigned short)(n28 | n39));
  n264 = (unsigned short)(n12 & n18);
  n34 = (unsigned short)(n14 & n18);
  n38 = (unsigned short)(n201 & n264);
  n414 = (unsigned short)(n38 ^ n34);
  n415 = (unsigned short)(n38 & n34);
  n498 = (unsigned short)(n81 & n20);
  n34 = (unsigned short)(n12 & n20);
  n38 = (unsigned short)(n14 & n20);
  n201 = (unsigned short)((unsigned short)(n201 ^ n264) | (unsigned short)(n10 &
    n20));
  n664 = (unsigned short)(n414 ^ n34);
  n34 &= n414;
  n414 = (unsigned short)(n415 ^ n38 ^ n34);
  n264 = (unsigned short)((n415 & n38) | (n38 & n34) | (n415 & n34));
  n34 = (unsigned short)(n8 & n22);
  n38 = (unsigned short)(n10 & n22);
  n81 = (unsigned short)(n12 & n22);
  n20 = (unsigned short)(n14 & n22);
  n882 = (unsigned short)((n41 | n498) ^ (n6 & n22));
  n898 = (unsigned short)(n201 ^ n34);
  n34 &= n201;
  n914 = (unsigned short)(n664 ^ n38 ^ n34);
  n34 = (unsigned short)((n664 & n38) | (n38 & n34) | (n664 & n34));
  n664 = (unsigned short)(n414 ^ n81 ^ n34);
  n34 = (unsigned short)((n414 & n81) | (n81 & n34) | (n414 & n34));
  n415 = (unsigned short)(n264 ^ n20 ^ n34);
  n20 = (unsigned short)((n264 & n20) | (n20 & n34) | (n264 & n34));
  n998 = (unsigned short)(n41 & n24);
  n34 = (unsigned short)(n6 & n24);
  n81 = (unsigned short)(n8 & n24);
  n201 = (unsigned short)(n10 & n24);
  n264 = (unsigned short)(n12 & n24);
  n414 = (unsigned short)(n14 & n24);
  n38 = (unsigned short)(n882 & n998);
  n1148 = (unsigned short)(n898 ^ n34 ^ n38);
  n34 = (unsigned short)((n898 & n34) | (n34 & n38) | (n898 & n38));
  n1164 = (unsigned short)(n914 ^ n81 ^ n34);
  n34 = (unsigned short)((n914 & n81) | (n81 & n34) | (n914 & n34));
  n1182 = (unsigned short)(n664 ^ n201 ^ n34);
  n201 = (unsigned short)((n664 & n201) | (n201 & n34) | (n664 & n34));
  n664 = (unsigned short)(n415 ^ n264 ^ n201);
  n34 = (unsigned short)((n415 & n264) | (n264 & n201) | (n415 & n201));
  n1214 = (unsigned short)(n20 ^ n414 ^ n34);
  n414 = (unsigned short)((n20 & n414) | (n414 & n34) | (n20 & n34));
  n34 = (unsigned short)(n4 & n26);
  n38 = (unsigned short)(n6 & n26);
  n81 = (unsigned short)(n8 & n26);
  n264 = (unsigned short)(n10 & n26);
  n20 = (unsigned short)(n12 & n26);
  n415 = (unsigned short)(n14 & n26);
  n1398 = (unsigned short)(n1148 ^ n34 ^ n201);
  n34 = (unsigned short)((n1148 & n34) | (n34 & n201) | (n1148 & n201));
  n1414 = (unsigned short)(n1164 ^ n38 ^ n34);
  n34 = (unsigned short)((n1164 & n38) | (n38 & n34) | (n1164 & n34));
  n914 = (unsigned short)(n1182 ^ n81 ^ n34);
  n34 = (unsigned short)((n1182 & n81) | (n81 & n34) | (n1182 & n34));
  n898 = (unsigned short)(n664 ^ n264 ^ n34);
  n34 = (unsigned short)((n664 & n264) | (n264 & n34) | (n664 & n34));
  n1464 = (unsigned short)(n1214 ^ n20 ^ n34);
  n34 = (unsigned short)((n1214 & n20) | (n20 & n34) | (n1214 & n34));
  n664 = (unsigned short)(n414 ^ n415 ^ n34);
  n415 = (unsigned short)((n414 & n415) | (n415 & n34) | (n414 & n34));
  n1514 = (unsigned short)(n2 & n28);
  n38 = (unsigned short)(n4 & n28);
  n81 = (unsigned short)(n6 & n28);
  n201 = (unsigned short)(n8 & n28);
  n264 = (unsigned short)(n10 & n28);
  n20 = (unsigned short)(n12 & n28);
  n414 = (unsigned short)(n14 & n28);
  n1632 = (unsigned short)((n882 ^ n998) | (n2 & n26) | n1414);
  n34 = (unsigned short)(n1398 & n1514);
  n1664 = (unsigned short)(n1414 ^ n38 ^ n34);
  n34 = (unsigned short)((n1414 & n38) | (n38 & n34) | (n1414 & n34));
  n1682 = (unsigned short)(n914 ^ n81 ^ n34);
  n34 = (unsigned short)((n914 & n81) | (n81 & n34) | (n914 & n34));
  n26 = (unsigned short)(n898 ^ n201 ^ n34);
  n34 = (unsigned short)((n898 & n201) | (n201 & n34) | (n898 & n34));
  n28 = (unsigned short)(n1464 ^ n264 ^ n34);
  n34 = (unsigned short)((n1464 & n264) | (n264 & n34) | (n1464 & n34));
  n882 = (unsigned short)(n664 ^ n20 ^ n34);
  n34 = (unsigned short)((n664 & n20) | (n20 & n34) | (n664 & n34));
  n998 = (unsigned short)(n415 ^ n414 ^ n34);
  n1414 = (unsigned short)((n415 & n414) | (n414 & n34) | (n415 & n34));
  n1464 = (unsigned short)(n2 & n30);
  n1164 = (unsigned short)(n4 & n30);
  n1148 = (unsigned short)(n6 & n30);
  n1182 = (unsigned short)(n8 & n30);
  n914 = (unsigned short)(n10 & n30);
  n1214 = (unsigned short)(n12 & n30);
  n898 = (unsigned short)(n14 & n30);
  n81 = (unsigned short)((unsigned short)(n1398 ^ n1514) | (unsigned short)(n0 &
    n30));
  n201 = (unsigned short)(n1664 & n1464);
  n264 = (unsigned short)((n1682 & n1164) | (n1164 & n201) | (n1682 & n201));
  n20 = (unsigned short)((n26 & n1148) | (n1148 & n264) | (n26 & n264));
  n414 = (unsigned short)((n28 & n1182) | (n1182 & n20) | (n28 & n20));
  n415 = (unsigned short)((n882 & n914) | (n914 & n414) | (n882 & n414));
  n664 = (unsigned short)((n998 & n1214) | (n1214 & n415) | (n998 & n415));
  c = (unsigned short)(n41 | n498);
  n38 = (unsigned short)(((unsigned short)~(unsigned short)((unsigned short)
    ~(unsigned short)(n18 & (n12 & n6)) | n24) & 1) << 1);
  n34 = (unsigned short)(n39 & 1);
  return (unsigned short)(c | n38 | n34 << 2 | n1632 << 3 | (n6 & n22) << 4 |
    (n81 & 1) << 5 | n1632 << 6 | (n81 & 1) << 7 | (n1664 ^ n1464) << 8 | (n1682
    ^ n1164 ^ n201) << 9 | (n26 ^ n1148 ^ n264) << 10 | (n28 ^ n1182 ^ n20) <<
    11 | (n882 ^ n914 ^ n414) << 12 | (n998 ^ n1214 ^ n415) << 13 | (n1414 ^
    n898 ^ n664) << 14 | ((n1414 & n898) | (n898 & n664) | (n1414 & n664)) << 15);
}

//
// File trailer for mul8_478.cpp
//
// [EOF]
//
