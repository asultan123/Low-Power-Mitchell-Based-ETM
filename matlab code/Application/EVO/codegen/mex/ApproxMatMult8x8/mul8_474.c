/*
 * mul8_474.c
 *
 * Code generation for function 'mul8_474'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mul8_474.h"

/* Function Definitions */
uint16_T mul8_474(uint8_T a, uint8_T b)
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
  uint16_T n38;
  uint16_T n148;
  uint16_T n264;
  uint16_T n282;
  uint16_T n382;
  uint16_T n398;
  uint16_T n414;
  uint16_T n415;
  uint16_T n498;
  uint16_T n548;
  uint16_T n614;
  uint16_T n632;
  uint16_T n648;
  uint16_T n664;
  uint16_T n682;
  uint16_T n882;
  uint16_T n898;
  uint16_T n1114;
  uint16_T n1232;
  uint16_T n1382;
  uint16_T n1398;
  uint16_T n1498;
  uint16_T n1648;
  uint16_T n1664;
  uint16_T n1682;

  /*  Approximate function mul8_474 */
  /*   Library = EvoApprox8b */
  /*   Circuit = mul8_474 */
  /*   Area   (180) = 7239 */
  /*   Delay  (180) = 4.170 */
  /*   Power  (180) = 3831.90 */
  /*   Area   (45) = 527 */
  /*   Delay  (45) = 1.570 */
  /*   Power  (45) = 332.30 */
  /*   Nodes = 113 */
  /*   HD = 243248 */
  /*   MAE = 81.14831 */
  /*   MSE = 17742.59961 */
  /*   MRE = 2.04 % */
  /*   WCE = 428 */
  /*   WCRE = 540 % */
  /*   EP = 95.2 % */
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
  n33 = (uint16_T)~(uint16_T)(n18 | (n12 | n6));
  n34 = (uint16_T)~(uint16_T)((n6 | n4) & n18);
  n38 = (uint16_T)~(uint16_T)(n33 | n34);
  n148 = (uint16_T)(n14 & n16);
  n264 = (uint16_T)(n12 & n18);
  n282 = (uint16_T)(n14 & n18);
  n382 = (uint16_T)((n12 & n16) | (n10 & n18));
  n398 = (uint16_T)(n148 ^ n264);
  n148 &= n264;
  n414 = (uint16_T)(n148 ^ n282);
  n415 = (uint16_T)(n148 & n282);
  n498 = (uint16_T)(n8 & n20);
  n264 = (uint16_T)(n10 & n20);
  n282 = (uint16_T)(n12 & n20);
  n548 = (uint16_T)(n14 & n20);
  n614 = (uint16_T)(((n10 & n16) ^ (n8 & n18)) | (n2 & n20));
  n632 = (uint16_T)(n382 ^ n498);
  n148 = (uint16_T)(n382 & n498);
  n648 = (uint16_T)(n398 ^ n264 ^ n148);
  n148 = (uint16_T)((n398 & n264) | (n264 & n148) | (n398 & n148));
  n664 = (uint16_T)(n414 ^ n282 ^ n148);
  n148 = (uint16_T)((n414 & n282) | (n282 & n148) | (n414 & n148));
  n682 = (uint16_T)(n415 ^ n548 ^ n148);
  n415 = (uint16_T)((n415 & n548) | (n548 & n148) | (n415 & n148));
  n264 = (uint16_T)(n4 & n22);
  n282 = (uint16_T)(n6 & n22);
  n16 = (uint16_T)(n8 & n22);
  n382 = (uint16_T)(n10 & n498);
  n398 = (uint16_T)(n12 & n22);
  n414 = (uint16_T)(n14 & n22);
  n148 = (uint16_T)((uint16_T)((uint16_T)~(uint16_T)((uint16_T)~(uint16_T)
    ((uint16_T)~(uint16_T)(n12 | n22) | (uint16_T)(n12 | n0)) | n34) | (uint16_T)
    (n4 & n20)) | (uint16_T)(n2 & n22));
  n34 = (uint16_T)(n614 ^ n264 ^ n148);
  n148 = (uint16_T)((n614 & n264) | (n264 & n148) | (n614 & n148));
  n882 = (uint16_T)(n632 ^ n282 ^ n148);
  n148 = (uint16_T)((n632 & n282) | (n282 & n148) | (n632 & n148));
  n898 = (uint16_T)(n648 ^ n16 ^ n148);
  n148 = (uint16_T)((n648 & n16) | (n16 & n148) | (n648 & n148));
  n614 = (uint16_T)(n664 ^ n382 ^ n148);
  n148 = (uint16_T)((n664 & n382) | (n382 & n148) | (n664 & n148));
  n498 = (uint16_T)(n682 ^ n398 ^ n148);
  n148 = (uint16_T)((n682 & n398) | (n398 & n148) | (n682 & n148));
  n548 = (uint16_T)(n415 ^ n414 ^ n148);
  n414 = (uint16_T)((n415 & n414) | (n414 & n148) | (n415 & n148));
  n148 = (uint16_T)(n2 & n24);
  n264 = (uint16_T)(n4 & n24);
  n282 = (uint16_T)(n6 & n24);
  n16 = (uint16_T)(n8 & n24);
  n382 = (uint16_T)(n10 & n24);
  n398 = (uint16_T)(n12 & n24);
  n415 = (uint16_T)(n14 & n24);
  n1114 = (uint16_T)(n34 ^ n148);
  n148 &= n34;
  n34 = (uint16_T)(n882 ^ n264 ^ n148);
  n148 = (uint16_T)((n882 & n264) | (n264 & n148) | (n882 & n148));
  n664 = (uint16_T)(n898 ^ n282 ^ n148);
  n148 = (uint16_T)((n898 & n282) | (n282 & n148) | (n898 & n148));
  n632 = (uint16_T)(n614 ^ n16 ^ n148);
  n148 = (uint16_T)((n614 & n16) | (n16 & n148) | (n614 & n148));
  n682 = (uint16_T)(n498 ^ n382 ^ n148);
  n148 = (uint16_T)((n498 & n382) | (n382 & n148) | (n498 & n148));
  n614 = (uint16_T)(n548 ^ n398 ^ n148);
  n148 = (uint16_T)((n548 & n398) | (n398 & n148) | (n548 & n148));
  n498 = (uint16_T)(n414 ^ n415 ^ n148);
  n548 = (uint16_T)((n414 & n415) | (n415 & n148) | (n414 & n148));
  n1232 = (uint16_T)(n0 & ((uint16_T)~(uint16_T)(n26 | n38) ^ (uint16_T)
    ((uint16_T)~(uint16_T)(n18 & (n33 & n38)) | n18)));
  n264 = (uint16_T)(n2 & n26);
  n282 = (uint16_T)(n4 & n26);
  n16 = (uint16_T)(n6 & n26);
  n382 = (uint16_T)(n8 & n26);
  n398 = (uint16_T)(n10 & n26);
  n414 = (uint16_T)(n12 & n26);
  n415 = (uint16_T)(n14 & n26);
  n148 = (uint16_T)(n1114 & n1232);
  n1382 = (uint16_T)(n34 ^ n264 ^ n148);
  n148 = (uint16_T)((n34 & n264) | (n264 & n148) | (n34 & n148));
  n1398 = (uint16_T)(n664 ^ n282 ^ n148);
  n148 = (uint16_T)((n664 & n282) | (n282 & n148) | (n664 & n148));
  n664 = (uint16_T)(n632 ^ n16 ^ n148);
  n148 = (uint16_T)((n632 & n16) | (n16 & n148) | (n632 & n148));
  n632 = (uint16_T)(n682 ^ n382 ^ n148);
  n148 = (uint16_T)((n682 & n382) | (n382 & n148) | (n682 & n148));
  n682 = (uint16_T)(n614 ^ n398 ^ n148);
  n148 = (uint16_T)((n614 & n398) | (n398 & n148) | (n614 & n148));
  n614 = (uint16_T)(n498 ^ n414 ^ n148);
  n148 = (uint16_T)((n498 & n414) | (n414 & n148) | (n498 & n148));
  n498 = (uint16_T)(n548 ^ n415 ^ n148);
  n548 = (uint16_T)((n548 & n415) | (n415 & n148) | (n548 & n148));
  n1498 = (uint16_T)(n0 & n28);
  n264 = (uint16_T)(n2 & n28);
  n282 = (uint16_T)(n4 & n28);
  n16 = (uint16_T)(n6 & n28);
  n382 = (uint16_T)(n8 & n28);
  n398 = (uint16_T)(n10 & n28);
  n414 = (uint16_T)(n12 & n28);
  n415 = (uint16_T)(n14 & n28);
  n148 = (uint16_T)(n1382 & n1498);
  n1648 = (uint16_T)(n1398 ^ n264 ^ n148);
  n148 = (uint16_T)((n1398 & n264) | (n264 & n148) | (n1398 & n148));
  n1664 = (uint16_T)(n664 ^ n282 ^ n148);
  n148 = (uint16_T)((n664 & n282) | (n282 & n148) | (n664 & n148));
  n1682 = (uint16_T)(n632 ^ n16 ^ n148);
  n148 = (uint16_T)((n632 & n16) | (n16 & n148) | (n632 & n148));
  n28 = (uint16_T)(n682 ^ n382 ^ n148);
  n148 = (uint16_T)((n682 & n382) | (n382 & n148) | (n682 & n148));
  n26 = (uint16_T)(n614 ^ n398 ^ n148);
  n148 = (uint16_T)((n614 & n398) | (n398 & n148) | (n614 & n148));
  n38 = (uint16_T)(n498 ^ n414 ^ n148);
  n148 = (uint16_T)((n498 & n414) | (n414 & n148) | (n498 & n148));
  n33 = (uint16_T)(n548 ^ n415 ^ n148);
  n882 = (uint16_T)((n548 & n415) | (n415 & n148) | (n548 & n148));
  n648 = (uint16_T)(n0 & n30);
  n898 = (uint16_T)(n2 & n30);
  n682 = (uint16_T)(n4 & n30);
  n632 = (uint16_T)(n6 & n30);
  n664 = (uint16_T)(n8 & n30);
  n34 = (uint16_T)(n10 & n30);
  n614 = (uint16_T)(n12 & n30);
  n282 = (uint16_T)(n14 & n30);
  n16 = (uint16_T)(n1648 & n648);
  n382 = (uint16_T)((n1664 & n898) | (n898 & n16) | (n1664 & n16));
  n398 = (uint16_T)((n1682 & n682) | (n682 & n382) | (n1682 & n382));
  n414 = (uint16_T)((n28 & n632) | (n632 & n398) | (n28 & n398));
  n415 = (uint16_T)((n26 & n664) | (n664 & n414) | (n26 & n414));
  n548 = (uint16_T)((n38 & n34) | (n34 & n415) | (n38 & n415));
  n498 = (uint16_T)((n33 & n614) | (n614 & n548) | (n33 & n548));
  c = (uint16_T)(n8 & n24);
  n264 = (uint16_T)(n1398 << 1);
  n148 = (uint16_T)(n2 & n20);
  return (uint16_T)(c | n264 | n148 << 2 | (n10 & n18) << 3 | (n6 & n22) << 4 |
                    ((uint16_T)(n1114 ^ n1232) & 1) << 5 | (n1382 ^ n1498) << 6 |
                    (n1648 ^ n648) << 7 | (n1664 ^ n898 ^ n16) << 8 | (n1682 ^
    n682 ^ n382) << 9 | (n28 ^ n632 ^ n398) << 10 | (n26 ^ n664 ^ n414) << 11 |
                    (n38 ^ n34 ^ n415) << 12 | (n33 ^ n614 ^ n548) << 13 | (n882
    ^ n282 ^ n498) << 14 | ((n882 & n282) | (n282 & n498) | (n882 & n498)) << 15);
}

/* End of code generation (mul8_474.c) */
