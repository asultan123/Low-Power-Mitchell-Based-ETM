/*
 * mul8_236.c
 *
 * Code generation for function 'mul8_236'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mul8_236.h"

/* Function Definitions */
uint16_T mul8_236(uint8_T a, uint8_T b)
{
  uint16_T c;
  uint16_T n2;
  uint16_T n4;
  uint16_T n6;
  uint16_T n8;
  uint16_T n10;
  uint16_T n12;
  uint16_T n14;
  uint16_T n18;
  uint16_T n20;
  uint16_T n22;
  uint16_T n24;
  uint16_T n26;
  uint16_T n28;
  uint16_T n30;
  uint16_T n33;
  uint16_T n34;
  uint16_T n38;
  uint16_T n39;
  uint16_T n43;
  uint16_T n46;
  uint16_T n54;
  uint16_T n106;
  uint16_T n115;
  uint16_T n118;
  uint16_T n134;
  uint16_T n254;
  uint16_T n313;
  uint16_T n343;
  uint16_T n356;
  uint16_T n372;
  uint16_T n446;
  uint16_T n460;
  uint16_T n476;
  uint16_T n490;
  uint16_T n564;
  uint16_T n580;
  uint16_T n594;
  uint16_T n608;
  uint16_T n698;
  uint16_T n712;
  uint16_T n756;
  uint16_T n786;
  uint16_T n802;
  uint16_T n816;
  uint16_T n832;
  uint16_T n846;
  uint16_T n876;
  uint16_T n890;
  uint16_T n906;
  uint16_T n934;
  uint16_T n950;
  uint16_T n964;
  uint16_T n1068;
  uint16_T n1142;
  uint16_T n1156;
  uint16_T n79;
  uint16_T n1202;
  uint16_T n1203;

  /*  Approximate function mul8_236 */
  /*   Library = EvoApprox8b */
  /*   Circuit = mul8_236 */
  /*   Area   (180) = 6783 */
  /*   Delay  (180) = 2.330 */
  /*   Power  (180) = 2511.60 */
  /*   Area   (45) = 501 */
  /*   Delay  (45) = 0.870 */
  /*   Power  (45) = 215.00 */
  /*   Nodes = 130 */
  /*   HD = 337480 */
  /*   MAE = 326.44333 */
  /*   MSE = 209123.39185 */
  /*   MRE = 7.00 % */
  /*   WCE = 2021 */
  /*   WCRE = 200 % */
  /*   EP = 98.5 % */
  n2 = (uint16_T)((int32_T)((uint32_T)a >> 1) & 1);
  n4 = (uint16_T)((int32_T)((uint32_T)a >> 2) & 1);
  n6 = (uint16_T)((int32_T)((uint32_T)a >> 3) & 1);
  n8 = (uint16_T)((int32_T)((uint32_T)a >> 4) & 1);
  n10 = (uint16_T)((int32_T)((uint32_T)a >> 5) & 1);
  n12 = (uint16_T)((int32_T)((uint32_T)a >> 6) & 1);
  n14 = (uint16_T)((uint32_T)a >> 7);
  n18 = (uint16_T)((int32_T)((uint32_T)b >> 1) & 1);
  n20 = (uint16_T)((int32_T)((uint32_T)b >> 2) & 1);
  n22 = (uint16_T)((int32_T)((uint32_T)b >> 3) & 1);
  n24 = (uint16_T)((int32_T)((uint32_T)b >> 4) & 1);
  n26 = (uint16_T)((int32_T)((uint32_T)b >> 5) & 1);
  n28 = (uint16_T)((int32_T)((uint32_T)b >> 6) & 1);
  n30 = (uint16_T)((uint32_T)b >> 7);
  n33 = (uint16_T)~(uint16_T)(n18 | (n12 | n6));
  n34 = (uint16_T)~(uint16_T)(n30 & (n8 & n14));
  n38 = (uint16_T)~(uint16_T)(n6 | n34);
  n39 = (uint16_T)~(uint16_T)(n6 | n34);
  n43 = (uint16_T)~(uint16_T)(n24 | n18 | MAX_uint16_T);
  n46 = (uint16_T)~(uint16_T)(n18 & (b & 1 & n39));
  n54 = (uint16_T)~(uint16_T)(n33 | (uint16_T)~(uint16_T)(n10 & n38));
  n34 = (uint16_T)~(uint16_T)((n33 | (uint16_T)~(uint16_T)(n14 | MAX_uint16_T))
    & n6);
  n106 = (uint16_T)~(uint16_T)((n39 & n8) | MAX_uint16_T);
  n115 = (uint16_T)~(uint16_T)(n10 & (n46 & n34));
  n118 = (uint16_T)~(uint16_T)~(uint16_T)(n39 | MAX_uint16_T);
  n134 = (uint16_T)((uint16_T)~(uint16_T)(n34 & 65535) & n38);
  n254 = (uint16_T)(n14 & n18);
  n313 = (uint16_T)~(uint16_T)~(uint16_T)((uint16_T)~n46 | n134);
  n343 = (uint16_T)(n10 & n20);
  c = (uint16_T)(n313 | MAX_uint16_T);
  n356 = (uint16_T)(n12 & n20);
  n372 = (uint16_T)(n14 & n20);
  n446 = (uint16_T)(n8 & n22);
  n460 = (uint16_T)(n10 & n22);
  n476 = (uint16_T)(n12 & n22);
  n490 = (uint16_T)(n14 & n22);
  n20 = (uint16_T)(n6 & n24);
  n564 = (uint16_T)(n8 & n24);
  n580 = (uint16_T)(n10 & n24);
  n594 = (uint16_T)(n12 & n24);
  n608 = (uint16_T)(n14 & n24);
  n46 = (uint16_T)(n4 & ((uint16_T)~(uint16_T)(n10 & n38) ^ (uint16_T)((uint16_T)
    ~(uint16_T)(n18 & n39) & 65535)));
  n24 = (uint16_T)(n6 & n26);
  n38 = (uint16_T)(n8 & n26);
  n698 = (uint16_T)(n10 & n26);
  n712 = (uint16_T)(n12 & n26);
  n756 = (uint16_T)(n2 & n28);
  n786 = (uint16_T)(n6 & n28);
  n802 = (uint16_T)(n8 & n28);
  n816 = (uint16_T)(n10 & n28);
  n832 = (uint16_T)(n12 & n28);
  n846 = (uint16_T)(n14 & n28);
  n876 = (uint16_T)(n2 & n30);
  n890 = (uint16_T)(n4 & n30);
  n906 = (uint16_T)(n6 & n30);
  n8 &= n30;
  n934 = (uint16_T)(n10 & n30);
  n950 = (uint16_T)(n12 & n30);
  n964 = (uint16_T)(n14 & n30);
  n1068 = (uint16_T)(n134 ^ n54 ^ n343);
  n2 = (uint16_T)(n254 & n356);
  n28 = (uint16_T)(n254 | n356);
  n1142 = (uint16_T)(n4 & n446 & 65535);
  n1156 = (uint16_T)(n446 ^ n20 ^ n46);
  n22 = (uint16_T)((n446 & n20) | (n20 & n46) | (n446 & n46));
  n46 = (uint16_T)(n460 ^ n564 ^ n24);
  n20 = (uint16_T)((n460 & n564) | (n564 & n24) | (n460 & n24));
  n34 = (uint16_T)(n476 ^ n580 ^ n38);
  n79 = (uint16_T)((n476 & n580) | (n580 & n38) | (n476 & n38));
  n1202 = (uint16_T)(n490 ^ n594 ^ n698);
  n1203 = (uint16_T)((n490 & n594) | (n594 & n698) | (n490 & n698));
  n343 = (uint16_T)(n608 ^ n712);
  n24 = (uint16_T)(n608 & n712);
  n30 = (uint16_T)((uint16_T)((uint16_T)(n1068 & n1142) | (uint16_T)(n1142 &
    n1156)) | (uint16_T)(n1068 & n1156));
  n356 = (uint16_T)(n28 ^ n756 ^ n46);
  n460 = (uint16_T)((n28 & n756) | (n756 & n46) | (n28 & n46));
  n12 = (uint16_T)(n372 ^ n2 ^ n34);
  n10 = (uint16_T)((n372 & n2) | (n2 & n34) | (n372 & n34));
  n38 = (uint16_T)(n22 ^ n43 ^ n876);
  n594 = (uint16_T)((n22 & n43) | (n43 & n876) | (n22 & n876));
  n22 = (uint16_T)(n20 ^ n786 ^ n890);
  n490 = (uint16_T)((n20 & n786) | (n786 & n890) | (n20 & n890));
  n20 = (uint16_T)(n79 ^ n802 ^ n906);
  n2 = (uint16_T)((n79 & n802) | (n802 & n906) | (n79 & n906));
  n34 = (uint16_T)(n1203 ^ n816 ^ n8);
  n8 = (uint16_T)((n1203 & n816) | (n816 & n8) | (n1203 & n8));
  n46 = (uint16_T)(n24 ^ n832 ^ n934);
  n79 = (uint16_T)((n24 & n832) | (n832 & n934) | (n24 & n934));
  n712 = (uint16_T)(n846 & n950);
  n28 = (uint16_T)(n846 ^ n950);
  n476 = (uint16_T)(n846 & n950);
  n698 = (uint16_T)((uint16_T)((uint16_T)(a & 1 & n26) | n313) & 65535);
  n580 = (uint16_T)(n356 ^ n30 ^ n38);
  n54 = (uint16_T)((uint16_T)((uint16_T)(n356 & n30) | (uint16_T)(n30 & n38)) |
                   (uint16_T)(n356 & n38));
  n564 = (uint16_T)(n12 ^ n460 ^ n22);
  n446 = (uint16_T)((n12 & n460) | (n460 & n22) | (n12 & n22));
  n460 = (uint16_T)(n1202 ^ n10 ^ n20);
  n20 = (uint16_T)((n1202 & n10) | (n10 & n20) | (n1202 & n20));
  n22 = (uint16_T)(n343 & n34);
  n34 ^= n343;
  n24 = (uint16_T)(n14 & n26 & n46);
  n46 = (uint16_T)((n14 & n26) ^ n46);
  n30 = (uint16_T)(n564 ^ n54 ^ n594);
  n356 = (uint16_T)((n460 & n446) | (n446 & n490) | (n460 & n490));
  n343 = (uint16_T)(n34 ^ n20 ^ n2);
  n10 = (uint16_T)((n34 & n20) | (n20 & n2) | (n34 & n2));
  n12 = (uint16_T)(n46 ^ n22 ^ n8);
  n2 = (uint16_T)((n46 & n22) | (n22 & n8) | (n46 & n8));
  n8 = (uint16_T)(n28 ^ n24 ^ n79);
  n22 = (uint16_T)((n28 & n24) | (n24 & n79) | (n28 & n79));
  n24 = (uint16_T)(n964 ^ n712);
  n38 = (uint16_T)(n343 & n356);
  n79 = (uint16_T)((n12 & n10) | (n10 & n38) | (n12 & n38));
  n28 = (uint16_T)((n8 & n2) | (n2 & n79) | (n8 & n79));
  n20 = (uint16_T)((n30 & 1) << 1);
  n34 = (uint16_T)(n6 & n254);
  return (uint16_T)(n20 | n34 << 2 | ((uint16_T)~c & 1) << 3 | (n6 & n26) << 4 |
                    ((uint16_T)((uint16_T)(n698 | n1156) ^ (uint16_T)~(uint16_T)
    ((uint16_T)((uint16_T)(n115 & 65535) | MAX_uint16_T) | (uint16_T)(n115 &
    65535))) & 1) << 5 | ((uint16_T)((uint16_T)~(uint16_T)((uint16_T)~(uint16_T)
    (n18 & n39) | n134) | (uint16_T)(n698 | n1156)) & 1) << 6 | ((uint16_T)
    ((uint16_T)(n1203 & (uint16_T)~(uint16_T)(n134 & 65535)) | (uint16_T)
     ((uint16_T)~n1203 & (uint16_T)((uint16_T)(n476 & (uint16_T)~(uint16_T)(n33
    & n118 & n4)) | (uint16_T)((uint16_T)~n476 & (uint16_T)(n1068 ^ n1142 ^
    n1156))))) & 1) << 7 | ((uint16_T)(n580 ^ n106) & 1) << 8 | ((uint16_T)(n30 ^
    (n580 & n106)) & 1) << 9 | ((n460 ^ n446 ^ n490) | ((n564 & n54) | (n54 &
    n594) | (n564 & n594))) << 10 | (n343 ^ n356) << 11 | (n12 ^ n10 ^ n38) <<
                    12 | (n8 ^ n2 ^ n79) << 13 | (n24 ^ n22 ^ n28) << 14 |
                    ((n964 & n712) | ((n24 & n22) | (n22 & n28) | (n24 & n28))) <<
                    15);
}

/* End of code generation (mul8_236.c) */
