//
// File: mul8_347.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 16:34:01
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_ETM_int.h"
#include "mul8_347.h"

// Function Definitions

//
// Approximate function mul8_347
//   Library = EvoApprox8b
//   Circuit = mul8_347
//   Area   (180) = 4044
//   Delay  (180) = 2.170
//   Power  (180) = 1493.80
//   Area   (45) = 291
//   Delay  (45) = 0.830
//   Power  (45) = 127.00
//   Nodes = 78
//   HD = 376002
//   MAE = 624.46875
//   MSE = 679898.57422
//   MRE = 10.00 %
//   WCE = 2911
//   WCRE = 700 %
//   EP = 99.0 %
// Arguments    : unsigned char a
//                unsigned char b
// Return Type  : unsigned short
//
unsigned short mul8_347(unsigned char a, unsigned char b)
{
  unsigned short c;
  unsigned short n2;
  unsigned short n4;
  unsigned short n6;
  unsigned short n8;
  unsigned short n10;
  unsigned short n12;
  unsigned short n14;
  unsigned short n20;
  unsigned short n22;
  unsigned short n24;
  unsigned short n26;
  unsigned short n28;
  unsigned short n30;
  unsigned short n71;
  unsigned short n157;
  unsigned short n372;
  unsigned short n420;
  unsigned short n41;
  unsigned short n594;
  unsigned short n608;
  unsigned short n683;
  unsigned short n699;
  unsigned short n712;
  unsigned short n728;
  unsigned short n802;
  unsigned short n816;
  unsigned short n832;
  unsigned short n847;
  unsigned short n890;
  unsigned short n920;
  unsigned short n934;
  unsigned short n950;
  unsigned short n1202;
  unsigned short n1216;
  unsigned short n1350;
  unsigned short n1351;
  n2 = (unsigned short)((int)((unsigned int)a >> 1) & 1);
  n4 = (unsigned short)((int)((unsigned int)a >> 2) & 1);
  n6 = (unsigned short)((int)((unsigned int)a >> 3) & 1);
  n8 = (unsigned short)((int)((unsigned int)a >> 4) & 1);
  n10 = (unsigned short)((int)((unsigned int)a >> 5) & 1);
  n12 = (unsigned short)((int)((unsigned int)a >> 6) & 1);
  n14 = (unsigned short)((unsigned int)a >> 7);
  n20 = (unsigned short)((int)((unsigned int)b >> 2) & 1);
  n22 = (unsigned short)((int)((unsigned int)b >> 3) & 1);
  n24 = (unsigned short)((int)((unsigned int)b >> 4) & 1);
  n26 = (unsigned short)((int)((unsigned int)b >> 5) & 1);
  n28 = (unsigned short)((int)((unsigned int)b >> 6) & 1);
  n30 = (unsigned short)((unsigned int)b >> 7);
  n71 = (unsigned short)(n14 | n8);
  n157 = (unsigned short)~(unsigned short)((unsigned short)((unsigned short)
    ~(unsigned short)(n2 & (n28 & (unsigned short)~(unsigned short)(n6 | (n4 |
    n71)))) & (unsigned short)~(unsigned short)(n6 | (n4 | n71))) | (unsigned
    short)~(unsigned short)(n26 | n24 | (n28 | n22)));
  n372 = (unsigned short)(n14 & n20);
  n420 = (unsigned short)(n26 & (n6 & n4));
  n71 = (unsigned short)(n12 & n22);
  n41 = (unsigned short)(n14 & n22);
  n2 = (unsigned short)(n10 & n24);
  n594 = (unsigned short)(n12 & n24);
  n608 = (unsigned short)(n14 & n24);
  n683 = (unsigned short)(n8 & n26);
  n699 = (unsigned short)(n10 & n26);
  n712 = (unsigned short)(n12 & n26);
  n728 = (unsigned short)(n14 & n26);
  n802 = (unsigned short)(n8 & n28);
  n816 = (unsigned short)(n10 & n28);
  n832 = (unsigned short)(n12 & n28);
  n847 = (unsigned short)(n14 & n28);
  n890 = (unsigned short)(n4 & n30);
  n4 = (unsigned short)(n6 & n30);
  n920 = (unsigned short)(n8 & n30);
  n934 = (unsigned short)(n10 & n30);
  n950 = (unsigned short)(n12 & n30);
  n26 = (unsigned short)(n71 ^ n2);
  n71 &= n2;
  n1202 = (unsigned short)(n41 ^ n594 ^ n699);
  n2 = (unsigned short)((n41 & n594) | (n594 & n699) | (n41 & n699));
  n1216 = (unsigned short)(n608 & n712);
  n699 = (unsigned short)(n608 ^ n712);
  n1350 = (unsigned short)(n372 ^ n420 ^ n26);
  n1351 = (unsigned short)((n372 & n420) | (n420 & n26) | (n372 & n26));
  n24 = (unsigned short)((n10 & n22) | (n8 & n24) | (n6 & n28));
  n41 = (unsigned short)(n71 ^ n802 ^ n4);
  n22 = (unsigned short)((n71 & n802) | (n802 & n4) | (n71 & n4));
  n71 = (unsigned short)(n2 ^ n816 ^ n920);
  n4 = (unsigned short)((n2 & n816) | (n816 & n920) | (n2 & n920));
  n2 = (unsigned short)(n1216 ^ n832 ^ n934);
  n594 = (unsigned short)((n1216 & n832) | (n832 & n934) | (n1216 & n934));
  n372 = (unsigned short)(n847 ^ n950);
  n8 = (unsigned short)(n1350 & n24);
  n10 = (unsigned short)(n1202 ^ n1216 ^ n41);
  n41 = (unsigned short)((n1202 & n1216) | (n1216 & n41) | (n1202 & n41));
  n26 = (unsigned short)(n699 & n71);
  n71 |= n699;
  n699 = (unsigned short)(n728 & n2);
  n2 ^= n728;
  n920 = (unsigned short)((n10 & n8) | (n8 & n1351) | (n10 & n1351));
  n6 = (unsigned short)(n71 ^ n41 ^ n22);
  n420 = (unsigned short)((n71 & n41) | (n41 & n22) | (n71 & n22));
  n802 = (unsigned short)(n2 ^ n26 ^ n4);
  n608 = (unsigned short)((n2 & n26) | (n26 & n4) | (n2 & n4));
  n712 = (unsigned short)(n372 ^ n699 ^ n594);
  n594 = (unsigned short)((n372 & n699) | (n699 & n594) | (n372 & n594));
  n71 = (unsigned short)((n14 & n30) ^ (n847 & n950));
  n2 = (unsigned short)(n6 & n920);
  n41 = (unsigned short)((n802 & n420) | (n420 & n2) | (n802 & n2));
  n26 = (unsigned short)((n712 & n608) | (n608 & n41) | (n712 & n41));
  c = 0;
  n4 = (unsigned short)((n157 & 1) << 1);
  return (unsigned short)(c | n4 | n1216 << 3 | (a & 1 & n20) << 5 | (n157 & 1) <<
    6 | ((unsigned short)(n22 ^ n157) & 1) << 7 | (((int)((unsigned int)b >> 1)
    & 1 & n12) | n890) << 8 | ((unsigned short)((unsigned short)(n683 & 65535) |
    (unsigned short)((unsigned short)~n683 & (unsigned short)((n1350 ^ n24) |
    n890))) & 1) << 9 | (n10 ^ n8 ^ n1351) << 10 | (n6 ^ n920) << 11 | (n802 ^
    n420 ^ n2) << 12 | (n712 ^ n608 ^ n41) << 13 | (n71 ^ n594 ^ n26) << 14 |
    ((n14 & n28 & n950 & 65535) | ((n71 & n594) | (n594 & n26) | (n71 & n26))) <<
    15);
}

//
// File trailer for mul8_347.cpp
//
// [EOF]
//
