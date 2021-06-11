//
// File: mul8_218.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 13:44:33
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_selector.h"
#include "mul8_218.h"
#include "mul8_347.h"
#include "mult_selector_rtwutil.h"

// Function Definitions

//
// Approximate function mul8_218
//   Library = EvoApprox8b
//   Circuit = mul8_218
//   Area   (180) = 9247
//   Delay  (180) = 2.980
//   Power  (180) = 4910.60
//   Area   (45) = 666
//   Delay  (45) = 1.130
//   Power  (45) = 424.30
//   Nodes = 136
//   HD = 69730
//   MAE = 26.61816
//   MSE = 2981.00000
//   MRE = 1.01 %
//   WCE = 296
//   WCRE = 100 %
//   EP = 63.6 %
// Arguments    : double a
//                double b
// Return Type  : unsigned short
//
unsigned short mul8_218(double a, double b)
{
  unsigned short c;
  double d1;
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
  unsigned short n20;
  unsigned short n22;
  unsigned short n24;
  unsigned short n26;
  unsigned short n28;
  unsigned short n46;
  unsigned short n60;
  unsigned short n76;
  unsigned short n90;
  unsigned short n106;
  unsigned short n121;
  unsigned short n134;
  unsigned short n150;
  unsigned short n164;
  unsigned short n180;
  unsigned short n194;
  unsigned short n208;
  unsigned short n224;
  unsigned short n238;
  unsigned short n254;
  unsigned short n282;
  unsigned short n298;
  unsigned short n312;
  unsigned short n329;
  unsigned short n343;
  unsigned short n356;
  unsigned short n372;
  unsigned short n386;
  unsigned short n402;
  unsigned short n416;
  unsigned short n432;
  unsigned short n446;
  unsigned short n460;
  unsigned short n476;
  unsigned short n490;
  unsigned short n520;
  unsigned short n534;
  unsigned short n550;
  unsigned short n564;
  unsigned short n580;
  unsigned short n594;
  unsigned short n608;
  unsigned short n638;
  unsigned short n654;
  unsigned short n668;
  unsigned short n682;
  unsigned short n698;
  unsigned short n712;
  unsigned short n728;
  unsigned short n742;
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
  unsigned short n981;
  unsigned short n994;
  unsigned short n1069;
  unsigned short n1082;
  d1 = rt_roundd_snf(a);
  if (d1 < 65536.0) {
    if (d1 >= 0.0) {
      b_a = (unsigned short)d1;
    } else {
      b_a = 0;
    }
  } else if (d1 >= 65536.0) {
    b_a = MAX_uint16_T;
  } else {
    b_a = 0;
  }

  d1 = rt_roundd_snf(b);
  if (d1 < 65536.0) {
    if (d1 >= 0.0) {
      b_b = (unsigned short)d1;
    } else {
      b_b = 0;
    }
  } else if (d1 >= 65536.0) {
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
  b_a = (unsigned short)((int)((unsigned int)b_b >> 1) & 1);
  n20 = (unsigned short)((int)((unsigned int)b_b >> 2) & 1);
  n22 = (unsigned short)((int)((unsigned int)b_b >> 3) & 1);
  n24 = (unsigned short)((int)((unsigned int)b_b >> 4) & 1);
  n26 = (unsigned short)((int)((unsigned int)b_b >> 5) & 1);
  n28 = (unsigned short)((int)((unsigned int)b_b >> 6) & 1);
  b_b = (unsigned short)((int)((unsigned int)b_b >> 7) & 1);
  n46 = (unsigned short)(n2 & n16);
  n60 = (unsigned short)(n4 & n16);
  n76 = (unsigned short)(n6 & (unsigned short)~(unsigned short)(((unsigned short)
    ~(unsigned short)(((n0 & n16) | (n26 ^ n4)) & n6) & n0) | n6));
  n90 = (unsigned short)(n8 & n16);
  n106 = (unsigned short)(n10 & n16);
  n121 = (unsigned short)(n12 & n16);
  n134 = (unsigned short)(n14 & n16);
  n150 = (unsigned short)(n0 & b_a);
  n164 = (unsigned short)(n2 & b_a);
  n180 = (unsigned short)(n4 & b_a);
  n194 = (unsigned short)(n6 & b_a);
  n208 = (unsigned short)(n8 & b_a);
  n224 = (unsigned short)(n10 & b_a);
  n238 = (unsigned short)(n12 & b_a);
  n254 = (unsigned short)(n14 & b_a);
  b_a = (unsigned short)(n0 & n20);
  n282 = (unsigned short)(n2 & n20);
  n298 = (unsigned short)(n4 & n20);
  n312 = (unsigned short)(n6 & n20);
  n329 = (unsigned short)(n8 & n20);
  n343 = (unsigned short)(n10 & n20);
  n356 = (unsigned short)(n12 & n20);
  n372 = (unsigned short)(n14 & n20);
  n386 = (unsigned short)(n0 & n22);
  n402 = (unsigned short)((n2 & n22) | ((unsigned short)~n2 & n2));
  n416 = (unsigned short)(n4 & n22);
  n432 = (unsigned short)(n6 & n22);
  n446 = (unsigned short)(n8 & n22);
  n460 = (unsigned short)(n10 & n22);
  n476 = (unsigned short)(n12 & n22);
  n490 = (unsigned short)(n14 & n22);
  n20 = (unsigned short)(n0 & n24);
  n520 = (unsigned short)(n2 & n24);
  n534 = (unsigned short)(n4 & n24);
  n550 = (unsigned short)(n6 & n24);
  n564 = (unsigned short)(n8 & n24);
  n580 = (unsigned short)(n10 & n24);
  n594 = (unsigned short)(n12 & n24);
  n608 = (unsigned short)(n14 & n24);
  n22 = (unsigned short)(n0 & n26);
  n638 = (unsigned short)(n2 & n26);
  n654 = (unsigned short)(n4 & n26);
  n668 = (unsigned short)(n6 & n26);
  n682 = (unsigned short)(n8 & n26);
  n698 = (unsigned short)(n10 & n26);
  n712 = (unsigned short)(n12 & n26);
  n728 = (unsigned short)(n14 & n26);
  n742 = (unsigned short)(n0 & n28);
  n756 = (unsigned short)(n2 & n28);
  n772 = (unsigned short)(n4 & n28);
  n786 = (unsigned short)(n6 & n28);
  n802 = (unsigned short)(n8 & n28);
  n816 = (unsigned short)(n10 & n28);
  n832 = (unsigned short)(n12 & n28);
  n846 = (unsigned short)(n14 & n28);
  n860 = (unsigned short)(n0 & b_b);
  n876 = (unsigned short)(n2 & b_b);
  n890 = (unsigned short)(n4 & b_b);
  n906 = (unsigned short)(n6 & b_b);
  n920 = (unsigned short)(n8 & b_b);
  n934 = (unsigned short)(n10 & b_b);
  n950 = (unsigned short)(n12 & b_b);
  n964 = (unsigned short)(n14 & b_b);
  n981 = (unsigned short)(n46 & n150);
  n994 = (unsigned short)(n60 ^ n164 ^ b_a);
  n60 = (unsigned short)((n60 & n164) | (n164 & b_a) | (n60 & b_a));
  n164 = (unsigned short)(n76 ^ n180 ^ n282);
  n6 = (unsigned short)((n76 & n180) | (n180 & n282) | (n76 & n282));
  n8 = (unsigned short)(n90 ^ n194 ^ n298);
  n28 = (unsigned short)((n90 & n194) | (n194 & n298) | (n90 & n298));
  n90 = (unsigned short)(n106 ^ n208 ^ n312);
  n180 = (unsigned short)((n106 & n208) | (n208 & n312) | (n106 & n312));
  n298 = (unsigned short)(n121 ^ n224 ^ n329);
  n282 = (unsigned short)((n121 & n224) | (n224 & n329) | (n121 & n329));
  n76 = (unsigned short)(n134 ^ n238 ^ n343);
  n1069 = (unsigned short)((n134 & n238) | (n238 & n343) | (n134 & n343));
  n1082 = (unsigned short)(n254 & n356);
  n26 = (unsigned short)(n254 ^ n356);
  n24 = (unsigned short)(n402 ^ n20);
  n343 = (unsigned short)(n402 & n20);
  n106 = (unsigned short)(n416 ^ n520 ^ n22);
  n520 = (unsigned short)((n416 & n520) | (n520 & n22) | (n416 & n22));
  n22 = (unsigned short)(n432 ^ n534 ^ n638);
  n402 = (unsigned short)((n432 & n534) | (n534 & n638) | (n432 & n638));
  n20 = (unsigned short)(n446 ^ n550 ^ n654);
  n14 = (unsigned short)((n446 & n550) | (n550 & n654) | (n446 & n654));
  b_b = (unsigned short)(n460 ^ n564 ^ n668);
  n12 = (unsigned short)((n460 & n564) | (n564 & n668) | (n460 & n668));
  b_a = (unsigned short)(n476 ^ n580 ^ n682);
  n10 = (unsigned short)((n476 & n580) | (n580 & n682) | (n476 & n682));
  n654 = (unsigned short)(n490 ^ n594 ^ n698);
  n2 = (unsigned short)((n490 & n594) | (n594 & n698) | (n490 & n698));
  n432 = (unsigned short)(n608 ^ n712);
  n4 = (unsigned short)(n608 & n712);
  n446 = (unsigned short)(n994 & n981);
  n668 = (unsigned short)(n164 ^ n60 ^ n386);
  n60 = (unsigned short)((n164 & n60) | (n60 & n386) | (n164 & n386));
  n164 = (unsigned short)(n8 ^ n6 ^ n24);
  n6 = (unsigned short)((n8 & n6) | (n6 & n24) | (n8 & n24));
  n8 = (unsigned short)(n90 ^ n28 ^ n106);
  n121 = (unsigned short)((n90 & n28) | (n28 & n106) | (n90 & n106));
  n28 = (unsigned short)(n298 ^ n180 ^ n22);
  n208 = (unsigned short)((n298 & n180) | (n180 & n22) | (n298 & n22));
  n329 = (unsigned short)(n76 ^ n282 ^ n20);
  n90 = (unsigned short)((n76 & n282) | (n282 & n20) | (n76 & n20));
  n194 = (unsigned short)(n26 ^ n1069 ^ b_b);
  n26 = (unsigned short)((n26 & n1069) | (n1069 & b_b) | (n26 & b_b));
  n312 = (unsigned short)(n372 ^ n1082 ^ b_a);
  n298 = (unsigned short)((n372 & n1082) | (n1082 & b_a) | (n372 & b_a));
  n22 = (unsigned short)(n520 ^ n742);
  n550 = (unsigned short)(n520 & n742);
  n180 = (unsigned short)(n402 ^ n756 ^ n860);
  n254 = (unsigned short)((n402 & n756) | (n756 & n860) | (n402 & n860));
  n76 = (unsigned short)(n14 ^ n772 ^ n876);
  n14 = (unsigned short)((n14 & n772) | (n772 & n876) | (n14 & n876));
  n282 = (unsigned short)(n12 ^ n786 ^ n890);
  n238 = (unsigned short)((n12 & n786) | (n786 & n890) | (n12 & n890));
  n20 = (unsigned short)(n10 ^ n802 ^ n906);
  n224 = (unsigned short)((n10 & n802) | (n802 & n906) | (n10 & n906));
  b_a = (unsigned short)(n2 ^ n816 ^ n920);
  n520 = (unsigned short)((n2 & n816) | (n816 & n920) | (n2 & n920));
  b_b = (unsigned short)(n4 ^ n832 ^ n934);
  n402 = (unsigned short)((n4 & n832) | (n832 & n934) | (n4 & n934));
  n534 = (unsigned short)(n846 & n950);
  n24 = (unsigned short)(n846 ^ n950);
  n416 = (unsigned short)(n668 & n446);
  n638 = (unsigned short)(n164 ^ n60);
  n106 = (unsigned short)(n164 & n60);
  n356 = (unsigned short)((n8 & n6) | (n6 & n343) | (n8 & n343));
  n1082 = (unsigned short)(n28 ^ n121 ^ n22);
  n343 = (unsigned short)((n28 & n121) | (n121 & n22) | (n28 & n22));
  n134 = (unsigned short)(n329 ^ n208 ^ n180);
  n22 = (unsigned short)((n329 & n208) | (n208 & n180) | (n329 & n180));
  n12 = (unsigned short)(n194 ^ n90 ^ n76);
  n4 = (unsigned short)((n194 & n90) | (n90 & n76) | (n194 & n76));
  n6 = (unsigned short)(n312 ^ n26 ^ n282);
  n76 = (unsigned short)((n312 & n26) | (n26 & n282) | (n312 & n282));
  n180 = (unsigned short)(n654 ^ n298 ^ n20);
  n20 = (unsigned short)((n654 & n298) | (n298 & n20) | (n654 & n20));
  n8 = (unsigned short)(n432 & b_a);
  b_a ^= n432;
  n10 = (unsigned short)(n728 & b_b);
  b_b ^= n728;
  n164 = (unsigned short)(n638 & n416);
  n121 = (unsigned short)(n1069 ^ n106);
  n312 = (unsigned short)(n1069 & n106);
  n208 = (unsigned short)(n1082 ^ n356);
  n329 = (unsigned short)((n134 & n343) | (n343 & n550) | (n134 & n550));
  n60 = (unsigned short)(n12 ^ n22 ^ n254);
  n90 = (unsigned short)((n12 & n22) | (n22 & n254) | (n12 & n254));
  n194 = (unsigned short)(n6 ^ n4 ^ n14);
  n298 = (unsigned short)((n6 & n4) | (n4 & n14) | (n6 & n14));
  n14 = (unsigned short)(n180 ^ n76 ^ n238);
  n28 = (unsigned short)((n180 & n76) | (n76 & n238) | (n180 & n238));
  n2 = (unsigned short)(b_a ^ n20 ^ n224);
  n26 = (unsigned short)((b_a & n20) | (n20 & n224) | (b_a & n224));
  n282 = (unsigned short)(b_b ^ n8 ^ n520);
  n12 = (unsigned short)((b_b & n8) | (n8 & n520) | (b_b & n520));
  n106 = (unsigned short)(n24 ^ n10 ^ n402);
  n20 = (unsigned short)((n24 & n10) | (n10 & n402) | (n24 & n402));
  n22 = (unsigned short)(n964 ^ n534);
  n76 = (unsigned short)(n121 & n164);
  n180 = (unsigned short)(n60 & n329);
  n24 = (unsigned short)((n194 & n90) | (n90 & n180) | (n194 & n180));
  n4 = (unsigned short)((n14 & n298) | (n298 & n24) | (n14 & n24));
  n6 = (unsigned short)((n2 & n28) | (n28 & n4) | (n2 & n4));
  n8 = (unsigned short)((n282 & n26) | (n26 & n6) | (n282 & n6));
  n10 = (unsigned short)((n106 & n12) | (n12 & n8) | (n106 & n8));
  c = (unsigned short)(n0 & n16);
  b_b = (unsigned short)((n46 ^ n150) << 1);
  b_a = (unsigned short)(n994 ^ n981);
  return (unsigned short)(c | b_b | b_a << 2 | (n668 ^ n446) << 3 | (n638 ^ n416)
    << 4 | (n121 ^ n164) << 5 | (n208 ^ n312 ^ n76) << 6 | (n134 ^ n343 ^ n550 ^
    (n1082 & n356) ^ ((n208 & n312) | (n312 & n76) | (n208 & n76))) << 7 | (n60 ^
    n329) << 8 | (n194 ^ n90 ^ n180) << 9 | (n14 ^ n298 ^ n24) << 10 | (n2 ^ n28
    ^ n4) << 11 | (n282 ^ n26 ^ n6) << 12 | (n106 ^ n12 ^ n8) << 13 | (n22 ^ n20
    ^ n10) << 14 | ((n964 & n534) | ((n22 & n20) | (n20 & n10) | (n22 & n10))) <<
    15);
}

//
// File trailer for mul8_218.cpp
//
// [EOF]
//
