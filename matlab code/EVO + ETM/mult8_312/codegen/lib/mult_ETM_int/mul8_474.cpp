//
// File: mul8_474.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 16:34:01
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_ETM_int.h"
#include "mul8_474.h"

// Function Definitions

//
// Approximate function mul8_474
//   Library = EvoApprox8b
//   Circuit = mul8_474
//   Area   (180) = 7239
//   Delay  (180) = 4.170
//   Power  (180) = 3831.90
//   Area   (45) = 527
//   Delay  (45) = 1.570
//   Power  (45) = 332.30
//   Nodes = 113
//   HD = 243248
//   MAE = 81.14831
//   MSE = 17742.59961
//   MRE = 2.04 %
//   WCE = 428
//   WCRE = 540 %
//   EP = 95.2 %
// Arguments    : unsigned char a
//                unsigned char b
// Return Type  : unsigned short
//
unsigned short mul8_474(unsigned char a, unsigned char b)
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
  unsigned short n16;
  unsigned short n18;
  unsigned short n20;
  unsigned short n22;
  unsigned short n24;
  unsigned short n26;
  unsigned short n28;
  unsigned short n30;
  unsigned short n33;
  unsigned short n34;
  unsigned short n38;
  unsigned short n148;
  unsigned short n264;
  unsigned short n282;
  unsigned short n382;
  unsigned short n398;
  unsigned short n414;
  unsigned short n415;
  unsigned short n498;
  unsigned short n548;
  unsigned short n614;
  unsigned short n632;
  unsigned short n648;
  unsigned short n664;
  unsigned short n682;
  unsigned short n882;
  unsigned short n898;
  unsigned short n1114;
  unsigned short n1232;
  unsigned short n1382;
  unsigned short n1398;
  unsigned short n1498;
  unsigned short n1648;
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
  n16 = (unsigned short)(b & 1);
  n18 = (unsigned short)((int)((unsigned int)b >> 1) & 1);
  n20 = (unsigned short)((int)((unsigned int)b >> 2) & 1);
  n22 = (unsigned short)((int)((unsigned int)b >> 3) & 1);
  n24 = (unsigned short)((int)((unsigned int)b >> 4) & 1);
  n26 = (unsigned short)((int)((unsigned int)b >> 5) & 1);
  n28 = (unsigned short)((int)((unsigned int)b >> 6) & 1);
  n30 = (unsigned short)((unsigned int)b >> 7);
  n33 = (unsigned short)~(unsigned short)(n18 | (n12 | n6));
  n34 = (unsigned short)~(unsigned short)((n6 | n4) & n18);
  n38 = (unsigned short)~(unsigned short)(n33 | n34);
  n148 = (unsigned short)(n14 & n16);
  n264 = (unsigned short)(n12 & n18);
  n282 = (unsigned short)(n14 & n18);
  n382 = (unsigned short)((n12 & n16) | (n10 & n18));
  n398 = (unsigned short)(n148 ^ n264);
  n148 &= n264;
  n414 = (unsigned short)(n148 ^ n282);
  n415 = (unsigned short)(n148 & n282);
  n498 = (unsigned short)(n8 & n20);
  n264 = (unsigned short)(n10 & n20);
  n282 = (unsigned short)(n12 & n20);
  n548 = (unsigned short)(n14 & n20);
  n614 = (unsigned short)(((n10 & n16) ^ (n8 & n18)) | (n2 & n20));
  n632 = (unsigned short)(n382 ^ n498);
  n148 = (unsigned short)(n382 & n498);
  n648 = (unsigned short)(n398 ^ n264 ^ n148);
  n148 = (unsigned short)((n398 & n264) | (n264 & n148) | (n398 & n148));
  n664 = (unsigned short)(n414 ^ n282 ^ n148);
  n148 = (unsigned short)((n414 & n282) | (n282 & n148) | (n414 & n148));
  n682 = (unsigned short)(n415 ^ n548 ^ n148);
  n415 = (unsigned short)((n415 & n548) | (n548 & n148) | (n415 & n148));
  n264 = (unsigned short)(n4 & n22);
  n282 = (unsigned short)(n6 & n22);
  n16 = (unsigned short)(n8 & n22);
  n382 = (unsigned short)(n10 & n498);
  n398 = (unsigned short)(n12 & n22);
  n414 = (unsigned short)(n14 & n22);
  n148 = (unsigned short)((unsigned short)((unsigned short)~(unsigned short)
    ((unsigned short)~(unsigned short)((unsigned short)~(unsigned short)(n12 |
    n22) | (unsigned short)(n12 | n0)) | n34) | (unsigned short)(n4 & n20)) |
    (unsigned short)(n2 & n22));
  n34 = (unsigned short)(n614 ^ n264 ^ n148);
  n148 = (unsigned short)((n614 & n264) | (n264 & n148) | (n614 & n148));
  n882 = (unsigned short)(n632 ^ n282 ^ n148);
  n148 = (unsigned short)((n632 & n282) | (n282 & n148) | (n632 & n148));
  n898 = (unsigned short)(n648 ^ n16 ^ n148);
  n148 = (unsigned short)((n648 & n16) | (n16 & n148) | (n648 & n148));
  n614 = (unsigned short)(n664 ^ n382 ^ n148);
  n148 = (unsigned short)((n664 & n382) | (n382 & n148) | (n664 & n148));
  n498 = (unsigned short)(n682 ^ n398 ^ n148);
  n148 = (unsigned short)((n682 & n398) | (n398 & n148) | (n682 & n148));
  n548 = (unsigned short)(n415 ^ n414 ^ n148);
  n414 = (unsigned short)((n415 & n414) | (n414 & n148) | (n415 & n148));
  n148 = (unsigned short)(n2 & n24);
  n264 = (unsigned short)(n4 & n24);
  n282 = (unsigned short)(n6 & n24);
  n16 = (unsigned short)(n8 & n24);
  n382 = (unsigned short)(n10 & n24);
  n398 = (unsigned short)(n12 & n24);
  n415 = (unsigned short)(n14 & n24);
  n1114 = (unsigned short)(n34 ^ n148);
  n148 &= n34;
  n34 = (unsigned short)(n882 ^ n264 ^ n148);
  n148 = (unsigned short)((n882 & n264) | (n264 & n148) | (n882 & n148));
  n664 = (unsigned short)(n898 ^ n282 ^ n148);
  n148 = (unsigned short)((n898 & n282) | (n282 & n148) | (n898 & n148));
  n632 = (unsigned short)(n614 ^ n16 ^ n148);
  n148 = (unsigned short)((n614 & n16) | (n16 & n148) | (n614 & n148));
  n682 = (unsigned short)(n498 ^ n382 ^ n148);
  n148 = (unsigned short)((n498 & n382) | (n382 & n148) | (n498 & n148));
  n614 = (unsigned short)(n548 ^ n398 ^ n148);
  n148 = (unsigned short)((n548 & n398) | (n398 & n148) | (n548 & n148));
  n498 = (unsigned short)(n414 ^ n415 ^ n148);
  n548 = (unsigned short)((n414 & n415) | (n415 & n148) | (n414 & n148));
  n1232 = (unsigned short)(n0 & ((unsigned short)~(unsigned short)(n26 | n38) ^
    (unsigned short)((unsigned short)~(unsigned short)(n18 & (n33 & n38)) | n18)));
  n264 = (unsigned short)(n2 & n26);
  n282 = (unsigned short)(n4 & n26);
  n16 = (unsigned short)(n6 & n26);
  n382 = (unsigned short)(n8 & n26);
  n398 = (unsigned short)(n10 & n26);
  n414 = (unsigned short)(n12 & n26);
  n415 = (unsigned short)(n14 & n26);
  n148 = (unsigned short)(n1114 & n1232);
  n1382 = (unsigned short)(n34 ^ n264 ^ n148);
  n148 = (unsigned short)((n34 & n264) | (n264 & n148) | (n34 & n148));
  n1398 = (unsigned short)(n664 ^ n282 ^ n148);
  n148 = (unsigned short)((n664 & n282) | (n282 & n148) | (n664 & n148));
  n664 = (unsigned short)(n632 ^ n16 ^ n148);
  n148 = (unsigned short)((n632 & n16) | (n16 & n148) | (n632 & n148));
  n632 = (unsigned short)(n682 ^ n382 ^ n148);
  n148 = (unsigned short)((n682 & n382) | (n382 & n148) | (n682 & n148));
  n682 = (unsigned short)(n614 ^ n398 ^ n148);
  n148 = (unsigned short)((n614 & n398) | (n398 & n148) | (n614 & n148));
  n614 = (unsigned short)(n498 ^ n414 ^ n148);
  n148 = (unsigned short)((n498 & n414) | (n414 & n148) | (n498 & n148));
  n498 = (unsigned short)(n548 ^ n415 ^ n148);
  n548 = (unsigned short)((n548 & n415) | (n415 & n148) | (n548 & n148));
  n1498 = (unsigned short)(n0 & n28);
  n264 = (unsigned short)(n2 & n28);
  n282 = (unsigned short)(n4 & n28);
  n16 = (unsigned short)(n6 & n28);
  n382 = (unsigned short)(n8 & n28);
  n398 = (unsigned short)(n10 & n28);
  n414 = (unsigned short)(n12 & n28);
  n415 = (unsigned short)(n14 & n28);
  n148 = (unsigned short)(n1382 & n1498);
  n1648 = (unsigned short)(n1398 ^ n264 ^ n148);
  n148 = (unsigned short)((n1398 & n264) | (n264 & n148) | (n1398 & n148));
  n1664 = (unsigned short)(n664 ^ n282 ^ n148);
  n148 = (unsigned short)((n664 & n282) | (n282 & n148) | (n664 & n148));
  n1682 = (unsigned short)(n632 ^ n16 ^ n148);
  n148 = (unsigned short)((n632 & n16) | (n16 & n148) | (n632 & n148));
  n28 = (unsigned short)(n682 ^ n382 ^ n148);
  n148 = (unsigned short)((n682 & n382) | (n382 & n148) | (n682 & n148));
  n26 = (unsigned short)(n614 ^ n398 ^ n148);
  n148 = (unsigned short)((n614 & n398) | (n398 & n148) | (n614 & n148));
  n38 = (unsigned short)(n498 ^ n414 ^ n148);
  n148 = (unsigned short)((n498 & n414) | (n414 & n148) | (n498 & n148));
  n33 = (unsigned short)(n548 ^ n415 ^ n148);
  n882 = (unsigned short)((n548 & n415) | (n415 & n148) | (n548 & n148));
  n648 = (unsigned short)(n0 & n30);
  n898 = (unsigned short)(n2 & n30);
  n682 = (unsigned short)(n4 & n30);
  n632 = (unsigned short)(n6 & n30);
  n664 = (unsigned short)(n8 & n30);
  n34 = (unsigned short)(n10 & n30);
  n614 = (unsigned short)(n12 & n30);
  n282 = (unsigned short)(n14 & n30);
  n16 = (unsigned short)(n1648 & n648);
  n382 = (unsigned short)((n1664 & n898) | (n898 & n16) | (n1664 & n16));
  n398 = (unsigned short)((n1682 & n682) | (n682 & n382) | (n1682 & n382));
  n414 = (unsigned short)((n28 & n632) | (n632 & n398) | (n28 & n398));
  n415 = (unsigned short)((n26 & n664) | (n664 & n414) | (n26 & n414));
  n548 = (unsigned short)((n38 & n34) | (n34 & n415) | (n38 & n415));
  n498 = (unsigned short)((n33 & n614) | (n614 & n548) | (n33 & n548));
  c = (unsigned short)(n8 & n24);
  n264 = (unsigned short)(n1398 << 1);
  n148 = (unsigned short)(n2 & n20);
  return (unsigned short)(c | n264 | n148 << 2 | (n10 & n18) << 3 | (n6 & n22) <<
    4 | ((unsigned short)(n1114 ^ n1232) & 1) << 5 | (n1382 ^ n1498) << 6 |
    (n1648 ^ n648) << 7 | (n1664 ^ n898 ^ n16) << 8 | (n1682 ^ n682 ^ n382) << 9
    | (n28 ^ n632 ^ n398) << 10 | (n26 ^ n664 ^ n414) << 11 | (n38 ^ n34 ^ n415)
    << 12 | (n33 ^ n614 ^ n548) << 13 | (n882 ^ n282 ^ n498) << 14 | ((n882 &
    n282) | (n282 & n498) | (n882 & n498)) << 15);
}

//
// File trailer for mul8_474.cpp
//
// [EOF]
//
