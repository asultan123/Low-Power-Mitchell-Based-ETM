/*
 * mul8_312.c
 *
 * Code generation for function 'mul8_312'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mul8_312.h"

/* Function Definitions */
uint16_T mul8_312(uint8_T a, uint8_T b)
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
  uint16_T n32;
  uint16_T n41;
  uint16_T n46;
  uint16_T n51;
  uint16_T n53;
  uint16_T n60;
  uint16_T n65;
  uint16_T n71;
  uint16_T n73;
  uint16_T n76;
  uint16_T n77;
  uint16_T n86;
  uint16_T n87;
  uint16_T n89;
  uint16_T n90;
  uint16_T n103;
  uint16_T n105;
  uint16_T n106;
  uint16_T n121;
  uint16_T n134;
  uint16_T n145;
  uint16_T n164;
  uint16_T n167;
  uint16_T n169;
  uint16_T n180;
  uint16_T n194;
  uint16_T n206;
  uint16_T n208;
  uint16_T n224;
  uint16_T n238;
  uint16_T n243;
  uint16_T n254;
  uint16_T n267;
  uint16_T n268;
  uint16_T n342;
  uint16_T n343;
  uint16_T n356;
  uint16_T n372;
  uint16_T n386;
  uint16_T n432;
  uint16_T n446;
  uint16_T n460;
  uint16_T n476;
  uint16_T n490;
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
  uint16_T n889;
  uint16_T n890;
  uint16_T n906;
  uint16_T n920;
  uint16_T n934;
  uint16_T n950;
  uint16_T n964;
  uint16_T n1008;
  uint16_T n1024;
  uint16_T n1113;

  /*  Approximate function mul8_312 */
  /*   Library = EvoApprox8b */
  /*   Circuit = mul8_312 */
  /*   Area   (180) = 10875 */
  /*   Delay  (180) = 2.480 */
  /*   Power  (180) = 5149.30 */
  /*   Area   (45) = 780 */
  /*   Delay  (45) = 0.920 */
  /*   Power  (45) = 441.00 */
  /*   Nodes = 180 */
  /*   HD = 203161 */
  /*   MAE = 383.08447 */
  /*   MSE = 508333.90625 */
  /*   MRE = 5.00 % */
  /*   WCE = 2336 */
  /*   WCRE = 100 % */
  /*   EP = 85.1 % */
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
  n32 = (uint16_T)(n0 & n16);
  n41 = (uint16_T)(n18 ^ n14);
  n46 = (uint16_T)(n2 & n16);
  n51 = (uint16_T)(n4 & n20);
  n53 = (uint16_T)(n26 & n4);
  n60 = (uint16_T)(n4 & n16);
  n65 = (uint16_T)(n28 & n12);
  n71 = (uint16_T)~(uint16_T)(n41 & (n46 & n26));
  n73 = (uint16_T)~(uint16_T)(n65 & (n46 & n51));
  n76 = (uint16_T)(n6 & n16);
  n77 = (uint16_T)(n6 & n16);
  n86 = (uint16_T)~n71;
  n87 = (uint16_T)~n71;
  n89 = (uint16_T)(n65 | n12);
  n90 = (uint16_T)(n8 & n16);
  n103 = (uint16_T)~(uint16_T)(n18 | n20);
  n105 = (uint16_T)~(uint16_T)~(uint16_T)(n73 | (uint16_T)~(uint16_T)(n41 & (n46
    & n26)));
  n106 = (uint16_T)(n10 & n16);
  n71 = (uint16_T)~n105;
  n121 = (uint16_T)(n12 & n16);
  n134 = (uint16_T)(n14 & n16);
  n145 = (uint16_T)~n41;
  n164 = (uint16_T)(n2 & n18);
  n167 = (uint16_T)~(uint16_T)(n71 & ((n18 ^ n14) & n30));
  n169 = (uint16_T)~(uint16_T)(n89 ^ n86);
  n180 = (uint16_T)(n4 & n18);
  n194 = (uint16_T)(n6 & n18);
  n206 = (uint16_T)(n10 ^ (uint16_T)~(uint16_T)((uint16_T)~(uint16_T)((n0 & n16)
    | (n51 | (n2 & n16))) & n53) ^ n6);
  n208 = (uint16_T)(n8 & n18);
  n224 = (uint16_T)(n10 & n18);
  n238 = (uint16_T)(n12 & n18);
  n243 = (uint16_T)~(uint16_T)(n169 | (uint16_T)(n24 | n8 | n41));
  n254 = (uint16_T)(n14 & n18);
  n267 = (uint16_T)~(uint16_T)((uint16_T)(n71 ^ n20) & (uint16_T)~(uint16_T)(n18
    | n20));
  n268 = (uint16_T)(n77 & n20 & n20);
  n71 = (uint16_T)(n2 & n20);
  n41 = (uint16_T)(n4 & (uint16_T)~n73);
  n73 = (uint16_T)(n6 & n20);
  n342 = (uint16_T)(n10 ^ n20);
  n343 = (uint16_T)(n10 & n20);
  n356 = (uint16_T)(n12 & n20);
  n372 = (uint16_T)(n14 & n20);
  n386 = (uint16_T)(n51 & (uint16_T)~(uint16_T)(n65 & (n46 & n51)));
  n20 = (uint16_T)(n2 & n22);
  n432 = (uint16_T)(n6 & n22);
  n446 = (uint16_T)(n8 & n22);
  n460 = (uint16_T)(n10 & n22);
  n476 = (uint16_T)(n12 & n22);
  n490 = (uint16_T)(n14 & n22);
  n534 = (uint16_T)(n4 & n24);
  n550 = (uint16_T)(n6 & n24);
  n564 = (uint16_T)(n8 & n24);
  n580 = (uint16_T)(n10 & n24);
  n594 = (uint16_T)(n12 & n24);
  n608 = (uint16_T)(n14 & n24);
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
  n889 = (uint16_T)~(uint16_T)((uint16_T)~(uint16_T)(n8 & (n206 & (uint16_T)
    ~(uint16_T)(n77 & ((n26 & n24) | ((uint16_T)~n26 & n30))))) | n206);
  n890 = (uint16_T)(n4 & n30);
  n906 = (uint16_T)(n6 & n30);
  n920 = (uint16_T)(n8 & n30);
  n934 = (uint16_T)(n10 & n30);
  n950 = (uint16_T)(n12 & n30);
  n964 = (uint16_T)(n14 & n30);
  n30 = (uint16_T)((n60 & n164) | (n164 & n268) | (n60 & n268));
  n1008 = (uint16_T)(n76 ^ n180 ^ n71);
  n12 = (uint16_T)((n76 & n180) | (n180 & n71) | (n76 & n71));
  n1024 = (uint16_T)(n90 ^ n194 ^ n41);
  n24 = (uint16_T)((n90 & n194) | (n194 & n41) | (n90 & n41));
  n10 = (uint16_T)(n106 ^ n208 ^ n73);
  n76 = (uint16_T)((n106 & n208) | (n208 & n73) | (n106 & n73));
  n90 = (uint16_T)(n121 ^ n224);
  n194 = (uint16_T)(n121 & n224);
  n208 = (uint16_T)(n134 ^ n238 ^ n343);
  n343 = (uint16_T)((n134 & n238) | (n238 & n343) | (n134 & n343));
  n224 = (uint16_T)(n254 & n356);
  n121 = (uint16_T)(n254 ^ n356);
  n51 = (uint16_T)(n20 ^ n86);
  n1113 = (uint16_T)(n20 & n86);
  n41 = (uint16_T)((n4 & n22) ^ (n2 & n254) ^ (n254 & n356));
  n65 = (uint16_T)(n432 ^ n534 ^ n638);
  n6 = (uint16_T)((n432 & n534) | (n534 & n638) | (n432 & n638));
  n20 = (uint16_T)(n446 ^ n550 ^ n654);
  n77 = (uint16_T)((n446 & n550) | (n550 & n654) | (n446 & n654));
  n73 = (uint16_T)(n460 ^ n564 ^ n668);
  n206 = (uint16_T)((n460 & n564) | (n564 & n668) | (n460 & n668));
  n71 = (uint16_T)(n476 ^ n580 ^ n682);
  n564 = (uint16_T)((n476 & n580) | (n580 & n682) | (n476 & n682));
  n580 = (uint16_T)(n490 ^ n594 ^ n698);
  n180 = (uint16_T)((n490 & n594) | (n594 & n698) | (n490 & n698));
  n476 = (uint16_T)(n608 ^ n712);
  n460 = (uint16_T)(n608 & n712);
  n490 = (uint16_T)((n60 ^ n164 ^ n268) & ((uint16_T)~(uint16_T)((uint16_T)
    ((uint16_T)((n145 & n342) | (n342 & n267)) | (uint16_T)(n145 & n267)) &
    (n134 & (uint16_T)~(uint16_T)(n145 & n8))) & (n14 & n18)));
  n594 = (uint16_T)(n1008 ^ n30 ^ n386);
  n30 = (uint16_T)((n1008 & n30) | (n30 & n386) | (n1008 & n386));
  n86 = (uint16_T)(n1024 ^ n12 ^ n51);
  n654 = (uint16_T)((n1024 & n12) | (n12 & n51) | (n1024 & n51));
  n254 = (uint16_T)(n10 ^ n24 ^ n41);
  n446 = (uint16_T)((n10 & n24) | (n24 & n41) | (n10 & n41));
  n12 = (uint16_T)(n90 ^ n76 ^ n65);
  n24 = (uint16_T)((n90 & n76) | (n76 & n65) | (n90 & n65));
  n10 = (uint16_T)(n208 ^ n194 ^ n20);
  n534 = (uint16_T)((n208 & n194) | (n194 & n20) | (n208 & n20));
  n638 = (uint16_T)(n121 ^ n343 ^ n73);
  n238 = (uint16_T)((n121 & n343) | (n343 & n73) | (n121 & n73));
  n432 = (uint16_T)(n372 ^ n224 ^ n71);
  n121 = (uint16_T)((n372 & n224) | (n224 & n71) | (n372 & n71));
  n65 = (uint16_T)(n889 ^ n742);
  n22 = (uint16_T)(n889 & n742);
  n76 = (uint16_T)(n6 ^ n756 ^ n860);
  n6 = (uint16_T)((n6 & n756) | (n756 & n860) | (n6 & n860));
  n51 = (uint16_T)(n77 ^ n772 ^ n876);
  n77 = (uint16_T)((n77 & n772) | (n772 & n876) | (n77 & n876));
  n20 = (uint16_T)(n206 ^ n786 ^ n890);
  n668 = (uint16_T)((n206 & n786) | (n786 & n890) | (n206 & n890));
  n73 = (uint16_T)(n564 ^ n802 ^ n906);
  n206 = (uint16_T)((n564 & n802) | (n802 & n906) | (n564 & n906));
  n71 = (uint16_T)(n180 ^ n816 ^ n920);
  n343 = (uint16_T)((n180 & n816) | (n816 & n920) | (n180 & n920));
  n41 = (uint16_T)(n460 ^ n832 ^ n934);
  n208 = (uint16_T)((n460 & n832) | (n832 & n934) | (n460 & n934));
  n550 = (uint16_T)(n846 & n950);
  n90 = (uint16_T)(n846 ^ n950);
  n460 = (uint16_T)(n594 & n490);
  n564 = (uint16_T)(n86 ^ n30);
  n86 &= n30;
  n224 = (uint16_T)(n254 ^ n654 ^ n1113);
  n654 = (uint16_T)((n254 & n654) | (n654 & n1113) | (n254 & n1113));
  n254 = (uint16_T)(n12 ^ n446 ^ n65);
  n194 = (uint16_T)((n12 & n446) | (n446 & n65) | (n12 & n65));
  n446 = (uint16_T)(n10 ^ n24 ^ n76);
  n12 = (uint16_T)((n10 & n24) | (n24 & n76) | (n10 & n76));
  n30 = (uint16_T)(n638 ^ n534 ^ n51);
  n51 = (uint16_T)((n638 & n534) | (n534 & n51) | (n638 & n51));
  n65 = (uint16_T)(n432 ^ n238 ^ n20);
  n534 = (uint16_T)((n432 & n238) | (n238 & n20) | (n432 & n20));
  n638 = (uint16_T)(n580 ^ n121 ^ n73);
  n73 = (uint16_T)((n580 & n121) | (n121 & n73) | (n580 & n73));
  n20 = (uint16_T)(n476 & n71);
  n71 ^= n476;
  n24 = (uint16_T)(n728 & n41);
  n41 ^= n728;
  n432 = (uint16_T)((n446 & n194) | (n194 & n22) | (n446 & n22));
  n180 = (uint16_T)(n30 ^ n12 ^ n6);
  n121 = (uint16_T)((n30 & n12) | (n12 & n6) | (n30 & n6));
  n238 = (uint16_T)(n65 ^ n51 ^ n77);
  n77 = (uint16_T)((n65 & n51) | (n51 & n77) | (n65 & n77));
  n6 = (uint16_T)((n638 & n534) | (n534 & n668) | (n638 & n668));
  n10 = (uint16_T)(n71 ^ n73 ^ n206);
  n76 = (uint16_T)((n71 & n73) | (n73 & n206) | (n71 & n206));
  n206 = (uint16_T)(n41 ^ n20 ^ n343);
  n12 = (uint16_T)((n41 & n20) | (n20 & n343) | (n41 & n343));
  n30 = (uint16_T)(n90 ^ n24 ^ n208);
  n41 = (uint16_T)((n90 & n24) | (n24 & n208) | (n90 & n208));
  n73 = (uint16_T)(n964 ^ n550);
  n20 = (uint16_T)(n180 & n432);
  n51 = (uint16_T)((n10 & n6) | (n6 & n77) | (n10 & n77));
  n65 = (uint16_T)((n206 & n76) | (n76 & n51) | (n206 & n51));
  n24 = (uint16_T)((n30 & n12) | (n12 & n65) | (n30 & n65));
  c = (uint16_T)((n46 ^ (n0 & n18)) << 1);
  n71 = (uint16_T)((uint16_T)~(uint16_T)((uint16_T)((uint16_T)(n87 & (uint16_T)
    ~(uint16_T)~(uint16_T)(n26 ^ (uint16_T)~(uint16_T)(n2 | n8))) | (uint16_T)
    ((uint16_T)~n87 & n53)) | (uint16_T)(n356 | (uint16_T)~(uint16_T)((n4 & n16)
    | n106))) & 1);
  return (uint16_T)(n32 | c | n71 << 2 | (n594 ^ n490) << 3 | ((uint16_T)(n564 ^
    n460) & 1) << 4 | (n224 ^ n86 ^ (n564 & n460)) << 5 | ((uint16_T)((uint16_T)
    (n254 ^ n654) | (uint16_T)(n224 & n86)) & 1) << 6 | ((n446 ^ n194 ^ n22) |
    (n254 & n654)) << 7 | (n180 ^ n432) << 8 | (n238 ^ n121 ^ n20) << 9 |
                    ((uint16_T)((uint16_T)((uint16_T)(n638 ^ n534 ^ n668) ^
    (uint16_T)((uint16_T)~(uint16_T)(((uint16_T)~(uint16_T)((uint16_T)~(uint16_T)
    (n2 & n28) | (uint16_T)(n134 | n243)) & n682) | n243) & (uint16_T)((uint16_T)
    (n167 & (uint16_T)~n105) | (uint16_T)((uint16_T)~n167 & n89)) & (uint16_T)
               ~(uint16_T)((uint16_T)(n103 & n32) | (uint16_T)((uint16_T)~n103 &
    n169)))) ^ (uint16_T)((n238 & n121) | (n121 & n20) | (n238 & n20))) & 1) <<
                    10 | (n10 ^ n6 ^ n77) << 11 | (n206 ^ n76 ^ n51) << 12 |
                    (n30 ^ n12 ^ n65) << 13 | (n73 ^ n41 ^ n24) << 14 | ((n964 &
    n550) | ((n73 & n41) | (n41 & n24) | (n73 & n24))) << 15);
}

/* End of code generation (mul8_312.c) */
