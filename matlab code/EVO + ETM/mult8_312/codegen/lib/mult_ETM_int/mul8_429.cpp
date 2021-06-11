//
// File: mul8_429.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 16:34:01
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_ETM_int.h"
#include "mul8_429.h"

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
// Arguments    : unsigned char a
//                unsigned char b
// Return Type  : unsigned short
//
unsigned short mul8_429(unsigned char a, unsigned char b)
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
  unsigned short n42;
  unsigned short n53;
  unsigned short n120;
  unsigned short n121;
  unsigned short n157;
  unsigned short n175;
  unsigned short n420;
  unsigned short n491;
  unsigned short n580;
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
  unsigned short n891;
  unsigned short n920;
  unsigned short n921;
  unsigned short n934;
  unsigned short n950;
  unsigned short n1335;
  unsigned short n1350;
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
  n42 = (unsigned short)~(unsigned short)(n18 & (n0 & (unsigned short)~(unsigned
    short)(n10 | n6)));
  n53 = (unsigned short)~(unsigned short)((n12 | ((n0 & 65535) | (n0 & n2) | (n2
    & 65535))) & n30);
  n16 = (unsigned short)~(unsigned short)(n30 | n24 | (n28 | ((n14 & n16) | (n16
    & n26) | (n14 & n26))));
  n0 = (unsigned short)(n16 & n20);
  n120 = (unsigned short)(n12 & n0);
  n121 = (unsigned short)(n12 & n0);
  n157 = (unsigned short)~(unsigned short)((n53 & (unsigned short)~(unsigned
    short)(n6 | (n4 | n14))) | n16);
  n175 = (unsigned short)~(unsigned short)~(unsigned short)(n6 | (n4 | n14));
  n420 = (unsigned short)(n26 & (n6 | n8));
  n16 = (unsigned short)(n12 & n22);
  n491 = (unsigned short)(n14 & n22);
  n580 = (unsigned short)(n10 & n24);
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
  n891 = (unsigned short)(n4 & n30);
  n6 &= n30;
  n920 = (unsigned short)(n8 & n30);
  n921 = (unsigned short)(n8 & n30);
  n934 = (unsigned short)(n10 & n30);
  n950 = (unsigned short)(n12 & n30);
  n0 = (unsigned short)((n10 & (n22 | n20)) | (n8 & n24));
  n26 = (unsigned short)(n16 ^ n580);
  n4 = (unsigned short)(n16 & n580);
  n24 = (unsigned short)(n491 ^ n595 ^ n698);
  n16 = (unsigned short)((n491 & n595) | (n595 & n698) | (n491 & n698));
  n20 = (unsigned short)(n608 & n712);
  n22 = (unsigned short)(n608 ^ n712);
  n491 = (unsigned short)(n157 | n120);
  n1335 = (unsigned short)((n817 & 65535) | (n0 & 65535) | (n817 & n0));
  n1350 = (unsigned short)(n891 ^ n420 ^ n26);
  n420 = (unsigned short)((n891 & n420) | (n420 & n26) | (n891 & n26));
  n26 = (unsigned short)(n4 ^ n802 ^ n6);
  n8 = (unsigned short)((n4 & n802) | (n802 & n6) | (n4 & n6));
  n0 = (unsigned short)(n16 ^ n816 ^ n920);
  n4 = (unsigned short)((n16 & n816) | (n816 & n920) | (n16 & n920));
  n16 = (unsigned short)(n20 ^ n832 ^ n934);
  n6 = (unsigned short)((n20 & n832) | (n832 & n934) | (n20 & n934));
  n580 = (unsigned short)(n846 ^ n950);
  n817 = (unsigned short)(n1350 & n1335);
  n891 = (unsigned short)(n24 ^ n20 ^ n26);
  n712 = (unsigned short)((n24 & n20) | (n20 & n26) | (n24 & n26));
  n26 = (unsigned short)(n22 & n0);
  n0 |= n22;
  n22 = (unsigned short)(n728 & n16);
  n16 ^= n728;
  c = (unsigned short)(n921 | (n10 | (n42 | n12)));
  n595 = (unsigned short)((unsigned short)(n491 & 65535) | (unsigned short)
    ((unsigned short)~n491 & n8));
  n698 = (unsigned short)((n891 & n817) | (n817 & n420) | (n891 & n420));
  n608 = (unsigned short)(n0 ^ n712 ^ n8);
  n24 = (unsigned short)((n0 & n712) | (n712 & n8) | (n0 & n8));
  n491 = (unsigned short)(n16 ^ n26 ^ n4);
  n8 = (unsigned short)((n16 & n26) | (n26 & n4) | (n16 & n4));
  n20 = (unsigned short)(n580 ^ n22 ^ n6);
  n580 = (unsigned short)((n580 & n22) | (n22 & n6) | (n580 & n6));
  n16 = (unsigned short)((n14 & n30) ^ (n846 & n950));
  n26 = (unsigned short)(n608 & n698);
  n4 = (unsigned short)((n491 & n24) | (n24 & n26) | (n491 & n26));
  n6 = (unsigned short)((n20 & n8) | (n8 & n4) | (n20 & n4));
  n22 = (unsigned short)((n157 & 1) << 1);
  n0 = (unsigned short)((unsigned short)~(unsigned short)(n120 ^ (n42 | n12)) &
                        1);
  return (unsigned short)(n121 | n22 | n0 << 2 | ((unsigned short)~c & 1) << 3 |
    ((unsigned short)(n921 ^ n121) & 1) << 4 | (n595 & 1) << 5 | (n157 & 1) << 6
    | (n595 & 1) << 7 | ((unsigned short)((unsigned short)(n712 | (unsigned
    short)~(unsigned short)~(unsigned short)((n18 & n14) | (n18 & n12))) |
    (unsigned short)(((unsigned short)(n175 & 65535) | (unsigned short)
                      ((unsigned short)~n175 & n2)) & n28)) & 1) << 8 | (n1350 ^
    n1335) << 9 | (n891 ^ n817 ^ n420) << 10 | (n608 ^ n698) << 11 | (n491 ^ n24
    ^ n26) << 12 | (n20 ^ n8 ^ n4) << 13 | (n16 ^ n580 ^ n6) << 14 | ((unsigned
    short)((unsigned short)((unsigned short)~(unsigned short)~(unsigned short)
    (n12 & (n28 & n14)) & (unsigned short)~n53 & 65535) | (unsigned short)((n16
    & n580) | (n580 & n6) | (n16 & n6))) & 1) << 15);
}

//
// File trailer for mul8_429.cpp
//
// [EOF]
//
