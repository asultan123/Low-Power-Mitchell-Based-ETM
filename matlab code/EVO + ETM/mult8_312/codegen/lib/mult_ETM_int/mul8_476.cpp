//
// File: mul8_476.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 16:34:01
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_ETM_int.h"
#include "mul8_476.h"

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
// Arguments    : unsigned char a
//                unsigned char b
// Return Type  : unsigned short
//
unsigned short mul8_476(unsigned char a, unsigned char b)
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
  unsigned short n1082;
  unsigned short n1156;
  unsigned short n1187;
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
  n33 = (unsigned short)(n18 & n12);
  n34 = (unsigned short)~(unsigned short)(n33 & (n0 & n6));
  n35 = (unsigned short)~(unsigned short)(n33 & (n0 & n6));
  n38 = (unsigned short)~(unsigned short)((n30 & n24) | n35);
  n41 = (unsigned short)(n12 & n38);
  n46 = (unsigned short)~(unsigned short)((n2 & n18) | n34);
  n47 = (unsigned short)~(unsigned short)((n2 & n18) | n34);
  n57 = (unsigned short)~(unsigned short)((unsigned short)~(unsigned short)((n18
    & n38) | n35) | (unsigned short)~(unsigned short)(n2 & (n24 & n30)));
  n33 = (unsigned short)~(unsigned short)((n18 & n12) | n35);
  n34 = (unsigned short)~(unsigned short)((n18 | n4) & n41);
  n90 = (unsigned short)(n47 & n33);
  n106 = (unsigned short)(n10 & n33);
  n121 = (unsigned short)(n12 & n38);
  n33 = (unsigned short)(n14 & n16);
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
    ((unsigned short)((unsigned short)(n34 & (unsigned short)~(unsigned short)
    ((n18 & n38) | n35)) | (unsigned short)((unsigned short)~n34 & n18)) ^
     (unsigned short)~(unsigned short)(n57 ^ n41))));
  n534 = (unsigned short)(n4 & n24);
  n35 = (unsigned short)(n6 & n24);
  n564 = (unsigned short)(n8 & n24);
  n580 = (unsigned short)(n10 & n24);
  n594 = (unsigned short)(n12 & n24);
  n608 = (unsigned short)(n14 & n24);
  n34 = (unsigned short)(n2 & n26);
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
  n10 = (unsigned short)(n33 ^ n238 ^ n343);
  n14 = (unsigned short)((n33 & n238) | (n238 & n343) | (n33 & n343));
  n1082 = (unsigned short)(n254 & n356);
  n4 = (unsigned short)(n254 ^ n356);
  n26 = (unsigned short)(n432 ^ n534 ^ n34);
  n254 = (unsigned short)((n432 & n534) | (n534 & n34) | (n432 & n34));
  n1156 = (unsigned short)(n446 ^ n35 ^ n38);
  n38 = (unsigned short)((n446 & n35) | (n35 & n38) | (n446 & n38));
  n34 = (unsigned short)(n460 ^ n564 ^ n668);
  n35 = (unsigned short)((n460 & n564) | (n564 & n668) | (n460 & n668));
  n33 = (unsigned short)(n476 ^ n580 ^ n682);
  n1187 = (unsigned short)((n476 & n580) | (n580 & n682) | (n476 & n682));
  n580 = (unsigned short)(n490 ^ n594 ^ n698);
  n57 = (unsigned short)((n490 & n594) | (n594 & n698) | (n490 & n698));
  n446 = (unsigned short)(n608 ^ n712);
  n608 &= n712;
  n712 = (unsigned short)((n6 & n16) | (n41 & (unsigned short)~(unsigned short)
    ~(unsigned short)(n2 & (n24 & n30))));
  n682 = (unsigned short)(n106 | n90);
  n343 = (unsigned short)(n329 ^ n534 ^ n26);
  n534 = (unsigned short)((n329 & n534) | (n534 & n26) | (n329 & n26));
  n8 = (unsigned short)(n10 ^ n121 ^ n1156);
  n10 = (unsigned short)((n10 & n121) | (n121 & n1156) | (n10 & n1156));
  n238 = (unsigned short)(n4 ^ n14 ^ n34);
  n490 = (unsigned short)((n4 & n14) | (n14 & n34) | (n4 & n34));
  n4 = (unsigned short)(n372 ^ n1082 ^ n33);
  n698 = (unsigned short)((n372 & n1082) | (n1082 & n33) | (n372 & n33));
  n372 = (unsigned short)((unsigned short)~(unsigned short)(n41 & n22) & n2 &
    (n0 & n28));
  n594 = (unsigned short)(n254 ^ n756 ^ n860);
  n564 = (unsigned short)((n254 & n756) | (n756 & n860) | (n254 & n860));
  n460 = (unsigned short)(n38 ^ n772 ^ n876);
  n1156 = (unsigned short)((n38 & n772) | (n772 & n876) | (n38 & n876));
  n38 = (unsigned short)(n35 ^ n786 ^ n890);
  n16 = (unsigned short)((n35 & n786) | (n786 & n890) | (n35 & n890));
  n35 = (unsigned short)(n1187 ^ n802 ^ n906);
  n6 = (unsigned short)((n1187 & n802) | (n802 & n906) | (n1187 & n906));
  n33 = (unsigned short)(n57 ^ n816 ^ n920);
  n1082 = (unsigned short)((n57 & n816) | (n816 & n920) | (n57 & n920));
  n34 = (unsigned short)(n608 ^ n832 ^ n934);
  n476 = (unsigned short)((n608 & n832) | (n832 & n934) | (n608 & n934));
  n756 = (unsigned short)(n846 & n950);
  n26 = (unsigned short)(n846 ^ n950);
  n329 = (unsigned short)(n90 ^ n712);
  n432 = (unsigned short)(n90 & n712);
  n668 = (unsigned short)(n343 ^ n514 ^ n255);
  n24 = (unsigned short)((n343 & n514) | (n514 & n255) | (n343 & n255));
  n30 = (unsigned short)(n8 ^ n534 ^ n594);
  n254 = (unsigned short)((n8 & n534) | (n534 & n594) | (n8 & n594));
  n356 = (unsigned short)(n238 ^ n10 ^ n460);
  n10 = (unsigned short)((n238 & n10) | (n10 & n460) | (n238 & n460));
  n238 = (unsigned short)(n4 ^ n490 ^ n38);
  n38 = (unsigned short)((n4 & n490) | (n490 & n38) | (n4 & n38));
  n4 = (unsigned short)(n580 ^ n698 ^ n35);
  n35 = (unsigned short)((n580 & n698) | (n698 & n35) | (n580 & n35));
  n343 = (unsigned short)(n446 & n33);
  n33 ^= n446;
  n14 = (unsigned short)(n728 & n34);
  n34 ^= n728;
  n1187 = (unsigned short)(n329 | n106);
  n534 = (unsigned short)(n682 ^ n432);
  n712 = (unsigned short)(n682 & n432);
  n490 = (unsigned short)(n668 ^ n682);
  n580 = (unsigned short)(n668 & n682);
  n682 = (unsigned short)((n30 & n24) | (n24 & n372) | (n30 & n372));
  n608 = (unsigned short)(n356 ^ n254 ^ n564);
  n446 = (unsigned short)((n356 & n254) | (n254 & n564) | (n356 & n564));
  n698 = (unsigned short)(n238 ^ n10 ^ n1156);
  n1156 = (unsigned short)((n238 & n10) | (n10 & n1156) | (n238 & n1156));
  n564 = (unsigned short)(n4 ^ n38 ^ n16);
  n594 = (unsigned short)((n4 & n38) | (n38 & n16) | (n4 & n16));
  n8 = (unsigned short)(n33 ^ n35 ^ n6);
  n57 = (unsigned short)((n33 & n35) | (n35 & n6) | (n33 & n6));
  n460 = (unsigned short)(n34 ^ n343 ^ n1082);
  n432 = (unsigned short)((n34 & n343) | (n343 & n1082) | (n34 & n1082));
  n668 = (unsigned short)(n26 ^ n14 ^ n476);
  n34 = (unsigned short)((n26 & n14) | (n14 & n476) | (n26 & n476));
  n35 = (unsigned short)(n964 ^ n756);
  n38 = (unsigned short)(n534 & n1187);
  n4 = (unsigned short)((unsigned short)((n490 & n712) | (n712 & n38)) |
                        (unsigned short)(n490 & n38));
  n10 = (unsigned short)((n608 & n682) | (n682 & n580) | (n608 & n580));
  n238 = (unsigned short)((n698 & n446) | (n446 & n10) | (n698 & n10));
  n343 = (unsigned short)((n564 & n1156) | (n1156 & n238) | (n564 & n238));
  n14 = (unsigned short)((n8 & n594) | (n594 & n343) | (n8 & n343));
  n26 = (unsigned short)((n460 & n57) | (n57 & n14) | (n460 & n14));
  n254 = (unsigned short)((n668 & n432) | (n432 & n26) | (n668 & n26));
  c = (unsigned short)(n18 & n12);
  n356 = (unsigned short)(((unsigned short)(n46 ^ n150) & 1) << 1);
  n33 = (unsigned short)((n12 & n20) ^ (n46 & n150));
  return (unsigned short)(c | n356 | n33 << 2 | (n121 & n18) << 3 | ((unsigned
    short)(n329 | n106) & 1) << 4 | ((unsigned short)(n534 ^ n1187) & 1) << 5 |
    ((unsigned short)(n490 ^ n712 ^ n38) & 1) << 6 | ((unsigned short)((unsigned
    short)(n4 & (unsigned short)~(unsigned short)(n47 & n2)) | (unsigned short)
    ((unsigned short)~n4 & (n30 ^ n24 ^ n372))) & 1) << 7 | ((unsigned short)
    (n608 ^ n682 ^ n580) & 1) << 8 | (n698 ^ n446 ^ n10) << 9 | (n564 ^ n1156 ^
    n238) << 10 | (n8 ^ n594 ^ n343) << 11 | (n460 ^ n57 ^ n14) << 12 | (n668 ^
    n432 ^ n26) << 13 | (n35 ^ n34 ^ n254) << 14 | ((n964 & n756) | ((n35 & n34)
    | (n34 & n254) | (n35 & n254))) << 15);
}

//
// File trailer for mul8_476.cpp
//
// [EOF]
//
