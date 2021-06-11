//
// File: mul8_198.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 16:34:01
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_ETM_int.h"
#include "mul8_198.h"

// Function Definitions

//
// Approximate function mul8_198
//   Library = EvoApprox8b
//   Circuit = mul8_198
//   Area   (180) = 5365
//   Delay  (180) = 2.330
//   Power  (180) = 1928.60
//   Area   (45) = 403
//   Delay  (45) = 0.880
//   Power  (45) = 162.70
//   Nodes = 112
//   HD = 385676
//   MAE = 575.77652
//   MSE = 635894.14844
//   MRE = 8.07 %
//   WCE = 2882
//   WCRE = 312 %
//   EP = 99.1 %
// Arguments    : unsigned char a
//                unsigned char b
// Return Type  : unsigned short
//
unsigned short mul8_198(unsigned char a, unsigned char b)
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
  unsigned short n46;
  unsigned short n51;
  unsigned short n53;
  unsigned short n57;
  unsigned short n73;
  unsigned short n82;
  unsigned short n91;
  unsigned short b_c;
  unsigned short n157;
  unsigned short n167;
  unsigned short n420;
  unsigned short n476;
  unsigned short n491;
  unsigned short c_c;
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
  n46 = (unsigned short)(n26 & n8);
  n51 = (unsigned short)((n0 & 65535) | (n0 & n2) | (n2 & 65535));
  n53 = (unsigned short)~(unsigned short)((n12 | n51) & n30);
  n57 = (unsigned short)(n2 | MAX_uint16_T);
  n73 = (unsigned short)(n57 & n46);
  n82 = (unsigned short)~(unsigned short)(n6 | (n4 | n14));
  n91 = (unsigned short)~(unsigned short)(n30 | n24 | (n28 | ((n14 & n16) | (n16
    & n26) | (n14 & n26))));
  n0 = (unsigned short)(n20 & 65535);
  c = (unsigned short)((n46 & n0) | (n0 & n51));
  b_c = (unsigned short)(n46 & n51);
  n157 = (unsigned short)~(unsigned short)((n53 & n82) | n91);
  n167 = (unsigned short)~(unsigned short)(n82 & 65535);
  n46 = (unsigned short)(n22 | n20);
  n420 = (unsigned short)(n26 & (n6 | n8));
  n476 = (unsigned short)(n12 & n22);
  n491 = (unsigned short)(n14 & n22);
  c_c = (unsigned short)(n167 & (n16 & n91));
  n0 = (unsigned short)(n10 & n24);
  n82 = (unsigned short)(n12 & n24);
  n91 = (unsigned short)(n14 & n24);
  n22 = (unsigned short)(n10 & n26);
  n16 = (unsigned short)(n12 & n26);
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
  n1069 = (unsigned short)(n8 & n46 & 65535);
  n46 = (unsigned short)((n10 & n46) | (n8 & n24));
  n26 = (unsigned short)(n476 ^ n0);
  n0 &= n476;
  n10 = (unsigned short)(n491 ^ n82 ^ n22);
  n22 = (unsigned short)((n491 & n82) | (n82 & n22) | (n491 & n22));
  n476 = (unsigned short)(n91 & n16);
  n491 = (unsigned short)(n91 ^ n16);
  n8 = (unsigned short)(n157 | (unsigned short)(n12 & (n20 & 65535)));
  n1334 = (unsigned short)(n817 ^ n1069 ^ n46);
  n1335 = (unsigned short)((n817 & n1069) | (n1069 & n46) | (n817 & n46));
  n1350 = (unsigned short)(n891 ^ n420 ^ n26);
  n20 = (unsigned short)((n891 & n420) | (n420 & n26) | (n891 & n26));
  n82 = (unsigned short)(n0 ^ n802 ^ n906);
  n26 = (unsigned short)((n0 & n802) | (n802 & n906) | (n0 & n906));
  n0 = (unsigned short)(n22 ^ n816 ^ n920);
  n91 = (unsigned short)((n22 & n816) | (n816 & n920) | (n22 & n920));
  n46 = (unsigned short)(n476 ^ n832 ^ n934);
  n16 = (unsigned short)((n476 & n832) | (n832 & n934) | (n476 & n934));
  n1069 = (unsigned short)(n846 ^ n950);
  n802 = (unsigned short)(n1350 & n1335);
  n906 = (unsigned short)(n10 ^ n476 ^ n82);
  n891 = (unsigned short)((n10 & n476) | (n476 & n82) | (n10 & n82));
  n82 = (unsigned short)(n491 & n0);
  n0 |= n491;
  n22 = (unsigned short)(n728 & n46);
  n46 ^= n728;
  n10 = (unsigned short)((unsigned short)(n8 & (unsigned short)~(unsigned short)
    ((unsigned short)~(unsigned short)((n57 | n12) & n51) & n30)) | (unsigned
    short)((unsigned short)~n8 & n26));
  n24 = (unsigned short)((n906 & n802) | (n802 & n20) | (n906 & n20));
  n817 = (unsigned short)(n0 ^ n891 ^ n26);
  n491 = (unsigned short)((n0 & n891) | (n891 & n26) | (n0 & n26));
  n8 = (unsigned short)(n46 ^ n82 ^ n91);
  n26 = (unsigned short)((n46 & n82) | (n82 & n91) | (n46 & n91));
  n476 = (unsigned short)(n1069 ^ n22 ^ n16);
  n16 = (unsigned short)((n1069 & n22) | (n22 & n16) | (n1069 & n16));
  n0 = (unsigned short)((n14 & n30) ^ (n846 & n950));
  n46 = (unsigned short)(n817 & n24);
  n82 = (unsigned short)((n8 & n491) | (n491 & n46) | (n8 & n46));
  n22 = (unsigned short)((n476 & n26) | (n26 & n82) | (n476 & n82));
  n91 = (unsigned short)((n157 & 1) << 1);
  return (unsigned short)(n73 | n91 | n891 << 2 | (n921 | n1334) << 3 |
    ((unsigned short)((unsigned short)(n921 ^ (unsigned short)~(unsigned short)
    (n73 ^ (unsigned short)~c_c)) | (unsigned short)~(unsigned short)~(unsigned
    short)(c | b_c | (n18 & n4))) & 1) << 4 | (n10 & 1) << 5 | (n157 & 1) << 6 |
    (n10 & 1) << 7 | ((unsigned short)((unsigned short)(n1334 | (unsigned short)
    ~(unsigned short)~(unsigned short)((n18 & n14) | (n18 & n12))) | (unsigned
    short)(((unsigned short)(n167 & 65535) | (unsigned short)((unsigned short)
    ~n167 & n2)) & n28)) & 1) << 8 | ((unsigned short)((unsigned short)(n1350 ^
    n1335) | (unsigned short)~(unsigned short)~(unsigned short)(n6 & n28)) & 1) <<
    9 | (n906 ^ n802 ^ n20) << 10 | (n817 ^ n24) << 11 | (n8 ^ n491 ^ n46) << 12
    | (n476 ^ n26 ^ n82) << 13 | (n0 ^ n16 ^ n22) << 14 | ((unsigned short)
    ((unsigned short)((unsigned short)~(unsigned short)~(unsigned short)(n12 &
    (n28 & n14)) & (unsigned short)~n53 & 65535) | (unsigned short)((n0 & n16) |
    (n16 & n22) | (n0 & n22))) & 1) << 15);
}

//
// File trailer for mul8_198.cpp
//
// [EOF]
//
