//
// File: mul8_236.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 16:34:01
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_ETM_int.h"
#include "mul8_236.h"

// Function Definitions

//
// Approximate function mul8_236
//   Library = EvoApprox8b
//   Circuit = mul8_236
//   Area   (180) = 6783
//   Delay  (180) = 2.330
//   Power  (180) = 2511.60
//   Area   (45) = 501
//   Delay  (45) = 0.870
//   Power  (45) = 215.00
//   Nodes = 130
//   HD = 337480
//   MAE = 326.44333
//   MSE = 209123.39185
//   MRE = 7.00 %
//   WCE = 2021
//   WCRE = 200 %
//   EP = 98.5 %
// Arguments    : unsigned char a
//                unsigned char b
// Return Type  : unsigned short
//
unsigned short mul8_236(unsigned char a, unsigned char b)
{
  unsigned short c;
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
  unsigned short n33;
  unsigned short n34;
  unsigned short n38;
  unsigned short n39;
  unsigned short n43;
  unsigned short n46;
  unsigned short n54;
  unsigned short n106;
  unsigned short n115;
  unsigned short n118;
  unsigned short n134;
  unsigned short n254;
  unsigned short n313;
  unsigned short n343;
  unsigned short n356;
  unsigned short n372;
  unsigned short n446;
  unsigned short n460;
  unsigned short n476;
  unsigned short n490;
  unsigned short n564;
  unsigned short n580;
  unsigned short n594;
  unsigned short n608;
  unsigned short n698;
  unsigned short n712;
  unsigned short n756;
  unsigned short n786;
  unsigned short n802;
  unsigned short n816;
  unsigned short n832;
  unsigned short n846;
  unsigned short n876;
  unsigned short n890;
  unsigned short n906;
  unsigned short n934;
  unsigned short n950;
  unsigned short n964;
  unsigned short n1068;
  unsigned short n1142;
  unsigned short n1156;
  unsigned short n79;
  unsigned short n1202;
  unsigned short n1203;
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
  n33 = (unsigned short)~(unsigned short)(n18 | (n12 | n6));
  n34 = (unsigned short)~(unsigned short)(n30 & (n8 & n14));
  n38 = (unsigned short)~(unsigned short)(n6 | n34);
  n39 = (unsigned short)~(unsigned short)(n6 | n34);
  n43 = (unsigned short)~(unsigned short)(n24 | n18 | MAX_uint16_T);
  n46 = (unsigned short)~(unsigned short)(n18 & (b & 1 & n39));
  n54 = (unsigned short)~(unsigned short)(n33 | (unsigned short)~(unsigned short)
    (n10 & n38));
  n34 = (unsigned short)~(unsigned short)((n33 | (unsigned short)~(unsigned
    short)(n14 | MAX_uint16_T)) & n6);
  n106 = (unsigned short)~(unsigned short)((n39 & n8) | MAX_uint16_T);
  n115 = (unsigned short)~(unsigned short)(n10 & (n46 & n34));
  n118 = (unsigned short)~(unsigned short)~(unsigned short)(n39 | MAX_uint16_T);
  n134 = (unsigned short)((unsigned short)~(unsigned short)(n34 & 65535) & n38);
  n254 = (unsigned short)(n14 & n18);
  n313 = (unsigned short)~(unsigned short)~(unsigned short)((unsigned short)~n46
    | n134);
  n343 = (unsigned short)(n10 & n20);
  c = (unsigned short)(n313 | MAX_uint16_T);
  n356 = (unsigned short)(n12 & n20);
  n372 = (unsigned short)(n14 & n20);
  n446 = (unsigned short)(n8 & n22);
  n460 = (unsigned short)(n10 & n22);
  n476 = (unsigned short)(n12 & n22);
  n490 = (unsigned short)(n14 & n22);
  n20 = (unsigned short)(n6 & n24);
  n564 = (unsigned short)(n8 & n24);
  n580 = (unsigned short)(n10 & n24);
  n594 = (unsigned short)(n12 & n24);
  n608 = (unsigned short)(n14 & n24);
  n46 = (unsigned short)(n4 & ((unsigned short)~(unsigned short)(n10 & n38) ^
    (unsigned short)((unsigned short)~(unsigned short)(n18 & n39) & 65535)));
  n24 = (unsigned short)(n6 & n26);
  n38 = (unsigned short)(n8 & n26);
  n698 = (unsigned short)(n10 & n26);
  n712 = (unsigned short)(n12 & n26);
  n756 = (unsigned short)(n2 & n28);
  n786 = (unsigned short)(n6 & n28);
  n802 = (unsigned short)(n8 & n28);
  n816 = (unsigned short)(n10 & n28);
  n832 = (unsigned short)(n12 & n28);
  n846 = (unsigned short)(n14 & n28);
  n876 = (unsigned short)(n2 & n30);
  n890 = (unsigned short)(n4 & n30);
  n906 = (unsigned short)(n6 & n30);
  n8 &= n30;
  n934 = (unsigned short)(n10 & n30);
  n950 = (unsigned short)(n12 & n30);
  n964 = (unsigned short)(n14 & n30);
  n1068 = (unsigned short)(n134 ^ n54 ^ n343);
  n2 = (unsigned short)(n254 & n356);
  n28 = (unsigned short)(n254 | n356);
  n1142 = (unsigned short)(n4 & n446 & 65535);
  n1156 = (unsigned short)(n446 ^ n20 ^ n46);
  n22 = (unsigned short)((n446 & n20) | (n20 & n46) | (n446 & n46));
  n46 = (unsigned short)(n460 ^ n564 ^ n24);
  n20 = (unsigned short)((n460 & n564) | (n564 & n24) | (n460 & n24));
  n34 = (unsigned short)(n476 ^ n580 ^ n38);
  n79 = (unsigned short)((n476 & n580) | (n580 & n38) | (n476 & n38));
  n1202 = (unsigned short)(n490 ^ n594 ^ n698);
  n1203 = (unsigned short)((n490 & n594) | (n594 & n698) | (n490 & n698));
  n343 = (unsigned short)(n608 ^ n712);
  n24 = (unsigned short)(n608 & n712);
  n30 = (unsigned short)((unsigned short)((unsigned short)(n1068 & n1142) |
    (unsigned short)(n1142 & n1156)) | (unsigned short)(n1068 & n1156));
  n356 = (unsigned short)(n28 ^ n756 ^ n46);
  n460 = (unsigned short)((n28 & n756) | (n756 & n46) | (n28 & n46));
  n12 = (unsigned short)(n372 ^ n2 ^ n34);
  n10 = (unsigned short)((n372 & n2) | (n2 & n34) | (n372 & n34));
  n38 = (unsigned short)(n22 ^ n43 ^ n876);
  n594 = (unsigned short)((n22 & n43) | (n43 & n876) | (n22 & n876));
  n22 = (unsigned short)(n20 ^ n786 ^ n890);
  n490 = (unsigned short)((n20 & n786) | (n786 & n890) | (n20 & n890));
  n20 = (unsigned short)(n79 ^ n802 ^ n906);
  n2 = (unsigned short)((n79 & n802) | (n802 & n906) | (n79 & n906));
  n34 = (unsigned short)(n1203 ^ n816 ^ n8);
  n8 = (unsigned short)((n1203 & n816) | (n816 & n8) | (n1203 & n8));
  n46 = (unsigned short)(n24 ^ n832 ^ n934);
  n79 = (unsigned short)((n24 & n832) | (n832 & n934) | (n24 & n934));
  n712 = (unsigned short)(n846 & n950);
  n28 = (unsigned short)(n846 ^ n950);
  n476 = (unsigned short)(n846 & n950);
  n698 = (unsigned short)((unsigned short)((unsigned short)(a & 1 & n26) | n313)
    & 65535);
  n580 = (unsigned short)(n356 ^ n30 ^ n38);
  n54 = (unsigned short)((unsigned short)((unsigned short)(n356 & n30) |
    (unsigned short)(n30 & n38)) | (unsigned short)(n356 & n38));
  n564 = (unsigned short)(n12 ^ n460 ^ n22);
  n446 = (unsigned short)((n12 & n460) | (n460 & n22) | (n12 & n22));
  n460 = (unsigned short)(n1202 ^ n10 ^ n20);
  n20 = (unsigned short)((n1202 & n10) | (n10 & n20) | (n1202 & n20));
  n22 = (unsigned short)(n343 & n34);
  n34 ^= n343;
  n24 = (unsigned short)(n14 & n26 & n46);
  n46 = (unsigned short)((n14 & n26) ^ n46);
  n30 = (unsigned short)(n564 ^ n54 ^ n594);
  n356 = (unsigned short)((n460 & n446) | (n446 & n490) | (n460 & n490));
  n343 = (unsigned short)(n34 ^ n20 ^ n2);
  n10 = (unsigned short)((n34 & n20) | (n20 & n2) | (n34 & n2));
  n12 = (unsigned short)(n46 ^ n22 ^ n8);
  n2 = (unsigned short)((n46 & n22) | (n22 & n8) | (n46 & n8));
  n8 = (unsigned short)(n28 ^ n24 ^ n79);
  n22 = (unsigned short)((n28 & n24) | (n24 & n79) | (n28 & n79));
  n24 = (unsigned short)(n964 ^ n712);
  n38 = (unsigned short)(n343 & n356);
  n79 = (unsigned short)((n12 & n10) | (n10 & n38) | (n12 & n38));
  n28 = (unsigned short)((n8 & n2) | (n2 & n79) | (n8 & n79));
  n20 = (unsigned short)((n30 & 1) << 1);
  n34 = (unsigned short)(n6 & n254);
  return (unsigned short)(n20 | n34 << 2 | ((unsigned short)~c & 1) << 3 | (n6 &
    n26) << 4 | ((unsigned short)((unsigned short)(n698 | n1156) ^ (unsigned
    short)~(unsigned short)((unsigned short)((unsigned short)(n115 & 65535) |
    MAX_uint16_T) | (unsigned short)(n115 & 65535))) & 1) << 5 | ((unsigned
    short)((unsigned short)~(unsigned short)((unsigned short)~(unsigned short)
    (n18 & n39) | n134) | (unsigned short)(n698 | n1156)) & 1) << 6 | ((unsigned
    short)((unsigned short)(n1203 & (unsigned short)~(unsigned short)(n134 &
    65535)) | (unsigned short)((unsigned short)~n1203 & (unsigned short)
    ((unsigned short)(n476 & (unsigned short)~(unsigned short)(n33 & n118 & n4))
     | (unsigned short)((unsigned short)~n476 & (unsigned short)(n1068 ^ n1142 ^
    n1156))))) & 1) << 7 | ((unsigned short)(n580 ^ n106) & 1) << 8 | ((unsigned
    short)(n30 ^ (n580 & n106)) & 1) << 9 | ((n460 ^ n446 ^ n490) | ((n564 & n54)
    | (n54 & n594) | (n564 & n594))) << 10 | (n343 ^ n356) << 11 | (n12 ^ n10 ^
    n38) << 12 | (n8 ^ n2 ^ n79) << 13 | (n24 ^ n22 ^ n28) << 14 | ((n964 & n712)
    | ((n24 & n22) | (n22 & n28) | (n24 & n28))) << 15);
}

//
// File trailer for mul8_236.cpp
//
// [EOF]
//
