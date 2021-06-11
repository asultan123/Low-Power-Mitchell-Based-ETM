//
// File: mul8_218.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 16:34:01
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_ETM_int.h"
#include "mul8_218.h"

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
// Arguments    : unsigned char a
//                unsigned char b
// Return Type  : unsigned short
//
unsigned short mul8_218(unsigned char a, unsigned char b)
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
  unsigned short n1068;
  unsigned short n1069;
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
  n46 = (unsigned short)(n2 & n16);
  n60 = (unsigned short)(n4 & n16);
  n76 = (unsigned short)(n6 & (unsigned short)~(unsigned short)(((unsigned short)
    ~(unsigned short)(((n0 & n16) | (n26 ^ n4)) & n6) & n0) | n6));
  n90 = (unsigned short)(n8 & n16);
  n106 = (unsigned short)(n10 & n16);
  n121 = (unsigned short)(n12 & n16);
  n134 = (unsigned short)(n14 & n16);
  n150 = (unsigned short)(n0 & n18);
  n164 = (unsigned short)(n2 & n18);
  n180 = (unsigned short)(n4 & n18);
  n194 = (unsigned short)(n6 & n18);
  n208 = (unsigned short)(n8 & n18);
  n224 = (unsigned short)(n10 & n18);
  n238 = (unsigned short)(n12 & n18);
  n254 = (unsigned short)(n14 & n18);
  n18 = (unsigned short)(n0 & n20);
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
  n860 = (unsigned short)(n0 & n30);
  n876 = (unsigned short)(n2 & n30);
  n890 = (unsigned short)(n4 & n30);
  n906 = (unsigned short)(n6 & n30);
  n920 = (unsigned short)(n8 & n30);
  n934 = (unsigned short)(n10 & n30);
  n950 = (unsigned short)(n12 & n30);
  n964 = (unsigned short)(n14 & n30);
  n981 = (unsigned short)(n46 & n150);
  n994 = (unsigned short)(n60 ^ n164 ^ n18);
  n14 = (unsigned short)((n60 & n164) | (n164 & n18) | (n60 & n18));
  n60 = (unsigned short)(n76 ^ n180 ^ n282);
  n6 = (unsigned short)((n76 & n180) | (n180 & n282) | (n76 & n282));
  n8 = (unsigned short)(n90 ^ n194 ^ n298);
  n28 = (unsigned short)((n90 & n194) | (n194 & n298) | (n90 & n298));
  n90 = (unsigned short)(n106 ^ n208 ^ n312);
  n76 = (unsigned short)((n106 & n208) | (n208 & n312) | (n106 & n312));
  n180 = (unsigned short)(n121 ^ n224 ^ n329);
  n282 = (unsigned short)((n121 & n224) | (n224 & n329) | (n121 & n329));
  n1068 = (unsigned short)(n134 ^ n238 ^ n343);
  n1069 = (unsigned short)((n134 & n238) | (n238 & n343) | (n134 & n343));
  n298 = (unsigned short)(n254 & n356);
  n164 = (unsigned short)(n254 ^ n356);
  n208 = (unsigned short)(n402 ^ n20);
  n134 = (unsigned short)(n402 & n20);
  n26 = (unsigned short)(n416 ^ n520 ^ n22);
  n416 = (unsigned short)((n416 & n520) | (n520 & n22) | (n416 & n22));
  n24 = (unsigned short)(n432 ^ n534 ^ n638);
  n520 = (unsigned short)((n432 & n534) | (n534 & n638) | (n432 & n638));
  n22 = (unsigned short)(n446 ^ n550 ^ n654);
  n30 = (unsigned short)((n446 & n550) | (n550 & n654) | (n446 & n654));
  n20 = (unsigned short)(n460 ^ n564 ^ n668);
  n12 = (unsigned short)((n460 & n564) | (n564 & n668) | (n460 & n668));
  n18 = (unsigned short)(n476 ^ n580 ^ n682);
  n10 = (unsigned short)((n476 & n580) | (n580 & n682) | (n476 & n682));
  n550 = (unsigned short)(n490 ^ n594 ^ n698);
  n2 = (unsigned short)((n490 & n594) | (n594 & n698) | (n490 & n698));
  n654 = (unsigned short)(n608 ^ n712);
  n4 = (unsigned short)(n608 & n712);
  n668 = (unsigned short)(n994 & n981);
  n564 = (unsigned short)(n60 ^ n14 ^ n386);
  n14 = (unsigned short)((n60 & n14) | (n14 & n386) | (n60 & n386));
  n60 = (unsigned short)(n8 ^ n6 ^ n208);
  n6 = (unsigned short)((n8 & n6) | (n6 & n208) | (n8 & n208));
  n8 = (unsigned short)(n90 ^ n28 ^ n26);
  n224 = (unsigned short)((n90 & n28) | (n28 & n26) | (n90 & n26));
  n28 = (unsigned short)(n180 ^ n76 ^ n24);
  n329 = (unsigned short)((n180 & n76) | (n76 & n24) | (n180 & n24));
  n121 = (unsigned short)(n1068 ^ n282 ^ n22);
  n194 = (unsigned short)((n1068 & n282) | (n282 & n22) | (n1068 & n22));
  n312 = (unsigned short)(n164 ^ n1069 ^ n20);
  n26 = (unsigned short)((n164 & n1069) | (n1069 & n20) | (n164 & n20));
  n106 = (unsigned short)(n372 ^ n298 ^ n18);
  n90 = (unsigned short)((n372 & n298) | (n298 & n18) | (n372 & n18));
  n22 = (unsigned short)(n416 ^ n742);
  n446 = (unsigned short)(n416 & n742);
  n180 = (unsigned short)(n520 ^ n756 ^ n860);
  n254 = (unsigned short)((n520 & n756) | (n756 & n860) | (n520 & n860));
  n24 = (unsigned short)(n30 ^ n772 ^ n876);
  n30 = (unsigned short)((n30 & n772) | (n772 & n876) | (n30 & n876));
  n76 = (unsigned short)(n12 ^ n786 ^ n890);
  n1068 = (unsigned short)((n12 & n786) | (n786 & n890) | (n12 & n890));
  n282 = (unsigned short)(n10 ^ n802 ^ n906);
  n343 = (unsigned short)((n10 & n802) | (n802 & n906) | (n10 & n906));
  n18 = (unsigned short)(n2 ^ n816 ^ n920);
  n416 = (unsigned short)((n2 & n816) | (n816 & n920) | (n2 & n920));
  n20 = (unsigned short)(n4 ^ n832 ^ n934);
  n520 = (unsigned short)((n4 & n832) | (n832 & n934) | (n4 & n934));
  n432 = (unsigned short)(n846 & n950);
  n298 = (unsigned short)(n846 ^ n950);
  n638 = (unsigned short)(n564 & n668);
  n534 = (unsigned short)(n60 ^ n14);
  n208 = (unsigned short)(n60 & n14);
  n356 = (unsigned short)((n8 & n6) | (n6 & n134) | (n8 & n134));
  n402 = (unsigned short)(n28 ^ n224 ^ n22);
  n134 = (unsigned short)((n28 & n224) | (n224 & n22) | (n28 & n22));
  n238 = (unsigned short)(n121 ^ n329 ^ n180);
  n22 = (unsigned short)((n121 & n329) | (n329 & n180) | (n121 & n180));
  n14 = (unsigned short)(n312 ^ n194 ^ n24);
  n6 = (unsigned short)((n312 & n194) | (n194 & n24) | (n312 & n24));
  n8 = (unsigned short)(n106 ^ n26 ^ n76);
  n28 = (unsigned short)((n106 & n26) | (n26 & n76) | (n106 & n76));
  n180 = (unsigned short)(n550 ^ n90 ^ n282);
  n76 = (unsigned short)((n550 & n90) | (n90 & n282) | (n550 & n282));
  n10 = (unsigned short)(n654 & n18);
  n18 ^= n654;
  n12 = (unsigned short)(n728 & n20);
  n20 ^= n728;
  n164 = (unsigned short)(n534 & n638);
  n224 = (unsigned short)(n1069 ^ n208);
  n106 = (unsigned short)(n1069 & n208);
  n329 = (unsigned short)(n402 ^ n356);
  n121 = (unsigned short)((n238 & n134) | (n134 & n446) | (n238 & n446));
  n60 = (unsigned short)(n14 ^ n22 ^ n254);
  n194 = (unsigned short)((n14 & n22) | (n22 & n254) | (n14 & n254));
  n312 = (unsigned short)(n8 ^ n6 ^ n30);
  n30 = (unsigned short)((n8 & n6) | (n6 & n30) | (n8 & n30));
  n90 = (unsigned short)(n180 ^ n28 ^ n1068);
  n2 = (unsigned short)((n180 & n28) | (n28 & n1068) | (n180 & n1068));
  n4 = (unsigned short)(n18 ^ n76 ^ n343);
  n26 = (unsigned short)((n18 & n76) | (n76 & n343) | (n18 & n343));
  n282 = (unsigned short)(n20 ^ n10 ^ n416);
  n14 = (unsigned short)((n20 & n10) | (n10 & n416) | (n20 & n416));
  n208 = (unsigned short)(n298 ^ n12 ^ n520);
  n22 = (unsigned short)((n298 & n12) | (n12 & n520) | (n298 & n520));
  n76 = (unsigned short)(n964 ^ n432);
  n24 = (unsigned short)(n224 & n164);
  n28 = (unsigned short)(n60 & n121);
  n180 = (unsigned short)((n312 & n194) | (n194 & n28) | (n312 & n28));
  n6 = (unsigned short)((n90 & n30) | (n30 & n180) | (n90 & n180));
  n8 = (unsigned short)((n4 & n2) | (n2 & n6) | (n4 & n6));
  n10 = (unsigned short)((n282 & n26) | (n26 & n8) | (n282 & n8));
  n12 = (unsigned short)((n208 & n14) | (n14 & n10) | (n208 & n10));
  c = (unsigned short)(n0 & n16);
  n20 = (unsigned short)((n46 ^ n150) << 1);
  n18 = (unsigned short)(n994 ^ n981);
  return (unsigned short)(c | n20 | n18 << 2 | (n564 ^ n668) << 3 | (n534 ^ n638)
    << 4 | (n224 ^ n164) << 5 | (n329 ^ n106 ^ n24) << 6 | (n238 ^ n134 ^ n446 ^
    (n402 & n356) ^ ((n329 & n106) | (n106 & n24) | (n329 & n24))) << 7 | (n60 ^
    n121) << 8 | (n312 ^ n194 ^ n28) << 9 | (n90 ^ n30 ^ n180) << 10 | (n4 ^ n2 ^
    n6) << 11 | (n282 ^ n26 ^ n8) << 12 | (n208 ^ n14 ^ n10) << 13 | (n76 ^ n22 ^
    n12) << 14 | ((n964 & n432) | ((n76 & n22) | (n22 & n12) | (n76 & n12))) <<
    15);
}

//
// File trailer for mul8_218.cpp
//
// [EOF]
//
