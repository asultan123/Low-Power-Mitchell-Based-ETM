//
// File: mul8_312.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 16:34:01
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_ETM_int.h"
#include "mul8_312.h"

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
// Arguments    : unsigned char a
//                unsigned char b
// Return Type  : unsigned short
//
unsigned short mul8_312(unsigned char a, unsigned char b)
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
  unsigned short n32;
  unsigned short n41;
  unsigned short n46;
  unsigned short n51;
  unsigned short n53;
  unsigned short n60;
  unsigned short n65;
  unsigned short n71;
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
  unsigned short n1008;
  unsigned short n1024;
  unsigned short n1113;
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
  n32 = (unsigned short)(n0 & n16);
  n41 = (unsigned short)(n18 ^ n14);
  n46 = (unsigned short)(n2 & n16);
  n51 = (unsigned short)(n4 & n20);
  n53 = (unsigned short)(n26 & n4);
  n60 = (unsigned short)(n4 & n16);
  n65 = (unsigned short)(n28 & n12);
  n71 = (unsigned short)~(unsigned short)(n41 & (n46 & n26));
  n73 = (unsigned short)~(unsigned short)(n65 & (n46 & n51));
  n76 = (unsigned short)(n6 & n16);
  n77 = (unsigned short)(n6 & n16);
  n86 = (unsigned short)~n71;
  n87 = (unsigned short)~n71;
  n89 = (unsigned short)(n65 | n12);
  n90 = (unsigned short)(n8 & n16);
  n103 = (unsigned short)~(unsigned short)(n18 | n20);
  n105 = (unsigned short)~(unsigned short)~(unsigned short)(n73 | (unsigned
    short)~(unsigned short)(n41 & (n46 & n26)));
  n106 = (unsigned short)(n10 & n16);
  n71 = (unsigned short)~n105;
  n121 = (unsigned short)(n12 & n16);
  n134 = (unsigned short)(n14 & n16);
  n145 = (unsigned short)~n41;
  n164 = (unsigned short)(n2 & n18);
  n167 = (unsigned short)~(unsigned short)(n71 & ((n18 ^ n14) & n30));
  n169 = (unsigned short)~(unsigned short)(n89 ^ n86);
  n180 = (unsigned short)(n4 & n18);
  n194 = (unsigned short)(n6 & n18);
  n206 = (unsigned short)(n10 ^ (unsigned short)~(unsigned short)((unsigned
    short)~(unsigned short)((n0 & n16) | (n51 | (n2 & n16))) & n53) ^ n6);
  n208 = (unsigned short)(n8 & n18);
  n224 = (unsigned short)(n10 & n18);
  n238 = (unsigned short)(n12 & n18);
  n243 = (unsigned short)~(unsigned short)(n169 | (unsigned short)(n24 | n8 |
    n41));
  n254 = (unsigned short)(n14 & n18);
  n267 = (unsigned short)~(unsigned short)((unsigned short)(n71 ^ n20) &
    (unsigned short)~(unsigned short)(n18 | n20));
  n268 = (unsigned short)(n77 & n20 & n20);
  n71 = (unsigned short)(n2 & n20);
  n41 = (unsigned short)(n4 & (unsigned short)~n73);
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
  n30 = (unsigned short)((n60 & n164) | (n164 & n268) | (n60 & n268));
  n1008 = (unsigned short)(n76 ^ n180 ^ n71);
  n12 = (unsigned short)((n76 & n180) | (n180 & n71) | (n76 & n71));
  n1024 = (unsigned short)(n90 ^ n194 ^ n41);
  n24 = (unsigned short)((n90 & n194) | (n194 & n41) | (n90 & n41));
  n10 = (unsigned short)(n106 ^ n208 ^ n73);
  n76 = (unsigned short)((n106 & n208) | (n208 & n73) | (n106 & n73));
  n90 = (unsigned short)(n121 ^ n224);
  n194 = (unsigned short)(n121 & n224);
  n208 = (unsigned short)(n134 ^ n238 ^ n343);
  n343 = (unsigned short)((n134 & n238) | (n238 & n343) | (n134 & n343));
  n224 = (unsigned short)(n254 & n356);
  n121 = (unsigned short)(n254 ^ n356);
  n51 = (unsigned short)(n20 ^ n86);
  n1113 = (unsigned short)(n20 & n86);
  n41 = (unsigned short)((n4 & n22) ^ (n2 & n254) ^ (n254 & n356));
  n65 = (unsigned short)(n432 ^ n534 ^ n638);
  n6 = (unsigned short)((n432 & n534) | (n534 & n638) | (n432 & n638));
  n20 = (unsigned short)(n446 ^ n550 ^ n654);
  n77 = (unsigned short)((n446 & n550) | (n550 & n654) | (n446 & n654));
  n73 = (unsigned short)(n460 ^ n564 ^ n668);
  n206 = (unsigned short)((n460 & n564) | (n564 & n668) | (n460 & n668));
  n71 = (unsigned short)(n476 ^ n580 ^ n682);
  n564 = (unsigned short)((n476 & n580) | (n580 & n682) | (n476 & n682));
  n580 = (unsigned short)(n490 ^ n594 ^ n698);
  n180 = (unsigned short)((n490 & n594) | (n594 & n698) | (n490 & n698));
  n476 = (unsigned short)(n608 ^ n712);
  n460 = (unsigned short)(n608 & n712);
  n490 = (unsigned short)((n60 ^ n164 ^ n268) & ((unsigned short)~(unsigned
    short)((unsigned short)((unsigned short)((n145 & n342) | (n342 & n267)) |
    (unsigned short)(n145 & n267)) & (n134 & (unsigned short)~(unsigned short)
    (n145 & n8))) & (n14 & n18)));
  n594 = (unsigned short)(n1008 ^ n30 ^ n386);
  n30 = (unsigned short)((n1008 & n30) | (n30 & n386) | (n1008 & n386));
  n86 = (unsigned short)(n1024 ^ n12 ^ n51);
  n654 = (unsigned short)((n1024 & n12) | (n12 & n51) | (n1024 & n51));
  n254 = (unsigned short)(n10 ^ n24 ^ n41);
  n446 = (unsigned short)((n10 & n24) | (n24 & n41) | (n10 & n41));
  n12 = (unsigned short)(n90 ^ n76 ^ n65);
  n24 = (unsigned short)((n90 & n76) | (n76 & n65) | (n90 & n65));
  n10 = (unsigned short)(n208 ^ n194 ^ n20);
  n534 = (unsigned short)((n208 & n194) | (n194 & n20) | (n208 & n20));
  n638 = (unsigned short)(n121 ^ n343 ^ n73);
  n238 = (unsigned short)((n121 & n343) | (n343 & n73) | (n121 & n73));
  n432 = (unsigned short)(n372 ^ n224 ^ n71);
  n121 = (unsigned short)((n372 & n224) | (n224 & n71) | (n372 & n71));
  n65 = (unsigned short)(n889 ^ n742);
  n22 = (unsigned short)(n889 & n742);
  n76 = (unsigned short)(n6 ^ n756 ^ n860);
  n6 = (unsigned short)((n6 & n756) | (n756 & n860) | (n6 & n860));
  n51 = (unsigned short)(n77 ^ n772 ^ n876);
  n77 = (unsigned short)((n77 & n772) | (n772 & n876) | (n77 & n876));
  n20 = (unsigned short)(n206 ^ n786 ^ n890);
  n668 = (unsigned short)((n206 & n786) | (n786 & n890) | (n206 & n890));
  n73 = (unsigned short)(n564 ^ n802 ^ n906);
  n206 = (unsigned short)((n564 & n802) | (n802 & n906) | (n564 & n906));
  n71 = (unsigned short)(n180 ^ n816 ^ n920);
  n343 = (unsigned short)((n180 & n816) | (n816 & n920) | (n180 & n920));
  n41 = (unsigned short)(n460 ^ n832 ^ n934);
  n208 = (unsigned short)((n460 & n832) | (n832 & n934) | (n460 & n934));
  n550 = (unsigned short)(n846 & n950);
  n90 = (unsigned short)(n846 ^ n950);
  n460 = (unsigned short)(n594 & n490);
  n564 = (unsigned short)(n86 ^ n30);
  n86 &= n30;
  n224 = (unsigned short)(n254 ^ n654 ^ n1113);
  n654 = (unsigned short)((n254 & n654) | (n654 & n1113) | (n254 & n1113));
  n254 = (unsigned short)(n12 ^ n446 ^ n65);
  n194 = (unsigned short)((n12 & n446) | (n446 & n65) | (n12 & n65));
  n446 = (unsigned short)(n10 ^ n24 ^ n76);
  n12 = (unsigned short)((n10 & n24) | (n24 & n76) | (n10 & n76));
  n30 = (unsigned short)(n638 ^ n534 ^ n51);
  n51 = (unsigned short)((n638 & n534) | (n534 & n51) | (n638 & n51));
  n65 = (unsigned short)(n432 ^ n238 ^ n20);
  n534 = (unsigned short)((n432 & n238) | (n238 & n20) | (n432 & n20));
  n638 = (unsigned short)(n580 ^ n121 ^ n73);
  n73 = (unsigned short)((n580 & n121) | (n121 & n73) | (n580 & n73));
  n20 = (unsigned short)(n476 & n71);
  n71 ^= n476;
  n24 = (unsigned short)(n728 & n41);
  n41 ^= n728;
  n432 = (unsigned short)((n446 & n194) | (n194 & n22) | (n446 & n22));
  n180 = (unsigned short)(n30 ^ n12 ^ n6);
  n121 = (unsigned short)((n30 & n12) | (n12 & n6) | (n30 & n6));
  n238 = (unsigned short)(n65 ^ n51 ^ n77);
  n77 = (unsigned short)((n65 & n51) | (n51 & n77) | (n65 & n77));
  n6 = (unsigned short)((n638 & n534) | (n534 & n668) | (n638 & n668));
  n10 = (unsigned short)(n71 ^ n73 ^ n206);
  n76 = (unsigned short)((n71 & n73) | (n73 & n206) | (n71 & n206));
  n206 = (unsigned short)(n41 ^ n20 ^ n343);
  n12 = (unsigned short)((n41 & n20) | (n20 & n343) | (n41 & n343));
  n30 = (unsigned short)(n90 ^ n24 ^ n208);
  n41 = (unsigned short)((n90 & n24) | (n24 & n208) | (n90 & n208));
  n73 = (unsigned short)(n964 ^ n550);
  n20 = (unsigned short)(n180 & n432);
  n51 = (unsigned short)((n10 & n6) | (n6 & n77) | (n10 & n77));
  n65 = (unsigned short)((n206 & n76) | (n76 & n51) | (n206 & n51));
  n24 = (unsigned short)((n30 & n12) | (n12 & n65) | (n30 & n65));
  c = (unsigned short)((n46 ^ (n0 & n18)) << 1);
  n71 = (unsigned short)((unsigned short)~(unsigned short)((unsigned short)
    ((unsigned short)(n87 & (unsigned short)~(unsigned short)~(unsigned short)
                      (n26 ^ (unsigned short)~(unsigned short)(n2 | n8))) |
     (unsigned short)((unsigned short)~n87 & n53)) | (unsigned short)(n356 |
    (unsigned short)~(unsigned short)((n4 & n16) | n106))) & 1);
  return (unsigned short)(n32 | c | n71 << 2 | (n594 ^ n490) << 3 | ((unsigned
    short)(n564 ^ n460) & 1) << 4 | (n224 ^ n86 ^ (n564 & n460)) << 5 |
    ((unsigned short)((unsigned short)(n254 ^ n654) | (unsigned short)(n224 &
    n86)) & 1) << 6 | ((n446 ^ n194 ^ n22) | (n254 & n654)) << 7 | (n180 ^ n432)
    << 8 | (n238 ^ n121 ^ n20) << 9 | ((unsigned short)((unsigned short)
    ((unsigned short)(n638 ^ n534 ^ n668) ^ (unsigned short)((unsigned short)
    ~(unsigned short)(((unsigned short)~(unsigned short)((unsigned short)
    ~(unsigned short)(n2 & n28) | (unsigned short)(n134 | n243)) & n682) | n243)
    & (unsigned short)((unsigned short)(n167 & (unsigned short)~n105) |
                       (unsigned short)((unsigned short)~n167 & n89)) &
    (unsigned short)~(unsigned short)((unsigned short)(n103 & n32) | (unsigned
    short)((unsigned short)~n103 & n169)))) ^ (unsigned short)((n238 & n121) |
    (n121 & n20) | (n238 & n20))) & 1) << 10 | (n10 ^ n6 ^ n77) << 11 | (n206 ^
    n76 ^ n51) << 12 | (n30 ^ n12 ^ n65) << 13 | (n73 ^ n41 ^ n24) << 14 |
    ((n964 & n550) | ((n73 & n41) | (n41 & n24) | (n73 & n24))) << 15);
}

//
// File trailer for mul8_312.cpp
//
// [EOF]
//
