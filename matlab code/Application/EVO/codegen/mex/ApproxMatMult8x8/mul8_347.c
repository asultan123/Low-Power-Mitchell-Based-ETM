/*
 * mul8_347.c
 *
 * Code generation for function 'mul8_347'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mul8_347.h"

/* Function Definitions */
uint16_T mul8_347(uint8_T a, uint8_T b)
{
  uint16_T c;
  uint16_T b_a;
  uint16_T n2;
  uint16_T n4;
  uint16_T n6;
  uint16_T n8;
  uint16_T n10;
  uint16_T n12;
  uint16_T n14;
  uint16_T n20;
  uint16_T n22;
  uint16_T n24;
  uint16_T n26;
  uint16_T n28;
  uint16_T n30;
  uint16_T n71;
  uint16_T n157;
  uint16_T n372;
  uint16_T n420;
  uint16_T n41;
  uint16_T n594;
  uint16_T n608;
  uint16_T n683;
  uint16_T n699;
  uint16_T n712;
  uint16_T n728;
  uint16_T n802;
  uint16_T n816;
  uint16_T n832;
  uint16_T n847;
  uint16_T n890;
  uint16_T n920;
  uint16_T n934;
  uint16_T n950;
  uint16_T n1202;
  uint16_T n1216;
  uint16_T n1350;
  uint16_T n1351;

  /*  Approximate function mul8_347 */
  /*   Library = EvoApprox8b */
  /*   Circuit = mul8_347 */
  /*   Area   (180) = 4044 */
  /*   Delay  (180) = 2.170 */
  /*   Power  (180) = 1493.80 */
  /*   Area   (45) = 291 */
  /*   Delay  (45) = 0.830 */
  /*   Power  (45) = 127.00 */
  /*   Nodes = 78 */
  /*   HD = 376002 */
  /*   MAE = 624.46875 */
  /*   MSE = 679898.57422 */
  /*   MRE = 10.00 % */
  /*   WCE = 2911 */
  /*   WCRE = 700 % */
  /*   EP = 99.0 % */
  b_a = a;
  n2 = (uint16_T)((int32_T)((uint32_T)a >> 1) & 1);
  n4 = (uint16_T)((int32_T)((uint32_T)a >> 2) & 1);
  n6 = (uint16_T)((int32_T)((uint32_T)a >> 3) & 1);
  n8 = (uint16_T)((int32_T)((uint32_T)a >> 4) & 1);
  n10 = (uint16_T)((int32_T)((uint32_T)a >> 5) & 1);
  n12 = (uint16_T)((int32_T)((uint32_T)a >> 6) & 1);
  n14 = (uint16_T)((uint32_T)a >> 7);
  n20 = (uint16_T)((int32_T)((uint32_T)b >> 2) & 1);
  n22 = (uint16_T)((int32_T)((uint32_T)b >> 3) & 1);
  n24 = (uint16_T)((int32_T)((uint32_T)b >> 4) & 1);
  n26 = (uint16_T)((int32_T)((uint32_T)b >> 5) & 1);
  n28 = (uint16_T)((int32_T)((uint32_T)b >> 6) & 1);
  n30 = (uint16_T)((uint32_T)b >> 7);
  n71 = (uint16_T)(n14 | n8);
  n157 = (uint16_T)~(uint16_T)((uint16_T)((uint16_T)~(uint16_T)(n2 & (n28 &
    (uint16_T)~(uint16_T)(n6 | (n4 | n71)))) & (uint16_T)~(uint16_T)(n6 | (n4 |
    n71))) | (uint16_T)~(uint16_T)(n26 | n24 | (n28 | n22)));
  n372 = (uint16_T)(n14 & n20);
  n420 = (uint16_T)(n26 & (n6 & n4));
  n71 = (uint16_T)(n12 & n22);
  n41 = (uint16_T)(n14 & n22);
  n2 = (uint16_T)(n10 & n24);
  n594 = (uint16_T)(n12 & n24);
  n608 = (uint16_T)(n14 & n24);
  n683 = (uint16_T)(n8 & n26);
  n699 = (uint16_T)(n10 & n26);
  n712 = (uint16_T)(n12 & n26);
  n728 = (uint16_T)(n14 & n26);
  n802 = (uint16_T)(n8 & n28);
  n816 = (uint16_T)(n10 & n28);
  n832 = (uint16_T)(n12 & n28);
  n847 = (uint16_T)(n14 & n28);
  n890 = (uint16_T)(n4 & n30);
  n4 = (uint16_T)(n6 & n30);
  n920 = (uint16_T)(n8 & n30);
  n934 = (uint16_T)(n10 & n30);
  n950 = (uint16_T)(n12 & n30);
  n26 = (uint16_T)(n71 ^ n2);
  n71 &= n2;
  n1202 = (uint16_T)(n41 ^ n594 ^ n699);
  n2 = (uint16_T)((n41 & n594) | (n594 & n699) | (n41 & n699));
  n1216 = (uint16_T)(n608 & n712);
  n699 = (uint16_T)(n608 ^ n712);
  n1350 = (uint16_T)(n372 ^ n420 ^ n26);
  n1351 = (uint16_T)((n372 & n420) | (n420 & n26) | (n372 & n26));
  n24 = (uint16_T)((n10 & n22) | (n8 & n24) | (n6 & n28));
  n41 = (uint16_T)(n71 ^ n802 ^ n4);
  n22 = (uint16_T)((n71 & n802) | (n802 & n4) | (n71 & n4));
  n71 = (uint16_T)(n2 ^ n816 ^ n920);
  n4 = (uint16_T)((n2 & n816) | (n816 & n920) | (n2 & n920));
  n2 = (uint16_T)(n1216 ^ n832 ^ n934);
  n594 = (uint16_T)((n1216 & n832) | (n832 & n934) | (n1216 & n934));
  n372 = (uint16_T)(n847 ^ n950);
  n8 = (uint16_T)(n1350 & n24);
  n10 = (uint16_T)(n1202 ^ n1216 ^ n41);
  n41 = (uint16_T)((n1202 & n1216) | (n1216 & n41) | (n1202 & n41));
  n26 = (uint16_T)(n699 & n71);
  n71 |= n699;
  n699 = (uint16_T)(n728 & n2);
  n2 ^= n728;
  n920 = (uint16_T)((n10 & n8) | (n8 & n1351) | (n10 & n1351));
  n6 = (uint16_T)(n71 ^ n41 ^ n22);
  n420 = (uint16_T)((n71 & n41) | (n41 & n22) | (n71 & n22));
  n802 = (uint16_T)(n2 ^ n26 ^ n4);
  n608 = (uint16_T)((n2 & n26) | (n26 & n4) | (n2 & n4));
  n712 = (uint16_T)(n372 ^ n699 ^ n594);
  n594 = (uint16_T)((n372 & n699) | (n699 & n594) | (n372 & n594));
  n71 = (uint16_T)((n14 & n30) ^ (n847 & n950));
  n2 = (uint16_T)(n6 & n920);
  n41 = (uint16_T)((n802 & n420) | (n420 & n2) | (n802 & n2));
  n26 = (uint16_T)((n712 & n608) | (n608 & n41) | (n712 & n41));
  c = 0;
  n4 = (uint16_T)((n157 & 1) << 1);
  return (uint16_T)(c | n4 | n1216 << 3 | (b_a & 1 & n20) << 5 | (n157 & 1) << 6
                    | ((uint16_T)(n22 ^ n157) & 1) << 7 | (((int32_T)((uint32_T)
    b >> 1) & 1 & n12) | n890) << 8 | ((uint16_T)((uint16_T)(n683 & 65535) |
    (uint16_T)((uint16_T)~n683 & (uint16_T)((n1350 ^ n24) | n890))) & 1) << 9 |
                    (n10 ^ n8 ^ n1351) << 10 | (n6 ^ n920) << 11 | (n802 ^ n420 ^
    n2) << 12 | (n712 ^ n608 ^ n41) << 13 | (n71 ^ n594 ^ n26) << 14 | ((n14 &
    n28 & n950 & 65535) | ((n71 & n594) | (n594 & n26) | (n71 & n26))) << 15);
}

/* End of code generation (mul8_347.c) */
