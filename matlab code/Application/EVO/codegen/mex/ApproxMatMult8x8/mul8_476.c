/*
 * mul8_476.c
 *
 * Code generation for function 'mul8_476'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mul8_476.h"

/* Function Definitions */
uint16_T mul8_476(uint8_T a, uint8_T b)
{
  uint16_T c;
  uint16_T n0;
  uint16_T n2;
  uint16_T n4;
  uint16_T n6;
  uint16_T n8;
  uint16_T n10;
  uint16_T n12;
  uint16_T n14;
  uint16_T n16;
  uint16_T n18;
  uint16_T n20;
  uint16_T n22;
  uint16_T n24;
  uint16_T n26;
  uint16_T n28;
  uint16_T n30;
  uint16_T n33;
  uint16_T n34;
  uint16_T n35;
  uint16_T n38;
  uint16_T n41;
  uint16_T n46;
  uint16_T n47;
  uint16_T n57;
  uint16_T n90;
  uint16_T n106;
  uint16_T n121;
  uint16_T n150;
  uint16_T n238;
  uint16_T n254;
  uint16_T n255;
  uint16_T n329;
  uint16_T n343;
  uint16_T n356;
  uint16_T n372;
  uint16_T n432;
  uint16_T n446;
  uint16_T n460;
  uint16_T n476;
  uint16_T n490;
  uint16_T n514;
  uint16_T n534;
  uint16_T n564;
  uint16_T n580;
  uint16_T n594;
  uint16_T n608;
  uint16_T n668;
  uint16_T n682;
  uint16_T n698;
  uint16_T n712;
  uint16_T n728;
  uint16_T n756;
  uint16_T n772;
  uint16_T n786;
  uint16_T n802;
  uint16_T n816;
  uint16_T n832;
  uint16_T n846;
  uint16_T n860;
  uint16_T n876;
  uint16_T n890;
  uint16_T n906;
  uint16_T n920;
  uint16_T n934;
  uint16_T n950;
  uint16_T n964;
  uint16_T n1082;
  uint16_T n1156;
  uint16_T n1187;

  /*  Approximate function mul8_476 */
  /*   Library = EvoApprox8b */
  /*   Circuit = mul8_476 */
  /*   Area   (180) = 8087 */
  /*   Delay  (180) = 3.570 */
  /*   Power  (180) = 3744.00 */
  /*   Area   (45) = 594 */
  /*   Delay  (45) = 1.250 */
  /*   Power  (45) = 324.00 */
  /*   Nodes = 136 */
  /*   HD = 267606 */
  /*   MAE = 104.91718 */
  /*   MSE = 21249.56250 */
  /*   MRE = 3.01 % */
  /*   WCE = 594 */
  /*   WCRE = 500 % */
  /*   EP = 96.3 % */
  n0 = (uint16_T)(a & 1);
  n2 = (uint16_T)((int32_T)((uint32_T)a >> 1) & 1);
  n4 = (uint16_T)((int32_T)((uint32_T)a >> 2) & 1);
  n6 = (uint16_T)((int32_T)((uint32_T)a >> 3) & 1);
  n8 = (uint16_T)((int32_T)((uint32_T)a >> 4) & 1);
  n10 = (uint16_T)((int32_T)((uint32_T)a >> 5) & 1);
  n12 = (uint16_T)((int32_T)((uint32_T)a >> 6) & 1);
  n14 = (uint16_T)((uint32_T)a >> 7);
  n16 = (uint16_T)(b & 1);
  n18 = (uint16_T)((int32_T)((uint32_T)b >> 1) & 1);
  n20 = (uint16_T)((int32_T)((uint32_T)b >> 2) & 1);
  n22 = (uint16_T)((int32_T)((uint32_T)b >> 3) & 1);
  n24 = (uint16_T)((int32_T)((uint32_T)b >> 4) & 1);
  n26 = (uint16_T)((int32_T)((uint32_T)b >> 5) & 1);
  n28 = (uint16_T)((int32_T)((uint32_T)b >> 6) & 1);
  n30 = (uint16_T)((uint32_T)b >> 7);
  n33 = (uint16_T)(n18 & n12);
  n34 = (uint16_T)~(uint16_T)(n33 & (n0 & n6));
  n35 = (uint16_T)~(uint16_T)(n33 & (n0 & n6));
  n38 = (uint16_T)~(uint16_T)((n30 & n24) | n35);
  n41 = (uint16_T)(n12 & n38);
  n46 = (uint16_T)~(uint16_T)((n2 & n18) | n34);
  n47 = (uint16_T)~(uint16_T)((n2 & n18) | n34);
  n57 = (uint16_T)~(uint16_T)((uint16_T)~(uint16_T)((n18 & n38) | n35) |
    (uint16_T)~(uint16_T)(n2 & (n24 & n30)));
  n33 = (uint16_T)~(uint16_T)((n18 & n12) | n35);
  n34 = (uint16_T)~(uint16_T)((n18 | n4) & n41);
  n90 = (uint16_T)(n47 & n33);
  n106 = (uint16_T)(n10 & n33);
  n121 = (uint16_T)(n12 & n38);
  n33 = (uint16_T)(n14 & n16);
  n150 = (uint16_T)(n0 & n18);
  n238 = (uint16_T)(n12 & n18);
  n254 = (uint16_T)(n14 & n18);
  n255 = (uint16_T)(n14 & n18);
  n329 = (uint16_T)(n8 & n20);
  n343 = (uint16_T)(n10 & n20);
  n356 = (uint16_T)(n12 & n20);
  n372 = (uint16_T)(n14 & n20);
  n432 = (uint16_T)(n6 & n22);
  n446 = (uint16_T)(n8 & n22);
  n460 = (uint16_T)(n10 & n22);
  n476 = (uint16_T)(n12 & n22);
  n490 = (uint16_T)(n14 & n22);
  n514 = (uint16_T)~(uint16_T)((uint16_T)(n12 & n18) | (uint16_T)~(uint16_T)(n18
    & (uint16_T)~(uint16_T)((uint16_T)((uint16_T)(n34 & (uint16_T)~(uint16_T)
    ((n18 & n38) | n35)) | (uint16_T)((uint16_T)~n34 & n18)) ^ (uint16_T)
    ~(uint16_T)(n57 ^ n41))));
  n534 = (uint16_T)(n4 & n24);
  n35 = (uint16_T)(n6 & n24);
  n564 = (uint16_T)(n8 & n24);
  n580 = (uint16_T)(n10 & n24);
  n594 = (uint16_T)(n12 & n24);
  n608 = (uint16_T)(n14 & n24);
  n34 = (uint16_T)(n2 & n26);
  n38 = (uint16_T)(n4 & n26);
  n668 = (uint16_T)(n6 & n26);
  n682 = (uint16_T)(n8 & n26);
  n698 = (uint16_T)(n10 & n26);
  n712 = (uint16_T)(n12 & n26);
  n728 = (uint16_T)(n14 & n26);
  n756 = (uint16_T)(n2 & n28);
  n772 = (uint16_T)(n4 & n28);
  n786 = (uint16_T)(n6 & n28);
  n802 = (uint16_T)(n8 & n28);
  n816 = (uint16_T)(n10 & n28);
  n832 = (uint16_T)(n12 & n28);
  n846 = (uint16_T)(n14 & n28);
  n860 = (uint16_T)(n0 & n30);
  n876 = (uint16_T)(n57 & n30);
  n890 = (uint16_T)(n4 & n30);
  n906 = (uint16_T)(n6 & n30);
  n920 = (uint16_T)(n8 & n30);
  n934 = (uint16_T)(n10 & n30);
  n950 = (uint16_T)(n12 & n30);
  n964 = (uint16_T)(n14 & n30);
  n10 = (uint16_T)(n33 ^ n238 ^ n343);
  n14 = (uint16_T)((n33 & n238) | (n238 & n343) | (n33 & n343));
  n1082 = (uint16_T)(n254 & n356);
  n4 = (uint16_T)(n254 ^ n356);
  n26 = (uint16_T)(n432 ^ n534 ^ n34);
  n254 = (uint16_T)((n432 & n534) | (n534 & n34) | (n432 & n34));
  n1156 = (uint16_T)(n446 ^ n35 ^ n38);
  n38 = (uint16_T)((n446 & n35) | (n35 & n38) | (n446 & n38));
  n34 = (uint16_T)(n460 ^ n564 ^ n668);
  n35 = (uint16_T)((n460 & n564) | (n564 & n668) | (n460 & n668));
  n33 = (uint16_T)(n476 ^ n580 ^ n682);
  n1187 = (uint16_T)((n476 & n580) | (n580 & n682) | (n476 & n682));
  n580 = (uint16_T)(n490 ^ n594 ^ n698);
  n57 = (uint16_T)((n490 & n594) | (n594 & n698) | (n490 & n698));
  n446 = (uint16_T)(n608 ^ n712);
  n608 &= n712;
  n712 = (uint16_T)((n6 & n16) | (n41 & (uint16_T)~(uint16_T)~(uint16_T)(n2 &
    (n24 & n30))));
  n682 = (uint16_T)(n106 | n90);
  n343 = (uint16_T)(n329 ^ n534 ^ n26);
  n534 = (uint16_T)((n329 & n534) | (n534 & n26) | (n329 & n26));
  n8 = (uint16_T)(n10 ^ n121 ^ n1156);
  n10 = (uint16_T)((n10 & n121) | (n121 & n1156) | (n10 & n1156));
  n238 = (uint16_T)(n4 ^ n14 ^ n34);
  n490 = (uint16_T)((n4 & n14) | (n14 & n34) | (n4 & n34));
  n4 = (uint16_T)(n372 ^ n1082 ^ n33);
  n698 = (uint16_T)((n372 & n1082) | (n1082 & n33) | (n372 & n33));
  n372 = (uint16_T)((uint16_T)~(uint16_T)(n41 & n22) & n2 & (n0 & n28));
  n594 = (uint16_T)(n254 ^ n756 ^ n860);
  n564 = (uint16_T)((n254 & n756) | (n756 & n860) | (n254 & n860));
  n460 = (uint16_T)(n38 ^ n772 ^ n876);
  n1156 = (uint16_T)((n38 & n772) | (n772 & n876) | (n38 & n876));
  n38 = (uint16_T)(n35 ^ n786 ^ n890);
  n16 = (uint16_T)((n35 & n786) | (n786 & n890) | (n35 & n890));
  n35 = (uint16_T)(n1187 ^ n802 ^ n906);
  n6 = (uint16_T)((n1187 & n802) | (n802 & n906) | (n1187 & n906));
  n33 = (uint16_T)(n57 ^ n816 ^ n920);
  n1082 = (uint16_T)((n57 & n816) | (n816 & n920) | (n57 & n920));
  n34 = (uint16_T)(n608 ^ n832 ^ n934);
  n476 = (uint16_T)((n608 & n832) | (n832 & n934) | (n608 & n934));
  n756 = (uint16_T)(n846 & n950);
  n26 = (uint16_T)(n846 ^ n950);
  n329 = (uint16_T)(n90 ^ n712);
  n432 = (uint16_T)(n90 & n712);
  n668 = (uint16_T)(n343 ^ n514 ^ n255);
  n24 = (uint16_T)((n343 & n514) | (n514 & n255) | (n343 & n255));
  n30 = (uint16_T)(n8 ^ n534 ^ n594);
  n254 = (uint16_T)((n8 & n534) | (n534 & n594) | (n8 & n594));
  n356 = (uint16_T)(n238 ^ n10 ^ n460);
  n10 = (uint16_T)((n238 & n10) | (n10 & n460) | (n238 & n460));
  n238 = (uint16_T)(n4 ^ n490 ^ n38);
  n38 = (uint16_T)((n4 & n490) | (n490 & n38) | (n4 & n38));
  n4 = (uint16_T)(n580 ^ n698 ^ n35);
  n35 = (uint16_T)((n580 & n698) | (n698 & n35) | (n580 & n35));
  n343 = (uint16_T)(n446 & n33);
  n33 ^= n446;
  n14 = (uint16_T)(n728 & n34);
  n34 ^= n728;
  n1187 = (uint16_T)(n329 | n106);
  n534 = (uint16_T)(n682 ^ n432);
  n712 = (uint16_T)(n682 & n432);
  n490 = (uint16_T)(n668 ^ n682);
  n580 = (uint16_T)(n668 & n682);
  n682 = (uint16_T)((n30 & n24) | (n24 & n372) | (n30 & n372));
  n608 = (uint16_T)(n356 ^ n254 ^ n564);
  n446 = (uint16_T)((n356 & n254) | (n254 & n564) | (n356 & n564));
  n698 = (uint16_T)(n238 ^ n10 ^ n1156);
  n1156 = (uint16_T)((n238 & n10) | (n10 & n1156) | (n238 & n1156));
  n564 = (uint16_T)(n4 ^ n38 ^ n16);
  n594 = (uint16_T)((n4 & n38) | (n38 & n16) | (n4 & n16));
  n8 = (uint16_T)(n33 ^ n35 ^ n6);
  n57 = (uint16_T)((n33 & n35) | (n35 & n6) | (n33 & n6));
  n460 = (uint16_T)(n34 ^ n343 ^ n1082);
  n432 = (uint16_T)((n34 & n343) | (n343 & n1082) | (n34 & n1082));
  n668 = (uint16_T)(n26 ^ n14 ^ n476);
  n34 = (uint16_T)((n26 & n14) | (n14 & n476) | (n26 & n476));
  n35 = (uint16_T)(n964 ^ n756);
  n38 = (uint16_T)(n534 & n1187);
  n4 = (uint16_T)((uint16_T)((n490 & n712) | (n712 & n38)) | (uint16_T)(n490 &
    n38));
  n10 = (uint16_T)((n608 & n682) | (n682 & n580) | (n608 & n580));
  n238 = (uint16_T)((n698 & n446) | (n446 & n10) | (n698 & n10));
  n343 = (uint16_T)((n564 & n1156) | (n1156 & n238) | (n564 & n238));
  n14 = (uint16_T)((n8 & n594) | (n594 & n343) | (n8 & n343));
  n26 = (uint16_T)((n460 & n57) | (n57 & n14) | (n460 & n14));
  n254 = (uint16_T)((n668 & n432) | (n432 & n26) | (n668 & n26));
  c = (uint16_T)(n18 & n12);
  n356 = (uint16_T)(((uint16_T)(n46 ^ n150) & 1) << 1);
  n33 = (uint16_T)((n12 & n20) ^ (n46 & n150));
  return (uint16_T)(c | n356 | n33 << 2 | (n121 & n18) << 3 | ((uint16_T)(n329 |
    n106) & 1) << 4 | ((uint16_T)(n534 ^ n1187) & 1) << 5 | ((uint16_T)(n490 ^
    n712 ^ n38) & 1) << 6 | ((uint16_T)((uint16_T)(n4 & (uint16_T)~(uint16_T)
    (n47 & n2)) | (uint16_T)((uint16_T)~n4 & (n30 ^ n24 ^ n372))) & 1) << 7 |
                    ((uint16_T)(n608 ^ n682 ^ n580) & 1) << 8 | (n698 ^ n446 ^
    n10) << 9 | (n564 ^ n1156 ^ n238) << 10 | (n8 ^ n594 ^ n343) << 11 | (n460 ^
    n57 ^ n14) << 12 | (n668 ^ n432 ^ n26) << 13 | (n35 ^ n34 ^ n254) << 14 |
                    ((n964 & n756) | ((n35 & n34) | (n34 & n254) | (n35 & n254)))
                    << 15);
}

/* End of code generation (mul8_476.c) */
