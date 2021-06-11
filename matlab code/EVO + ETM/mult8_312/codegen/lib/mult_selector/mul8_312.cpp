//
// File: mul8_312.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 13:44:33
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_selector.h"
#include "mul8_312.h"
#include "mul8_347.h"
#include "mult_selector_rtwutil.h"

// Function Definitions

//
// Approximate function mul8_312
//   Library = EvoApprox8b
//   Circuit = mul8_312
//   Area   (180) = 10875
//   Delay  (180) = 2.480
//   Power  (180) = 5149.30
//   Area   (45) = 780
//   Delay  (45) = 0.920
//   Power  (45) = 441.00
//   Nodes = 180
//   HD = 203161
//   MAE = 383.08447
//   MSE = 508333.90625
//   MRE = 5.00 %
//   WCE = 2336
//   WCRE = 100 %
//   EP = 85.1 %
// Arguments    : double a
//                double b
// Return Type  : unsigned short
//
unsigned short mul8_312(double a, double b)
{
  unsigned short c;
  double d5;
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
  unsigned short n32;
  unsigned short n46;
  unsigned short n51;
  unsigned short n53;
  unsigned short n60;
  unsigned short n65;
  unsigned short n73;
  unsigned short n76;
  unsigned short n77;
  unsigned short n86;
  unsigned short n87;
  unsigned short n89;
  unsigned short n90;
  unsigned short n103;
  unsigned short n105;
  unsigned short n106;
  unsigned short n121;
  unsigned short n134;
  unsigned short n145;
  unsigned short n164;
  unsigned short n167;
  unsigned short n169;
  unsigned short n180;
  unsigned short n194;
  unsigned short n206;
  unsigned short n208;
  unsigned short n224;
  unsigned short n238;
  unsigned short n243;
  unsigned short n254;
  unsigned short n267;
  unsigned short n268;
  unsigned short n342;
  unsigned short n343;
  unsigned short n356;
  unsigned short n372;
  unsigned short n386;
  unsigned short n432;
  unsigned short n446;
  unsigned short n460;
  unsigned short n476;
  unsigned short n490;
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
  unsigned short n889;
  unsigned short n890;
  unsigned short n906;
  unsigned short n920;
  unsigned short n934;
  unsigned short n950;
  unsigned short n964;
  unsigned short n995;
  unsigned short n1008;
  unsigned short n1024;
  unsigned short n1082;
  unsigned short n1113;
  d5 = rt_roundd_snf(a);
  if (d5 < 65536.0) {
    if (d5 >= 0.0) {
      b_a = (unsigned short)d5;
    } else {
      b_a = 0;
    }
  } else if (d5 >= 65536.0) {
    b_a = MAX_uint16_T;
  } else {
    b_a = 0;
  }

  d5 = rt_roundd_snf(b);
  if (d5 < 65536.0) {
    if (d5 >= 0.0) {
      b_b = (unsigned short)d5;
    } else {
      b_b = 0;
    }
  } else if (d5 >= 65536.0) {
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
  n32 = (unsigned short)(n0 & n16);
  b_b = (unsigned short)(n18 ^ n14);
  n46 = (unsigned short)(n2 & n16);
  n51 = (unsigned short)(n4 & n20);
  n53 = (unsigned short)(n26 & n4);
  n60 = (unsigned short)(n4 & n16);
  n65 = (unsigned short)(n28 & n12);
  b_a = (unsigned short)~(unsigned short)(b_b & (n46 & n26));
  n73 = (unsigned short)~(unsigned short)(n65 & (n46 & n51));
  n76 = (unsigned short)(n6 & n16);
  n77 = (unsigned short)(n6 & n16);
  n86 = (unsigned short)~b_a;
  n87 = (unsigned short)~b_a;
  n89 = (unsigned short)(n65 | n12);
  n90 = (unsigned short)(n8 & n16);
  n103 = (unsigned short)~(unsigned short)(n18 | n20);
  n105 = (unsigned short)~(unsigned short)~(unsigned short)(n73 | (unsigned
    short)~(unsigned short)(b_b & (n46 & n26)));
  n106 = (unsigned short)(n10 & n16);
  b_a = (unsigned short)~n105;
  n121 = (unsigned short)(n12 & n16);
  n134 = (unsigned short)(n14 & n16);
  n145 = (unsigned short)~b_b;
  n164 = (unsigned short)(n2 & n18);
  n167 = (unsigned short)~(unsigned short)(b_a & ((n18 ^ n14) & n30));
  n169 = (unsigned short)~(unsigned short)(n89 ^ n86);
  n180 = (unsigned short)(n4 & n18);
  n194 = (unsigned short)(n6 & n18);
  n206 = (unsigned short)(n10 ^ (unsigned short)~(unsigned short)((unsigned
    short)~(unsigned short)((n0 & n16) | (n51 | (n2 & n16))) & n53) ^ n6);
  n208 = (unsigned short)(n8 & n18);
  n224 = (unsigned short)(n10 & n18);
  n238 = (unsigned short)(n12 & n18);
  n243 = (unsigned short)~(unsigned short)(n169 | (unsigned short)(n24 | n8 |
    b_b));
  n254 = (unsigned short)(n14 & n18);
  n267 = (unsigned short)~(unsigned short)((unsigned short)(b_a ^ n20) &
    (unsigned short)~(unsigned short)(n18 | n20));
  n268 = (unsigned short)(n77 & n20 & n20);
  b_a = (unsigned short)(n2 & n20);
  b_b = (unsigned short)(n4 & (unsigned short)~n73);
  n73 = (unsigned short)(n6 & n20);
  n342 = (unsigned short)(n10 ^ n20);
  n343 = (unsigned short)(n10 & n20);
  n356 = (unsigned short)(n12 & n20);
  n372 = (unsigned short)(n14 & n20);
  n386 = (unsigned short)(n51 & (unsigned short)~(unsigned short)(n65 & (n46 &
    n51)));
  n20 = (unsigned short)(n2 & n22);
  n432 = (unsigned short)(n6 & n22);
  n446 = (unsigned short)(n8 & n22);
  n460 = (unsigned short)(n10 & n22);
  n476 = (unsigned short)(n12 & n22);
  n490 = (unsigned short)(n14 & n22);
  n534 = (unsigned short)(n4 & n24);
  n550 = (unsigned short)(n6 & n24);
  n564 = (unsigned short)(n8 & n24);
  n580 = (unsigned short)(n10 & n24);
  n594 = (unsigned short)(n12 & n24);
  n608 = (unsigned short)(n14 & n24);
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
  n889 = (unsigned short)~(unsigned short)((unsigned short)~(unsigned short)(n8
    & (n206 & (unsigned short)~(unsigned short)(n77 & ((n26 & n24) | ((unsigned
    short)~n26 & n30))))) | n206);
  n890 = (unsigned short)(n4 & n30);
  n906 = (unsigned short)(n6 & n30);
  n920 = (unsigned short)(n8 & n30);
  n934 = (unsigned short)(n10 & n30);
  n950 = (unsigned short)(n12 & n30);
  n964 = (unsigned short)(n14 & n30);
  n995 = (unsigned short)((n60 & n164) | (n164 & n268) | (n60 & n268));
  n1008 = (unsigned short)(n76 ^ n180 ^ b_a);
  n30 = (unsigned short)((n76 & n180) | (n180 & b_a) | (n76 & b_a));
  n1024 = (unsigned short)(n90 ^ n194 ^ b_b);
  n77 = (unsigned short)((n90 & n194) | (n194 & b_b) | (n90 & b_b));
  n10 = (unsigned short)(n106 ^ n208 ^ n73);
  n76 = (unsigned short)((n106 & n208) | (n208 & n73) | (n106 & n73));
  n90 = (unsigned short)(n121 ^ n224);
  n194 = (unsigned short)(n121 & n224);
  n208 = (unsigned short)(n134 ^ n238 ^ n343);
  n343 = (unsigned short)((n134 & n238) | (n238 & n343) | (n134 & n343));
  n1082 = (unsigned short)(n254 & n356);
  n121 = (unsigned short)(n254 ^ n356);
  n51 = (unsigned short)(n20 ^ n86);
  n1113 = (unsigned short)(n20 & n86);
  b_b = (unsigned short)((n4 & n22) ^ (n2 & n254) ^ (n254 & n356));
  n65 = (unsigned short)(n432 ^ n534 ^ n638);
  n6 = (unsigned short)((n432 & n534) | (n534 & n638) | (n432 & n638));
  n20 = (unsigned short)(n446 ^ n550 ^ n654);
  n24 = (unsigned short)((n446 & n550) | (n550 & n654) | (n446 & n654));
  n73 = (unsigned short)(n460 ^ n564 ^ n668);
  n206 = (unsigned short)((n460 & n564) | (n564 & n668) | (n460 & n668));
  b_a = (unsigned short)(n476 ^ n580 ^ n682);
  n564 = (unsigned short)((n476 & n580) | (n580 & n682) | (n476 & n682));
  n476 = (unsigned short)(n490 ^ n594 ^ n698);
  n12 = (unsigned short)((n490 & n594) | (n594 & n698) | (n490 & n698));
  n22 = (unsigned short)(n608 ^ n712);
  n180 = (unsigned short)(n608 & n712);
  n580 = (unsigned short)((n60 ^ n164 ^ n268) & ((unsigned short)~(unsigned
    short)((unsigned short)((unsigned short)((n145 & n342) | (n342 & n267)) |
    (unsigned short)(n145 & n267)) & (n134 & (unsigned short)~(unsigned short)
    (n145 & n8))) & (n14 & n18)));
  n490 = (unsigned short)(n1008 ^ n995 ^ n386);
  n86 = (unsigned short)((n1008 & n995) | (n995 & n386) | (n1008 & n386));
  n460 = (unsigned short)(n1024 ^ n30 ^ n51);
  n654 = (unsigned short)((n1024 & n30) | (n30 & n51) | (n1024 & n51));
  n254 = (unsigned short)(n10 ^ n77 ^ b_b);
  n446 = (unsigned short)((n10 & n77) | (n77 & b_b) | (n10 & b_b));
  n30 = (unsigned short)(n90 ^ n76 ^ n65);
  n77 = (unsigned short)((n90 & n76) | (n76 & n65) | (n90 & n65));
  n10 = (unsigned short)(n208 ^ n194 ^ n20);
  n432 = (unsigned short)((n208 & n194) | (n194 & n20) | (n208 & n20));
  n534 = (unsigned short)(n121 ^ n343 ^ n73);
  n224 = (unsigned short)((n121 & n343) | (n343 & n73) | (n121 & n73));
  n238 = (unsigned short)(n372 ^ n1082 ^ b_a);
  n121 = (unsigned short)((n372 & n1082) | (n1082 & b_a) | (n372 & b_a));
  n65 = (unsigned short)(n889 ^ n742);
  n1024 = (unsigned short)(n889 & n742);
  n76 = (unsigned short)(n6 ^ n756 ^ n860);
  n6 = (unsigned short)((n6 & n756) | (n756 & n860) | (n6 & n860));
  n51 = (unsigned short)(n24 ^ n772 ^ n876);
  n24 = (unsigned short)((n24 & n772) | (n772 & n876) | (n24 & n876));
  n20 = (unsigned short)(n206 ^ n786 ^ n890);
  n668 = (unsigned short)((n206 & n786) | (n786 & n890) | (n206 & n890));
  n73 = (unsigned short)(n564 ^ n802 ^ n906);
  n206 = (unsigned short)((n564 & n802) | (n802 & n906) | (n564 & n906));
  b_a = (unsigned short)(n12 ^ n816 ^ n920);
  n343 = (unsigned short)((n12 & n816) | (n816 & n920) | (n12 & n920));
  b_b = (unsigned short)(n180 ^ n832 ^ n934);
  n208 = (unsigned short)((n180 & n832) | (n832 & n934) | (n180 & n934));
  n550 = (unsigned short)(n846 & n950);
  n90 = (unsigned short)(n846 ^ n950);
  n638 = (unsigned short)(n490 & n580);
  n564 = (unsigned short)(n460 ^ n86);
  n86 &= n460;
  n460 = (unsigned short)(n254 ^ n654 ^ n1113);
  n654 = (unsigned short)((n254 & n654) | (n654 & n1113) | (n254 & n1113));
  n254 = (unsigned short)(n30 ^ n446 ^ n65);
  n194 = (unsigned short)((n30 & n446) | (n446 & n65) | (n30 & n65));
  n446 = (unsigned short)(n10 ^ n77 ^ n76);
  n30 = (unsigned short)((n10 & n77) | (n77 & n76) | (n10 & n76));
  n12 = (unsigned short)(n534 ^ n432 ^ n51);
  n51 = (unsigned short)((n534 & n432) | (n432 & n51) | (n534 & n51));
  n65 = (unsigned short)(n238 ^ n224 ^ n20);
  n432 = (unsigned short)((n238 & n224) | (n224 & n20) | (n238 & n20));
  n534 = (unsigned short)(n476 ^ n121 ^ n73);
  n73 = (unsigned short)((n476 & n121) | (n121 & n73) | (n476 & n73));
  n77 = (unsigned short)(n22 & b_a);
  b_a ^= n22;
  n20 = (unsigned short)(n728 & b_b);
  b_b ^= n728;
  n238 = (unsigned short)((n446 & n194) | (n194 & n1024) | (n446 & n1024));
  n180 = (unsigned short)(n12 ^ n30 ^ n6);
  n121 = (unsigned short)((n12 & n30) | (n30 & n6) | (n12 & n6));
  n224 = (unsigned short)(n65 ^ n51 ^ n24);
  n24 = (unsigned short)((n65 & n51) | (n51 & n24) | (n65 & n24));
  n6 = (unsigned short)((n534 & n432) | (n432 & n668) | (n534 & n668));
  n10 = (unsigned short)(b_a ^ n73 ^ n206);
  n76 = (unsigned short)((b_a & n73) | (n73 & n206) | (b_a & n206));
  n206 = (unsigned short)(b_b ^ n77 ^ n343);
  n30 = (unsigned short)((b_b & n77) | (n77 & n343) | (b_b & n343));
  n12 = (unsigned short)(n90 ^ n20 ^ n208);
  b_b = (unsigned short)((n90 & n20) | (n20 & n208) | (n90 & n208));
  n73 = (unsigned short)(n964 ^ n550);
  n20 = (unsigned short)(n180 & n238);
  n51 = (unsigned short)((n10 & n6) | (n6 & n24) | (n10 & n24));
  n65 = (unsigned short)((n206 & n76) | (n76 & n51) | (n206 & n51));
  n77 = (unsigned short)((n12 & n30) | (n30 & n65) | (n12 & n65));
  c = (unsigned short)((n46 ^ (n0 & n18)) << 1);
  b_a = (unsigned short)((unsigned short)~(unsigned short)((unsigned short)
    ((unsigned short)(n87 & (unsigned short)~(unsigned short)~(unsigned short)
                      (n26 ^ (unsigned short)~(unsigned short)(n2 | n8))) |
     (unsigned short)((unsigned short)~n87 & n53)) | (unsigned short)(n356 |
    (unsigned short)~(unsigned short)((n4 & n16) | n106))) & 1);
  return (unsigned short)(n32 | c | b_a << 2 | (n490 ^ n580) << 3 | ((unsigned
    short)(n564 ^ n638) & 1) << 4 | (n460 ^ n86 ^ (n564 & n638)) << 5 |
    ((unsigned short)((unsigned short)(n254 ^ n654) | (unsigned short)(n460 &
    n86)) & 1) << 6 | ((n446 ^ n194 ^ n1024) | (n254 & n654)) << 7 | (n180 ^
    n238) << 8 | (n224 ^ n121 ^ n20) << 9 | ((unsigned short)((unsigned short)
    ((unsigned short)(n534 ^ n432 ^ n668) ^ (unsigned short)((unsigned short)
    ~(unsigned short)(((unsigned short)~(unsigned short)((unsigned short)
    ~(unsigned short)(n2 & n28) | (unsigned short)(n134 | n243)) & n682) | n243)
    & (unsigned short)((unsigned short)(n167 & (unsigned short)~n105) |
                       (unsigned short)((unsigned short)~n167 & n89)) &
    (unsigned short)~(unsigned short)((unsigned short)(n103 & n32) | (unsigned
    short)((unsigned short)~n103 & n169)))) ^ (unsigned short)((n224 & n121) |
    (n121 & n20) | (n224 & n20))) & 1) << 10 | (n10 ^ n6 ^ n24) << 11 | (n206 ^
    n76 ^ n51) << 12 | (n12 ^ n30 ^ n65) << 13 | (n73 ^ b_b ^ n77) << 14 |
    ((n964 & n550) | ((n73 & b_b) | (b_b & n77) | (n73 & n77))) << 15);
}

//
// File trailer for mul8_312.cpp
//
// [EOF]
//
