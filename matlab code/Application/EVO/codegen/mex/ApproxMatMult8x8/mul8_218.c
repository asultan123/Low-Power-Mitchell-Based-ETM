/*
 * mul8_218.c
 *
 * Code generation for function 'mul8_218'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mul8_218.h"

/* Function Definitions */
uint16_T mul8_218(uint8_T a, uint8_T b)
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
  uint16_T n46;
  uint16_T n60;
  uint16_T n76;
  uint16_T n90;
  uint16_T n106;
  uint16_T n121;
  uint16_T n134;
  uint16_T n150;
  uint16_T n164;
  uint16_T n180;
  uint16_T n194;
  uint16_T n208;
  uint16_T n224;
  uint16_T n238;
  uint16_T n254;
  uint16_T n282;
  uint16_T n298;
  uint16_T n312;
  uint16_T n329;
  uint16_T n343;
  uint16_T n356;
  uint16_T n372;
  uint16_T n386;
  uint16_T n402;
  uint16_T n416;
  uint16_T n432;
  uint16_T n446;
  uint16_T n460;
  uint16_T n476;
  uint16_T n490;
  uint16_T n520;
  uint16_T n534;
  uint16_T n550;
  uint16_T n564;
  uint16_T n580;
  uint16_T n594;
  uint16_T n608;
  uint16_T n638;
  uint16_T n654;
  uint16_T n668;
  uint16_T n682;
  uint16_T n698;
  uint16_T n712;
  uint16_T n728;
  uint16_T n742;
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
  uint16_T n981;
  uint16_T n994;
  uint16_T n1068;
  uint16_T n1069;

  /*  Approximate function mul8_218 */
  /*   Library = EvoApprox8b */
  /*   Circuit = mul8_218 */
  /*   Area   (180) = 9247 */
  /*   Delay  (180) = 2.980 */
  /*   Power  (180) = 4910.60 */
  /*   Area   (45) = 666 */
  /*   Delay  (45) = 1.130 */
  /*   Power  (45) = 424.30 */
  /*   Nodes = 136 */
  /*   HD = 69730 */
  /*   MAE = 26.61816 */
  /*   MSE = 2981.00000 */
  /*   MRE = 1.01 % */
  /*   WCE = 296 */
  /*   WCRE = 100 % */
  /*   EP = 63.6 % */
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
  n46 = (uint16_T)(n2 & n16);
  n60 = (uint16_T)(n4 & n16);
  n76 = (uint16_T)(n6 & (uint16_T)~(uint16_T)(((uint16_T)~(uint16_T)(((n0 & n16)
    | (n26 ^ n4)) & n6) & n0) | n6));
  n90 = (uint16_T)(n8 & n16);
  n106 = (uint16_T)(n10 & n16);
  n121 = (uint16_T)(n12 & n16);
  n134 = (uint16_T)(n14 & n16);
  n150 = (uint16_T)(n0 & n18);
  n164 = (uint16_T)(n2 & n18);
  n180 = (uint16_T)(n4 & n18);
  n194 = (uint16_T)(n6 & n18);
  n208 = (uint16_T)(n8 & n18);
  n224 = (uint16_T)(n10 & n18);
  n238 = (uint16_T)(n12 & n18);
  n254 = (uint16_T)(n14 & n18);
  n18 = (uint16_T)(n0 & n20);
  n282 = (uint16_T)(n2 & n20);
  n298 = (uint16_T)(n4 & n20);
  n312 = (uint16_T)(n6 & n20);
  n329 = (uint16_T)(n8 & n20);
  n343 = (uint16_T)(n10 & n20);
  n356 = (uint16_T)(n12 & n20);
  n372 = (uint16_T)(n14 & n20);
  n386 = (uint16_T)(n0 & n22);
  n402 = (uint16_T)((n2 & n22) | ((uint16_T)~n2 & n2));
  n416 = (uint16_T)(n4 & n22);
  n432 = (uint16_T)(n6 & n22);
  n446 = (uint16_T)(n8 & n22);
  n460 = (uint16_T)(n10 & n22);
  n476 = (uint16_T)(n12 & n22);
  n490 = (uint16_T)(n14 & n22);
  n20 = (uint16_T)(n0 & n24);
  n520 = (uint16_T)(n2 & n24);
  n534 = (uint16_T)(n4 & n24);
  n550 = (uint16_T)(n6 & n24);
  n564 = (uint16_T)(n8 & n24);
  n580 = (uint16_T)(n10 & n24);
  n594 = (uint16_T)(n12 & n24);
  n608 = (uint16_T)(n14 & n24);
  n22 = (uint16_T)(n0 & n26);
  n638 = (uint16_T)(n2 & n26);
  n654 = (uint16_T)(n4 & n26);
  n668 = (uint16_T)(n6 & n26);
  n682 = (uint16_T)(n8 & n26);
  n698 = (uint16_T)(n10 & n26);
  n712 = (uint16_T)(n12 & n26);
  n728 = (uint16_T)(n14 & n26);
  n742 = (uint16_T)(n0 & n28);
  n756 = (uint16_T)(n2 & n28);
  n772 = (uint16_T)(n4 & n28);
  n786 = (uint16_T)(n6 & n28);
  n802 = (uint16_T)(n8 & n28);
  n816 = (uint16_T)(n10 & n28);
  n832 = (uint16_T)(n12 & n28);
  n846 = (uint16_T)(n14 & n28);
  n860 = (uint16_T)(n0 & n30);
  n876 = (uint16_T)(n2 & n30);
  n890 = (uint16_T)(n4 & n30);
  n906 = (uint16_T)(n6 & n30);
  n920 = (uint16_T)(n8 & n30);
  n934 = (uint16_T)(n10 & n30);
  n950 = (uint16_T)(n12 & n30);
  n964 = (uint16_T)(n14 & n30);
  n981 = (uint16_T)(n46 & n150);
  n994 = (uint16_T)(n60 ^ n164 ^ n18);
  n14 = (uint16_T)((n60 & n164) | (n164 & n18) | (n60 & n18));
  n60 = (uint16_T)(n76 ^ n180 ^ n282);
  n6 = (uint16_T)((n76 & n180) | (n180 & n282) | (n76 & n282));
  n8 = (uint16_T)(n90 ^ n194 ^ n298);
  n28 = (uint16_T)((n90 & n194) | (n194 & n298) | (n90 & n298));
  n90 = (uint16_T)(n106 ^ n208 ^ n312);
  n76 = (uint16_T)((n106 & n208) | (n208 & n312) | (n106 & n312));
  n180 = (uint16_T)(n121 ^ n224 ^ n329);
  n282 = (uint16_T)((n121 & n224) | (n224 & n329) | (n121 & n329));
  n1068 = (uint16_T)(n134 ^ n238 ^ n343);
  n1069 = (uint16_T)((n134 & n238) | (n238 & n343) | (n134 & n343));
  n298 = (uint16_T)(n254 & n356);
  n164 = (uint16_T)(n254 ^ n356);
  n208 = (uint16_T)(n402 ^ n20);
  n134 = (uint16_T)(n402 & n20);
  n26 = (uint16_T)(n416 ^ n520 ^ n22);
  n416 = (uint16_T)((n416 & n520) | (n520 & n22) | (n416 & n22));
  n24 = (uint16_T)(n432 ^ n534 ^ n638);
  n520 = (uint16_T)((n432 & n534) | (n534 & n638) | (n432 & n638));
  n22 = (uint16_T)(n446 ^ n550 ^ n654);
  n30 = (uint16_T)((n446 & n550) | (n550 & n654) | (n446 & n654));
  n20 = (uint16_T)(n460 ^ n564 ^ n668);
  n12 = (uint16_T)((n460 & n564) | (n564 & n668) | (n460 & n668));
  n18 = (uint16_T)(n476 ^ n580 ^ n682);
  n10 = (uint16_T)((n476 & n580) | (n580 & n682) | (n476 & n682));
  n550 = (uint16_T)(n490 ^ n594 ^ n698);
  n2 = (uint16_T)((n490 & n594) | (n594 & n698) | (n490 & n698));
  n654 = (uint16_T)(n608 ^ n712);
  n4 = (uint16_T)(n608 & n712);
  n668 = (uint16_T)(n994 & n981);
  n564 = (uint16_T)(n60 ^ n14 ^ n386);
  n14 = (uint16_T)((n60 & n14) | (n14 & n386) | (n60 & n386));
  n60 = (uint16_T)(n8 ^ n6 ^ n208);
  n6 = (uint16_T)((n8 & n6) | (n6 & n208) | (n8 & n208));
  n8 = (uint16_T)(n90 ^ n28 ^ n26);
  n224 = (uint16_T)((n90 & n28) | (n28 & n26) | (n90 & n26));
  n28 = (uint16_T)(n180 ^ n76 ^ n24);
  n329 = (uint16_T)((n180 & n76) | (n76 & n24) | (n180 & n24));
  n121 = (uint16_T)(n1068 ^ n282 ^ n22);
  n194 = (uint16_T)((n1068 & n282) | (n282 & n22) | (n1068 & n22));
  n312 = (uint16_T)(n164 ^ n1069 ^ n20);
  n26 = (uint16_T)((n164 & n1069) | (n1069 & n20) | (n164 & n20));
  n106 = (uint16_T)(n372 ^ n298 ^ n18);
  n90 = (uint16_T)((n372 & n298) | (n298 & n18) | (n372 & n18));
  n22 = (uint16_T)(n416 ^ n742);
  n446 = (uint16_T)(n416 & n742);
  n180 = (uint16_T)(n520 ^ n756 ^ n860);
  n254 = (uint16_T)((n520 & n756) | (n756 & n860) | (n520 & n860));
  n24 = (uint16_T)(n30 ^ n772 ^ n876);
  n30 = (uint16_T)((n30 & n772) | (n772 & n876) | (n30 & n876));
  n76 = (uint16_T)(n12 ^ n786 ^ n890);
  n1068 = (uint16_T)((n12 & n786) | (n786 & n890) | (n12 & n890));
  n282 = (uint16_T)(n10 ^ n802 ^ n906);
  n343 = (uint16_T)((n10 & n802) | (n802 & n906) | (n10 & n906));
  n18 = (uint16_T)(n2 ^ n816 ^ n920);
  n416 = (uint16_T)((n2 & n816) | (n816 & n920) | (n2 & n920));
  n20 = (uint16_T)(n4 ^ n832 ^ n934);
  n520 = (uint16_T)((n4 & n832) | (n832 & n934) | (n4 & n934));
  n432 = (uint16_T)(n846 & n950);
  n298 = (uint16_T)(n846 ^ n950);
  n638 = (uint16_T)(n564 & n668);
  n534 = (uint16_T)(n60 ^ n14);
  n208 = (uint16_T)(n60 & n14);
  n356 = (uint16_T)((n8 & n6) | (n6 & n134) | (n8 & n134));
  n402 = (uint16_T)(n28 ^ n224 ^ n22);
  n134 = (uint16_T)((n28 & n224) | (n224 & n22) | (n28 & n22));
  n238 = (uint16_T)(n121 ^ n329 ^ n180);
  n22 = (uint16_T)((n121 & n329) | (n329 & n180) | (n121 & n180));
  n14 = (uint16_T)(n312 ^ n194 ^ n24);
  n6 = (uint16_T)((n312 & n194) | (n194 & n24) | (n312 & n24));
  n8 = (uint16_T)(n106 ^ n26 ^ n76);
  n28 = (uint16_T)((n106 & n26) | (n26 & n76) | (n106 & n76));
  n180 = (uint16_T)(n550 ^ n90 ^ n282);
  n76 = (uint16_T)((n550 & n90) | (n90 & n282) | (n550 & n282));
  n10 = (uint16_T)(n654 & n18);
  n18 ^= n654;
  n12 = (uint16_T)(n728 & n20);
  n20 ^= n728;
  n164 = (uint16_T)(n534 & n638);
  n224 = (uint16_T)(n1069 ^ n208);
  n106 = (uint16_T)(n1069 & n208);
  n329 = (uint16_T)(n402 ^ n356);
  n121 = (uint16_T)((n238 & n134) | (n134 & n446) | (n238 & n446));
  n60 = (uint16_T)(n14 ^ n22 ^ n254);
  n194 = (uint16_T)((n14 & n22) | (n22 & n254) | (n14 & n254));
  n312 = (uint16_T)(n8 ^ n6 ^ n30);
  n30 = (uint16_T)((n8 & n6) | (n6 & n30) | (n8 & n30));
  n90 = (uint16_T)(n180 ^ n28 ^ n1068);
  n2 = (uint16_T)((n180 & n28) | (n28 & n1068) | (n180 & n1068));
  n4 = (uint16_T)(n18 ^ n76 ^ n343);
  n26 = (uint16_T)((n18 & n76) | (n76 & n343) | (n18 & n343));
  n282 = (uint16_T)(n20 ^ n10 ^ n416);
  n14 = (uint16_T)((n20 & n10) | (n10 & n416) | (n20 & n416));
  n208 = (uint16_T)(n298 ^ n12 ^ n520);
  n22 = (uint16_T)((n298 & n12) | (n12 & n520) | (n298 & n520));
  n76 = (uint16_T)(n964 ^ n432);
  n24 = (uint16_T)(n224 & n164);
  n28 = (uint16_T)(n60 & n121);
  n180 = (uint16_T)((n312 & n194) | (n194 & n28) | (n312 & n28));
  n6 = (uint16_T)((n90 & n30) | (n30 & n180) | (n90 & n180));
  n8 = (uint16_T)((n4 & n2) | (n2 & n6) | (n4 & n6));
  n10 = (uint16_T)((n282 & n26) | (n26 & n8) | (n282 & n8));
  n12 = (uint16_T)((n208 & n14) | (n14 & n10) | (n208 & n10));
  c = (uint16_T)(n0 & n16);
  n20 = (uint16_T)((n46 ^ n150) << 1);
  n18 = (uint16_T)(n994 ^ n981);
  return (uint16_T)(c | n20 | n18 << 2 | (n564 ^ n668) << 3 | (n534 ^ n638) << 4
                    | (n224 ^ n164) << 5 | (n329 ^ n106 ^ n24) << 6 | (n238 ^
    n134 ^ n446 ^ (n402 & n356) ^ ((n329 & n106) | (n106 & n24) | (n329 & n24)))
                    << 7 | (n60 ^ n121) << 8 | (n312 ^ n194 ^ n28) << 9 | (n90 ^
    n30 ^ n180) << 10 | (n4 ^ n2 ^ n6) << 11 | (n282 ^ n26 ^ n8) << 12 | (n208 ^
    n14 ^ n10) << 13 | (n76 ^ n22 ^ n12) << 14 | ((n964 & n432) | ((n76 & n22) |
    (n22 & n12) | (n76 & n12))) << 15);
}

/* End of code generation (mul8_218.c) */
