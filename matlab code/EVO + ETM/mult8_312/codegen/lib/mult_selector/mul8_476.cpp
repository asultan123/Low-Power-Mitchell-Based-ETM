//
// File: mul8_476.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 13:44:33
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_selector.h"
#include "mul8_476.h"
#include "mul8_347.h"
#include "mult_selector_rtwutil.h"

// Function Definitions

//
// Approximate function mul8_476
//   Library = EvoApprox8b
//   Circuit = mul8_476
//   Area   (180) = 8087
//   Delay  (180) = 3.570
//   Power  (180) = 3744.00
//   Area   (45) = 594
//   Delay  (45) = 1.250
//   Power  (45) = 324.00
//   Nodes = 136
//   HD = 267606
//   MAE = 104.91718
//   MSE = 21249.56250
//   MRE = 3.01 %
//   WCE = 594
//   WCRE = 500 %
//   EP = 96.3 %
// Arguments    : double a
//                double b
// Return Type  : unsigned short
//
unsigned short mul8_476(double a, double b)
{
  unsigned short c;
  double d3;
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
  unsigned short n35;
  unsigned short n38;
  unsigned short n41;
  unsigned short n46;
  unsigned short n47;
  unsigned short n57;
  unsigned short n90;
  unsigned short n106;
  unsigned short n121;
  unsigned short n150;
  unsigned short n238;
  unsigned short n254;
  unsigned short n255;
  unsigned short n329;
  unsigned short n343;
  unsigned short n356;
  unsigned short n372;
  unsigned short n432;
  unsigned short n446;
  unsigned short n460;
  unsigned short n476;
  unsigned short n490;
  unsigned short n514;
  unsigned short n534;
  unsigned short n564;
  unsigned short n580;
  unsigned short n594;
  unsigned short n608;
  unsigned short n668;
  unsigned short n682;
  unsigned short n698;
  unsigned short n712;
  unsigned short n728;
  unsigned short n756;
  unsigned short n772;
  unsigned short n786;
  unsigned short n802;
  unsigned short n816;
  unsigned short n832;
  unsigned short n846;
  unsigned short n860;
  unsigned short n876;
  unsigned short n890;
  unsigned short n906;
  unsigned short n920;
  unsigned short n934;
  unsigned short n950;
  unsigned short n964;
  unsigned short n1068;
  unsigned short n1082;
  unsigned short n1098;
  unsigned short n1156;
  unsigned short n1187;
  d3 = rt_roundd_snf(a);
  if (d3 < 65536.0) {
    if (d3 >= 0.0) {
      b_a = (unsigned short)d3;
    } else {
      b_a = 0;
    }
  } else if (d3 >= 65536.0) {
    b_a = MAX_uint16_T;
  } else {
    b_a = 0;
  }

  d3 = rt_roundd_snf(b);
  if (d3 < 65536.0) {
    if (d3 >= 0.0) {
      b_b = (unsigned short)d3;
    } else {
      b_b = 0;
    }
  } else if (d3 >= 65536.0) {
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
  b_a = (unsigned short)(n18 & n12);
  b_b = (unsigned short)~(unsigned short)(b_a & (n0 & n6));
  n35 = (unsigned short)~(unsigned short)(b_a & (n0 & n6));
  n38 = (unsigned short)~(unsigned short)((n30 & n24) | n35);
  n41 = (unsigned short)(n12 & n38);
  n46 = (unsigned short)~(unsigned short)((n2 & n18) | b_b);
  n47 = (unsigned short)~(unsigned short)((n2 & n18) | b_b);
  n57 = (unsigned short)~(unsigned short)((unsigned short)~(unsigned short)((n18
    & n38) | n35) | (unsigned short)~(unsigned short)(n2 & (n24 & n30)));
  b_a = (unsigned short)~(unsigned short)((n18 & n12) | n35);
  b_b = (unsigned short)~(unsigned short)((n18 | n4) & n41);
  n90 = (unsigned short)(n47 & b_a);
  n106 = (unsigned short)(n10 & b_a);
  n121 = (unsigned short)(n12 & n38);
  b_a = (unsigned short)(n14 & n16);
  n150 = (unsigned short)(n0 & n18);
  n238 = (unsigned short)(n12 & n18);
  n254 = (unsigned short)(n14 & n18);
  n255 = (unsigned short)(n14 & n18);
  n329 = (unsigned short)(n8 & n20);
  n343 = (unsigned short)(n10 & n20);
  n356 = (unsigned short)(n12 & n20);
  n372 = (unsigned short)(n14 & n20);
  n432 = (unsigned short)(n6 & n22);
  n446 = (unsigned short)(n8 & n22);
  n460 = (unsigned short)(n10 & n22);
  n476 = (unsigned short)(n12 & n22);
  n490 = (unsigned short)(n14 & n22);
  n514 = (unsigned short)~(unsigned short)((unsigned short)(n12 & n18) |
    (unsigned short)~(unsigned short)(n18 & (unsigned short)~(unsigned short)
    ((unsigned short)((unsigned short)(b_b & (unsigned short)~(unsigned short)
    ((n18 & n38) | n35)) | (unsigned short)((unsigned short)~b_b & n18)) ^
     (unsigned short)~(unsigned short)(n57 ^ n41))));
  n534 = (unsigned short)(n4 & n24);
  n35 = (unsigned short)(n6 & n24);
  n564 = (unsigned short)(n8 & n24);
  n580 = (unsigned short)(n10 & n24);
  n594 = (unsigned short)(n12 & n24);
  n608 = (unsigned short)(n14 & n24);
  b_b = (unsigned short)(n2 & n26);
  n38 = (unsigned short)(n4 & n26);
  n668 = (unsigned short)(n6 & n26);
  n682 = (unsigned short)(n8 & n26);
  n698 = (unsigned short)(n10 & n26);
  n712 = (unsigned short)(n12 & n26);
  n728 = (unsigned short)(n14 & n26);
  n756 = (unsigned short)(n2 & n28);
  n772 = (unsigned short)(n4 & n28);
  n786 = (unsigned short)(n6 & n28);
  n802 = (unsigned short)(n8 & n28);
  n816 = (unsigned short)(n10 & n28);
  n832 = (unsigned short)(n12 & n28);
  n846 = (unsigned short)(n14 & n28);
  n860 = (unsigned short)(n0 & n30);
  n876 = (unsigned short)(n57 & n30);
  n890 = (unsigned short)(n4 & n30);
  n906 = (unsigned short)(n6 & n30);
  n920 = (unsigned short)(n8 & n30);
  n934 = (unsigned short)(n10 & n30);
  n950 = (unsigned short)(n12 & n30);
  n964 = (unsigned short)(n14 & n30);
  n1068 = (unsigned short)(b_a ^ n238 ^ n343);
  n14 = (unsigned short)((b_a & n238) | (n238 & n343) | (b_a & n343));
  n1082 = (unsigned short)(n254 & n356);
  n1098 = (unsigned short)(n254 ^ n356);
  n26 = (unsigned short)(n432 ^ n534 ^ b_b);
  n254 = (unsigned short)((n432 & n534) | (n534 & b_b) | (n432 & b_b));
  n1156 = (unsigned short)(n446 ^ n35 ^ n38);
  n38 = (unsigned short)((n446 & n35) | (n35 & n38) | (n446 & n38));
  b_b = (unsigned short)(n460 ^ n564 ^ n668);
  n35 = (unsigned short)((n460 & n564) | (n564 & n668) | (n460 & n668));
  b_a = (unsigned short)(n476 ^ n580 ^ n682);
  n1187 = (unsigned short)((n476 & n580) | (n580 & n682) | (n476 & n682));
  n580 = (unsigned short)(n490 ^ n594 ^ n698);
  n57 = (unsigned short)((n490 & n594) | (n594 & n698) | (n490 & n698));
  n446 = (unsigned short)(n608 ^ n712);
  n476 = (unsigned short)(n608 & n712);
  n608 = (unsigned short)((n6 & n16) | (n41 & (unsigned short)~(unsigned short)
    ~(unsigned short)(n2 & (n24 & n30))));
  n682 = (unsigned short)(n106 | n90);
  n10 = (unsigned short)(n329 ^ n534 ^ n26);
  n4 = (unsigned short)((n329 & n534) | (n534 & n26) | (n329 & n26));
  n8 = (unsigned short)(n1068 ^ n121 ^ n1156);
  n238 = (unsigned short)((n1068 & n121) | (n121 & n1156) | (n1068 & n1156));
  n343 = (unsigned short)(n1098 ^ n14 ^ b_b);
  n712 = (unsigned short)((n1098 & n14) | (n14 & b_b) | (n1098 & b_b));
  n1068 = (unsigned short)(n372 ^ n1082 ^ b_a);
  n594 = (unsigned short)((n372 & n1082) | (n1082 & b_a) | (n372 & b_a));
  n6 = (unsigned short)((unsigned short)~(unsigned short)(n41 & n22) & n2 & (n0
    & n28));
  n1098 = (unsigned short)(n254 ^ n756 ^ n860);
  n564 = (unsigned short)((n254 & n756) | (n756 & n860) | (n254 & n860));
  n460 = (unsigned short)(n38 ^ n772 ^ n876);
  n1156 = (unsigned short)((n38 & n772) | (n772 & n876) | (n38 & n876));
  n38 = (unsigned short)(n35 ^ n786 ^ n890);
  n534 = (unsigned short)((n35 & n786) | (n786 & n890) | (n35 & n890));
  n35 = (unsigned short)(n1187 ^ n802 ^ n906);
  n1082 = (unsigned short)((n1187 & n802) | (n802 & n906) | (n1187 & n906));
  b_a = (unsigned short)(n57 ^ n816 ^ n920);
  n490 = (unsigned short)((n57 & n816) | (n816 & n920) | (n57 & n920));
  b_b = (unsigned short)(n476 ^ n832 ^ n934);
  n698 = (unsigned short)((n476 & n832) | (n832 & n934) | (n476 & n934));
  n24 = (unsigned short)(n846 & n950);
  n26 = (unsigned short)(n846 ^ n950);
  n16 = (unsigned short)(n90 ^ n608);
  n432 = (unsigned short)(n90 & n608);
  n668 = (unsigned short)(n10 ^ n514 ^ n255);
  n30 = (unsigned short)((n10 & n514) | (n514 & n255) | (n10 & n255));
  n329 = (unsigned short)(n8 ^ n4 ^ n1098);
  n254 = (unsigned short)((n8 & n4) | (n4 & n1098) | (n8 & n1098));
  n356 = (unsigned short)(n343 ^ n238 ^ n460);
  n238 = (unsigned short)((n343 & n238) | (n238 & n460) | (n343 & n460));
  n343 = (unsigned short)(n1068 ^ n712 ^ n38);
  n38 = (unsigned short)((n1068 & n712) | (n712 & n38) | (n1068 & n38));
  n1098 = (unsigned short)(n580 ^ n594 ^ n35);
  n35 = (unsigned short)((n580 & n594) | (n594 & n35) | (n580 & n35));
  n10 = (unsigned short)(n446 & b_a);
  b_a ^= n446;
  n14 = (unsigned short)(n728 & b_b);
  b_b ^= n728;
  n1068 = (unsigned short)(n16 | n106);
  n1187 = (unsigned short)(n682 ^ n432);
  n608 = (unsigned short)(n682 & n432);
  n712 = (unsigned short)(n668 ^ n682);
  n580 = (unsigned short)(n668 & n682);
  n682 = (unsigned short)((n329 & n30) | (n30 & n6) | (n329 & n6));
  n476 = (unsigned short)(n356 ^ n254 ^ n564);
  n446 = (unsigned short)((n356 & n254) | (n254 & n564) | (n356 & n564));
  n594 = (unsigned short)(n343 ^ n238 ^ n1156);
  n1156 = (unsigned short)((n343 & n238) | (n238 & n1156) | (n343 & n1156));
  n564 = (unsigned short)(n1098 ^ n38 ^ n534);
  n4 = (unsigned short)((n1098 & n38) | (n38 & n534) | (n1098 & n534));
  n8 = (unsigned short)(b_a ^ n35 ^ n1082);
  n57 = (unsigned short)((b_a & n35) | (n35 & n1082) | (b_a & n1082));
  n460 = (unsigned short)(b_b ^ n10 ^ n490);
  n432 = (unsigned short)((b_b & n10) | (n10 & n490) | (b_b & n490));
  n668 = (unsigned short)(n26 ^ n14 ^ n698);
  b_b = (unsigned short)((n26 & n14) | (n14 & n698) | (n26 & n698));
  n35 = (unsigned short)(n964 ^ n24);
  n38 = (unsigned short)(n1187 & n1068);
  n1098 = (unsigned short)((unsigned short)((n712 & n608) | (n608 & n38)) |
    (unsigned short)(n712 & n38));
  n238 = (unsigned short)((n476 & n682) | (n682 & n580) | (n476 & n580));
  n343 = (unsigned short)((n594 & n446) | (n446 & n238) | (n594 & n238));
  n10 = (unsigned short)((n564 & n1156) | (n1156 & n343) | (n564 & n343));
  n14 = (unsigned short)((n8 & n4) | (n4 & n10) | (n8 & n10));
  n254 = (unsigned short)((n460 & n57) | (n57 & n14) | (n460 & n14));
  n356 = (unsigned short)((n668 & n432) | (n432 & n254) | (n668 & n254));
  c = (unsigned short)(n18 & n12);
  n26 = (unsigned short)(((unsigned short)(n46 ^ n150) & 1) << 1);
  b_a = (unsigned short)((n12 & n20) ^ (n46 & n150));
  return (unsigned short)(c | n26 | b_a << 2 | (n121 & n18) << 3 | ((unsigned
    short)(n16 | n106) & 1) << 4 | ((unsigned short)(n1187 ^ n1068) & 1) << 5 |
    ((unsigned short)(n712 ^ n608 ^ n38) & 1) << 6 | ((unsigned short)((unsigned
    short)(n1098 & (unsigned short)~(unsigned short)(n47 & n2)) | (unsigned
    short)((unsigned short)~n1098 & (n329 ^ n30 ^ n6))) & 1) << 7 | ((unsigned
    short)(n476 ^ n682 ^ n580) & 1) << 8 | (n594 ^ n446 ^ n238) << 9 | (n564 ^
    n1156 ^ n343) << 10 | (n8 ^ n4 ^ n10) << 11 | (n460 ^ n57 ^ n14) << 12 |
    (n668 ^ n432 ^ n254) << 13 | (n35 ^ b_b ^ n356) << 14 | ((n964 & n24) |
    ((n35 & b_b) | (b_b & n356) | (n35 & n356))) << 15);
}

//
// File trailer for mul8_476.cpp
//
// [EOF]
//
