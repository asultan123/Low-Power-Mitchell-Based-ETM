/*
 * mul8_429.c
 *
 * Code generation for function 'mul8_429'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mul8_429.h"

/* Function Definitions */
uint16_T mul8_429(uint8_T a, uint8_T b)
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
  uint16_T n42;
  uint16_T n53;
  uint16_T n120;
  uint16_T n121;
  uint16_T n157;
  uint16_T n175;
  uint16_T n420;
  uint16_T n491;
  uint16_T n580;
  uint16_T n595;
  uint16_T n608;
  uint16_T n698;
  uint16_T n712;
  uint16_T n728;
  uint16_T n802;
  uint16_T n816;
  uint16_T n817;
  uint16_T n832;
  uint16_T n846;
  uint16_T n891;
  uint16_T n920;
  uint16_T n921;
  uint16_T n934;
  uint16_T n950;
  uint16_T n1335;
  uint16_T n1350;

  /*  Approximate function mul8_429 */
  /*   Library = EvoApprox8b */
  /*   Circuit = mul8_429 */
  /*   Area   (180) = 4919 */
  /*   Delay  (180) = 2.330 */
  /*   Power  (180) = 1731.40 */
  /*   Area   (45) = 367 */
  /*   Delay  (45) = 0.880 */
  /*   Power  (45) = 146.30 */
  /*   Nodes = 100 */
  /*   HD = 371398 */
  /*   MAE = 617.15933 */
  /*   MSE = 726404.50781 */
  /*   MRE = 9.10 % */
  /*   WCE = 3042 */
  /*   WCRE = 500 % */
  /*   EP = 99.1 % */
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
  n42 = (uint16_T)~(uint16_T)(n18 & (n0 & (uint16_T)~(uint16_T)(n10 | n6)));
  n53 = (uint16_T)~(uint16_T)((n12 | ((n0 & 65535) | (n0 & n2) | (n2 & 65535)))
    & n30);
  n16 = (uint16_T)~(uint16_T)(n30 | n24 | (n28 | ((n14 & n16) | (n16 & n26) |
    (n14 & n26))));
  n0 = (uint16_T)(n16 & n20);
  n120 = (uint16_T)(n12 & n0);
  n121 = (uint16_T)(n12 & n0);
  n157 = (uint16_T)~(uint16_T)((n53 & (uint16_T)~(uint16_T)(n6 | (n4 | n14))) |
    n16);
  n175 = (uint16_T)~(uint16_T)~(uint16_T)(n6 | (n4 | n14));
  n420 = (uint16_T)(n26 & (n6 | n8));
  n16 = (uint16_T)(n12 & n22);
  n491 = (uint16_T)(n14 & n22);
  n580 = (uint16_T)(n10 & n24);
  n595 = (uint16_T)(n12 & n24);
  n608 = (uint16_T)(n14 & n24);
  n698 = (uint16_T)(n10 & n26);
  n712 = (uint16_T)(n12 & n26);
  n728 = (uint16_T)(n14 & n26);
  n802 = (uint16_T)(n8 & n28);
  n816 = (uint16_T)(n10 & n28);
  n817 = (uint16_T)(n10 & n28);
  n832 = (uint16_T)(n12 & n28);
  n846 = (uint16_T)(n14 & n28);
  n891 = (uint16_T)(n4 & n30);
  n6 &= n30;
  n920 = (uint16_T)(n8 & n30);
  n921 = (uint16_T)(n8 & n30);
  n934 = (uint16_T)(n10 & n30);
  n950 = (uint16_T)(n12 & n30);
  n0 = (uint16_T)((n10 & (n22 | n20)) | (n8 & n24));
  n26 = (uint16_T)(n16 ^ n580);
  n4 = (uint16_T)(n16 & n580);
  n24 = (uint16_T)(n491 ^ n595 ^ n698);
  n16 = (uint16_T)((n491 & n595) | (n595 & n698) | (n491 & n698));
  n20 = (uint16_T)(n608 & n712);
  n22 = (uint16_T)(n608 ^ n712);
  n491 = (uint16_T)(n157 | n120);
  n1335 = (uint16_T)((n817 & 65535) | (n0 & 65535) | (n817 & n0));
  n1350 = (uint16_T)(n891 ^ n420 ^ n26);
  n420 = (uint16_T)((n891 & n420) | (n420 & n26) | (n891 & n26));
  n26 = (uint16_T)(n4 ^ n802 ^ n6);
  n8 = (uint16_T)((n4 & n802) | (n802 & n6) | (n4 & n6));
  n0 = (uint16_T)(n16 ^ n816 ^ n920);
  n4 = (uint16_T)((n16 & n816) | (n816 & n920) | (n16 & n920));
  n16 = (uint16_T)(n20 ^ n832 ^ n934);
  n6 = (uint16_T)((n20 & n832) | (n832 & n934) | (n20 & n934));
  n580 = (uint16_T)(n846 ^ n950);
  n817 = (uint16_T)(n1350 & n1335);
  n891 = (uint16_T)(n24 ^ n20 ^ n26);
  n712 = (uint16_T)((n24 & n20) | (n20 & n26) | (n24 & n26));
  n26 = (uint16_T)(n22 & n0);
  n0 |= n22;
  n22 = (uint16_T)(n728 & n16);
  n16 ^= n728;
  c = (uint16_T)(n921 | (n10 | (n42 | n12)));
  n595 = (uint16_T)((uint16_T)(n491 & 65535) | (uint16_T)((uint16_T)~n491 & n8));
  n698 = (uint16_T)((n891 & n817) | (n817 & n420) | (n891 & n420));
  n608 = (uint16_T)(n0 ^ n712 ^ n8);
  n24 = (uint16_T)((n0 & n712) | (n712 & n8) | (n0 & n8));
  n491 = (uint16_T)(n16 ^ n26 ^ n4);
  n8 = (uint16_T)((n16 & n26) | (n26 & n4) | (n16 & n4));
  n20 = (uint16_T)(n580 ^ n22 ^ n6);
  n580 = (uint16_T)((n580 & n22) | (n22 & n6) | (n580 & n6));
  n16 = (uint16_T)((n14 & n30) ^ (n846 & n950));
  n26 = (uint16_T)(n608 & n698);
  n4 = (uint16_T)((n491 & n24) | (n24 & n26) | (n491 & n26));
  n6 = (uint16_T)((n20 & n8) | (n8 & n4) | (n20 & n4));
  n22 = (uint16_T)((n157 & 1) << 1);
  n0 = (uint16_T)((uint16_T)~(uint16_T)(n120 ^ (n42 | n12)) & 1);
  return (uint16_T)(n121 | n22 | n0 << 2 | ((uint16_T)~c & 1) << 3 | ((uint16_T)
    (n921 ^ n121) & 1) << 4 | (n595 & 1) << 5 | (n157 & 1) << 6 | (n595 & 1) <<
                    7 | ((uint16_T)((uint16_T)(n712 | (uint16_T)~(uint16_T)
    ~(uint16_T)((n18 & n14) | (n18 & n12))) | (uint16_T)(((uint16_T)(n175 &
    65535) | (uint16_T)((uint16_T)~n175 & n2)) & n28)) & 1) << 8 | (n1350 ^
    n1335) << 9 | (n891 ^ n817 ^ n420) << 10 | (n608 ^ n698) << 11 | (n491 ^ n24
    ^ n26) << 12 | (n20 ^ n8 ^ n4) << 13 | (n16 ^ n580 ^ n6) << 14 | ((uint16_T)
    ((uint16_T)((uint16_T)~(uint16_T)~(uint16_T)(n12 & (n28 & n14)) & (uint16_T)
                ~n53 & 65535) | (uint16_T)((n16 & n580) | (n580 & n6) | (n16 &
    n6))) & 1) << 15);
}

/* End of code generation (mul8_429.c) */
