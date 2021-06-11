/*
 * mul8_478.c
 *
 * Code generation for function 'mul8_478'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mul8_478.h"

/* Function Definitions */
uint16_T mul8_478(uint8_T a, uint8_T b)
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
  uint16_T n18;
  uint16_T n20;
  uint16_T n22;
  uint16_T n24;
  uint16_T n26;
  uint16_T n28;
  uint16_T n30;
  uint16_T n34;
  uint16_T n38;
  uint16_T n39;
  uint16_T n41;
  uint16_T n81;
  uint16_T n201;
  uint16_T n264;
  uint16_T n414;
  uint16_T n415;
  uint16_T n498;
  uint16_T n664;
  uint16_T n882;
  uint16_T n898;
  uint16_T n914;
  uint16_T n998;
  uint16_T n1148;
  uint16_T n1164;
  uint16_T n1182;
  uint16_T n1214;
  uint16_T n1398;
  uint16_T n1414;
  uint16_T n1464;
  uint16_T n1514;
  uint16_T n1632;
  uint16_T n1664;
  uint16_T n1682;

  /*  Approximate function mul8_478 */
  /*   Library = EvoApprox8b */
  /*   Circuit = mul8_478 */
  /*   Area   (180) = 5888 */
  /*   Delay  (180) = 4.760 */
  /*   Power  (180) = 2539.10 */
  /*   Area   (45) = 423 */
  /*   Delay  (45) = 1.730 */
  /*   Power  (45) = 220.60 */
  /*   Nodes = 95 */
  /*   HD = 304762 */
  /*   MAE = 160.06265 */
  /*   MSE = 41894.16065 */
  /*   MRE = 4.01 % */
  /*   WCE = 1033 */
  /*   WCRE = 100 % */
  /*   EP = 97.7 % */
  n0 = (uint16_T)(a & 1);
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
  n34 = (uint16_T)~(uint16_T)(n18 & (b & 1 & n6));
  n38 = (uint16_T)~(uint16_T)(n22 | (n34 | n6));
  n39 = (uint16_T)~(uint16_T)(n22 | (n34 | n6));
  n41 = (uint16_T)(n2 & n38);
  n81 = (uint16_T)(n41 & n38);
  n201 = (uint16_T)~(uint16_T)((uint16_T)~(uint16_T)((uint16_T)~(uint16_T)(n81 |
    n39) & (n14 & (uint16_T)~(uint16_T)(n39 & (n14 & n0)) & (n22 & (uint16_T)
    ~(uint16_T)(n28 | n30)))) | (uint16_T)(n28 | n39));
  n264 = (uint16_T)(n12 & n18);
  n34 = (uint16_T)(n14 & n18);
  n38 = (uint16_T)(n201 & n264);
  n414 = (uint16_T)(n38 ^ n34);
  n415 = (uint16_T)(n38 & n34);
  n498 = (uint16_T)(n81 & n20);
  n34 = (uint16_T)(n12 & n20);
  n38 = (uint16_T)(n14 & n20);
  n201 = (uint16_T)((uint16_T)(n201 ^ n264) | (uint16_T)(n10 & n20));
  n664 = (uint16_T)(n414 ^ n34);
  n34 &= n414;
  n414 = (uint16_T)(n415 ^ n38 ^ n34);
  n264 = (uint16_T)((n415 & n38) | (n38 & n34) | (n415 & n34));
  n34 = (uint16_T)(n8 & n22);
  n38 = (uint16_T)(n10 & n22);
  n81 = (uint16_T)(n12 & n22);
  n20 = (uint16_T)(n14 & n22);
  n882 = (uint16_T)((n41 | n498) ^ (n6 & n22));
  n898 = (uint16_T)(n201 ^ n34);
  n34 &= n201;
  n914 = (uint16_T)(n664 ^ n38 ^ n34);
  n34 = (uint16_T)((n664 & n38) | (n38 & n34) | (n664 & n34));
  n664 = (uint16_T)(n414 ^ n81 ^ n34);
  n34 = (uint16_T)((n414 & n81) | (n81 & n34) | (n414 & n34));
  n415 = (uint16_T)(n264 ^ n20 ^ n34);
  n20 = (uint16_T)((n264 & n20) | (n20 & n34) | (n264 & n34));
  n998 = (uint16_T)(n41 & n24);
  n34 = (uint16_T)(n6 & n24);
  n81 = (uint16_T)(n8 & n24);
  n201 = (uint16_T)(n10 & n24);
  n264 = (uint16_T)(n12 & n24);
  n414 = (uint16_T)(n14 & n24);
  n38 = (uint16_T)(n882 & n998);
  n1148 = (uint16_T)(n898 ^ n34 ^ n38);
  n34 = (uint16_T)((n898 & n34) | (n34 & n38) | (n898 & n38));
  n1164 = (uint16_T)(n914 ^ n81 ^ n34);
  n34 = (uint16_T)((n914 & n81) | (n81 & n34) | (n914 & n34));
  n1182 = (uint16_T)(n664 ^ n201 ^ n34);
  n201 = (uint16_T)((n664 & n201) | (n201 & n34) | (n664 & n34));
  n664 = (uint16_T)(n415 ^ n264 ^ n201);
  n34 = (uint16_T)((n415 & n264) | (n264 & n201) | (n415 & n201));
  n1214 = (uint16_T)(n20 ^ n414 ^ n34);
  n414 = (uint16_T)((n20 & n414) | (n414 & n34) | (n20 & n34));
  n34 = (uint16_T)(n4 & n26);
  n38 = (uint16_T)(n6 & n26);
  n81 = (uint16_T)(n8 & n26);
  n264 = (uint16_T)(n10 & n26);
  n20 = (uint16_T)(n12 & n26);
  n415 = (uint16_T)(n14 & n26);
  n1398 = (uint16_T)(n1148 ^ n34 ^ n201);
  n34 = (uint16_T)((n1148 & n34) | (n34 & n201) | (n1148 & n201));
  n1414 = (uint16_T)(n1164 ^ n38 ^ n34);
  n34 = (uint16_T)((n1164 & n38) | (n38 & n34) | (n1164 & n34));
  n914 = (uint16_T)(n1182 ^ n81 ^ n34);
  n34 = (uint16_T)((n1182 & n81) | (n81 & n34) | (n1182 & n34));
  n898 = (uint16_T)(n664 ^ n264 ^ n34);
  n34 = (uint16_T)((n664 & n264) | (n264 & n34) | (n664 & n34));
  n1464 = (uint16_T)(n1214 ^ n20 ^ n34);
  n34 = (uint16_T)((n1214 & n20) | (n20 & n34) | (n1214 & n34));
  n664 = (uint16_T)(n414 ^ n415 ^ n34);
  n415 = (uint16_T)((n414 & n415) | (n415 & n34) | (n414 & n34));
  n1514 = (uint16_T)(n2 & n28);
  n38 = (uint16_T)(n4 & n28);
  n81 = (uint16_T)(n6 & n28);
  n201 = (uint16_T)(n8 & n28);
  n264 = (uint16_T)(n10 & n28);
  n20 = (uint16_T)(n12 & n28);
  n414 = (uint16_T)(n14 & n28);
  n1632 = (uint16_T)((n882 ^ n998) | (n2 & n26) | n1414);
  n34 = (uint16_T)(n1398 & n1514);
  n1664 = (uint16_T)(n1414 ^ n38 ^ n34);
  n34 = (uint16_T)((n1414 & n38) | (n38 & n34) | (n1414 & n34));
  n1682 = (uint16_T)(n914 ^ n81 ^ n34);
  n34 = (uint16_T)((n914 & n81) | (n81 & n34) | (n914 & n34));
  n26 = (uint16_T)(n898 ^ n201 ^ n34);
  n34 = (uint16_T)((n898 & n201) | (n201 & n34) | (n898 & n34));
  n28 = (uint16_T)(n1464 ^ n264 ^ n34);
  n34 = (uint16_T)((n1464 & n264) | (n264 & n34) | (n1464 & n34));
  n882 = (uint16_T)(n664 ^ n20 ^ n34);
  n34 = (uint16_T)((n664 & n20) | (n20 & n34) | (n664 & n34));
  n998 = (uint16_T)(n415 ^ n414 ^ n34);
  n1414 = (uint16_T)((n415 & n414) | (n414 & n34) | (n415 & n34));
  n1464 = (uint16_T)(n2 & n30);
  n1164 = (uint16_T)(n4 & n30);
  n1148 = (uint16_T)(n6 & n30);
  n1182 = (uint16_T)(n8 & n30);
  n914 = (uint16_T)(n10 & n30);
  n1214 = (uint16_T)(n12 & n30);
  n898 = (uint16_T)(n14 & n30);
  n81 = (uint16_T)((uint16_T)(n1398 ^ n1514) | (uint16_T)(n0 & n30));
  n201 = (uint16_T)(n1664 & n1464);
  n264 = (uint16_T)((n1682 & n1164) | (n1164 & n201) | (n1682 & n201));
  n20 = (uint16_T)((n26 & n1148) | (n1148 & n264) | (n26 & n264));
  n414 = (uint16_T)((n28 & n1182) | (n1182 & n20) | (n28 & n20));
  n415 = (uint16_T)((n882 & n914) | (n914 & n414) | (n882 & n414));
  n664 = (uint16_T)((n998 & n1214) | (n1214 & n415) | (n998 & n415));
  c = (uint16_T)(n41 | n498);
  n38 = (uint16_T)(((uint16_T)~(uint16_T)((uint16_T)~(uint16_T)(n18 & (n12 & n6))
    | n24) & 1) << 1);
  n34 = (uint16_T)(n39 & 1);
  return (uint16_T)(c | n38 | n34 << 2 | n1632 << 3 | (n6 & n22) << 4 | (n81 & 1)
                    << 5 | n1632 << 6 | (n81 & 1) << 7 | (n1664 ^ n1464) << 8 |
                    (n1682 ^ n1164 ^ n201) << 9 | (n26 ^ n1148 ^ n264) << 10 |
                    (n28 ^ n1182 ^ n20) << 11 | (n882 ^ n914 ^ n414) << 12 |
                    (n998 ^ n1214 ^ n415) << 13 | (n1414 ^ n898 ^ n664) << 14 |
                    ((n1414 & n898) | (n898 & n664) | (n1414 & n664)) << 15);
}

/* End of code generation (mul8_478.c) */
