//
// File: mul8_435.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 16:34:01
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_ETM_int.h"
#include "mul8_435.h"

// Function Definitions

//
// Approximate function mul8_435
//   Library = EvoApprox8b
//   Circuit = mul8_435
//   Area   (180) = 4623
//   Delay  (180) = 3.400
//   Power  (180) = 1946.50
//   Area   (45) = 337
//   Delay  (45) = 1.220
//   Power  (45) = 168.20
//   Nodes = 82
//   HD = 324016
//   MAE = 288.92786
//   MSE = 140216.04199
//   MRE = 6.09 %
//   WCE = 1960
//   WCRE = 100 %
//   EP = 98.3 %
// Arguments    : unsigned char a
//                unsigned char b
// Return Type  : unsigned short
//
unsigned short mul8_435(unsigned char a, unsigned char b)
{
  unsigned short c;
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
  unsigned short n32;
  unsigned short n33;
  unsigned short n35;
  unsigned short n51;
  unsigned short n63;
  unsigned short n117;
  unsigned short n682;
  unsigned short n814;
  unsigned short n932;
  unsigned short n948;
  unsigned short n1049;
  unsigned short n1164;
  unsigned short n1182;
  unsigned short n1198;
  unsigned short n1414;
  unsigned short n1449;
  unsigned short n1664;
  unsigned short n1682;
  unsigned short n1698;
  unsigned short n1699;
  unsigned short n1714;
  n2 = (unsigned short)((int)((unsigned int)a >> 1) & 1);
  n4 = (unsigned short)((int)((unsigned int)a >> 2) & 1);
  n6 = (unsigned short)((int)((unsigned int)a >> 3) & 1);
  n8 = (unsigned short)((int)((unsigned int)a >> 4) & 1);
  n10 = (unsigned short)((int)((unsigned int)a >> 5) & 1);
  n12 = (unsigned short)((int)((unsigned int)a >> 6) & 1);
  n14 = (unsigned short)((unsigned int)a >> 7);
  n16 = (unsigned short)(b & 1);
  n18 = (unsigned short)((int)((unsigned int)b >> 1) & 1);
  n20 = (unsigned short)((int)((unsigned int)b >> 2) & 1);
  n22 = (unsigned short)((int)((unsigned int)b >> 3) & 1);
  n24 = (unsigned short)((int)((unsigned int)b >> 4) & 1);
  n26 = (unsigned short)((int)((unsigned int)b >> 5) & 1);
  n28 = (unsigned short)((int)((unsigned int)b >> 6) & 1);
  n30 = (unsigned short)((unsigned int)b >> 7);
  n32 = (unsigned short)(n18 & n14);
  n33 = (unsigned short)(n18 & n14);
  n35 = (unsigned short)~(unsigned short)(n16 & (n32 & n18));
  n51 = (unsigned short)((unsigned short)~n35 & (unsigned short)~(unsigned short)
    (n33 | n28));
  n63 = (unsigned short)~(unsigned short)(n2 & (n12 & n30));
  n117 = (unsigned short)~(unsigned short)((n33 | n20) & n22);
  n18 = (unsigned short)(n51 & n16);
  n33 = (unsigned short)(n14 & n20);
  n682 = (unsigned short)(n18 ^ n33);
  n33 &= n18;
  n18 = (unsigned short)(n12 & n22);
  n814 = (unsigned short)(n14 & n22);
  n16 = (unsigned short)((n51 & n16) | (n12 & n20) | (n10 & n22));
  n932 = (unsigned short)(n682 ^ n18);
  n18 &= n682;
  n948 = (unsigned short)(n33 ^ n814 ^ n18);
  n682 = (unsigned short)((n33 & n814) | (n814 & n18) | (n33 & n18));
  n18 = (unsigned short)(n8 & n24);
  n33 = (unsigned short)(n10 & n24);
  n1049 = (unsigned short)(n10 & n24);
  n51 = (unsigned short)(n12 & n24);
  n814 = (unsigned short)(n14 & n24);
  n1164 = (unsigned short)(n16 ^ n18);
  n18 &= n16;
  n1182 = (unsigned short)(n932 ^ n33 ^ n18);
  n18 = (unsigned short)((n932 & n33) | (n33 & n18) | (n932 & n18));
  n1198 = (unsigned short)(n948 ^ n51 ^ n18);
  n18 = (unsigned short)((n948 & n51) | (n51 & n18) | (n948 & n18));
  n948 = (unsigned short)(n682 ^ n814 ^ n18);
  n814 = (unsigned short)((n682 & n814) | (n814 & n18) | (n682 & n18));
  n33 = (unsigned short)(n6 & n26);
  n51 = (unsigned short)(n8 & n26);
  n16 = (unsigned short)(n10 & n26);
  n682 = (unsigned short)(n12 & n26);
  n932 = (unsigned short)(n14 & n26);
  n18 = (unsigned short)((n117 & n32) | (n10 & n20) | (n8 & n22) | (n6 & n24) |
    (n4 & n26));
  n1414 = (unsigned short)(n1164 ^ n33 ^ n18);
  n18 = (unsigned short)((n1164 & n33) | (n33 & n18) | (n1164 & n18));
  n26 = (unsigned short)(n1182 ^ n51 ^ n18);
  n18 = (unsigned short)((n1182 & n51) | (n51 & n18) | (n1182 & n18));
  n24 = (unsigned short)(n1198 ^ n16 ^ n18);
  n1449 = (unsigned short)((n1198 & n16) | (n16 & n18) | (n1198 & n18));
  n20 = (unsigned short)(n948 ^ n682 ^ n1449);
  n18 = (unsigned short)((n948 & n682) | (n682 & n1449) | (n948 & n1449));
  n948 = (unsigned short)(n814 ^ n932 ^ n18);
  n932 = (unsigned short)((n814 & n932) | (n932 & n18) | (n814 & n18));
  n18 = (unsigned short)(n4 & n28);
  n33 = (unsigned short)(n6 & n28);
  n51 = (unsigned short)(n8 & n28);
  n16 = (unsigned short)(n10 & n28);
  n682 = (unsigned short)(n12 & n28);
  n814 = (unsigned short)(n14 & n28);
  n1664 = (unsigned short)(n1414 ^ n18);
  n18 &= n1414;
  n1682 = (unsigned short)(n26 ^ n33 ^ n18);
  n18 = (unsigned short)((n26 & n33) | (n33 & n18) | (n26 & n18));
  n1698 = (unsigned short)(n24 ^ n51 ^ n18);
  n1699 = (unsigned short)((n24 & n51) | (n51 & n18) | (n24 & n18));
  n1714 = (unsigned short)(n20 ^ n16 ^ n1699);
  n18 = (unsigned short)((n20 & n16) | (n16 & n1699) | (n20 & n1699));
  n28 = (unsigned short)(n948 ^ n682 ^ n18);
  n18 = (unsigned short)((n948 & n682) | (n682 & n18) | (n948 & n18));
  n1414 = (unsigned short)(n932 ^ n814 ^ n18);
  n24 = (unsigned short)((n932 & n814) | (n814 & n18) | (n932 & n18));
  n26 = (unsigned short)(n2 & n30);
  n1164 = (unsigned short)(n4 & n30);
  n1182 = (unsigned short)(n6 & n30);
  n20 = (unsigned short)(n8 & n30);
  n948 = (unsigned short)(n10 & n30);
  n1198 = (unsigned short)(n12 & n30);
  n18 = (unsigned short)(n14 & n30);
  n33 = (unsigned short)(n1664 & n26);
  n51 = (unsigned short)((n1682 & n1164) | (n1164 & n33) | (n1682 & n33));
  n16 = (unsigned short)((n1698 & n1182) | (n1182 & n51) | (n1698 & n51));
  n682 = (unsigned short)((n1714 & n20) | (n20 & n16) | (n1714 & n16));
  n814 = (unsigned short)((n28 & n948) | (n948 & n682) | (n28 & n682));
  n932 = (unsigned short)((n1414 & n1198) | (n1198 & n814) | (n1414 & n814));
  c = (unsigned short)((n117 & n32 & (unsigned short)~(unsigned short)~(unsigned
    short)(n63 | n12)) << 1);
  return (unsigned short)(n1449 | c | n1699 << 2 | n1049 << 3 | (n6 & n22) << 4 |
    ((unsigned short)~(unsigned short)(n63 | (unsigned short)~n35) & 1) << 5 |
    n1049 << 6 | ((unsigned short)((unsigned short)~n35 ^ (unsigned short)(n2 &
    n30)) & 1) << 7 | (n1664 ^ n26) << 8 | (n1682 ^ n1164 ^ n33) << 9 | (n1698 ^
    n1182 ^ n51) << 10 | (n1714 ^ n20 ^ n16) << 11 | (n28 ^ n948 ^ n682) << 12 |
    (n1414 ^ n1198 ^ n814) << 13 | (n24 ^ n18 ^ n932) << 14 | ((n24 & n18) |
    (n18 & n932) | (n24 & n932)) << 15);
}

//
// File trailer for mul8_435.cpp
//
// [EOF]
//
