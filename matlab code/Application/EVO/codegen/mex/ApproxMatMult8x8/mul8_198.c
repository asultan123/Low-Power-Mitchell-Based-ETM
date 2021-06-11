/*
 * mul8_198.c
 *
 * Code generation for function 'mul8_198'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mul8_198.h"

/* Function Definitions */
uint16_T mul8_198(uint8_T a, uint8_T b)
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
  uint16_T n51;
  uint16_T n53;
  uint16_T n57;
  uint16_T n73;
  uint16_T n82;
  uint16_T n91;
  uint16_T b_c;
  uint16_T n157;
  uint16_T n167;
  uint16_T n420;
  uint16_T n476;
  uint16_T n491;
  uint16_T c_c;
  uint16_T n728;
  uint16_T n802;
  uint16_T n816;
  uint16_T n817;
  uint16_T n832;
  uint16_T n846;
  uint16_T n891;
  uint16_T n906;
  uint16_T n920;
  uint16_T n921;
  uint16_T n934;
  uint16_T n950;
  uint16_T n1069;
  uint16_T n1334;
  uint16_T n1335;
  uint16_T n1350;

  /*  Approximate function mul8_198 */
  /*   Library = EvoApprox8b */
  /*   Circuit = mul8_198 */
  /*   Area   (180) = 5365 */
  /*   Delay  (180) = 2.330 */
  /*   Power  (180) = 1928.60 */
  /*   Area   (45) = 403 */
  /*   Delay  (45) = 0.880 */
  /*   Power  (45) = 162.70 */
  /*   Nodes = 112 */
  /*   HD = 385676 */
  /*   MAE = 575.77652 */
  /*   MSE = 635894.14844 */
  /*   MRE = 8.07 % */
  /*   WCE = 2882 */
  /*   WCRE = 312 % */
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
  n46 = (uint16_T)(n26 & n8);
  n51 = (uint16_T)((n0 & 65535) | (n0 & n2) | (n2 & 65535));
  n53 = (uint16_T)~(uint16_T)((n12 | n51) & n30);
  n57 = (uint16_T)(n2 | MAX_uint16_T);
  n73 = (uint16_T)(n57 & n46);
  n82 = (uint16_T)~(uint16_T)(n6 | (n4 | n14));
  n91 = (uint16_T)~(uint16_T)(n30 | n24 | (n28 | ((n14 & n16) | (n16 & n26) |
    (n14 & n26))));
  n0 = (uint16_T)(n20 & 65535);
  c = (uint16_T)((n46 & n0) | (n0 & n51));
  b_c = (uint16_T)(n46 & n51);
  n157 = (uint16_T)~(uint16_T)((n53 & n82) | n91);
  n167 = (uint16_T)~(uint16_T)(n82 & 65535);
  n46 = (uint16_T)(n22 | n20);
  n420 = (uint16_T)(n26 & (n6 | n8));
  n476 = (uint16_T)(n12 & n22);
  n491 = (uint16_T)(n14 & n22);
  c_c = (uint16_T)(n167 & (n16 & n91));
  n0 = (uint16_T)(n10 & n24);
  n82 = (uint16_T)(n12 & n24);
  n91 = (uint16_T)(n14 & n24);
  n22 = (uint16_T)(n10 & n26);
  n16 = (uint16_T)(n12 & n26);
  n728 = (uint16_T)(n14 & n26);
  n802 = (uint16_T)(n8 & n28);
  n816 = (uint16_T)(n10 & n28);
  n817 = (uint16_T)(n10 & n28);
  n832 = (uint16_T)(n12 & n28);
  n846 = (uint16_T)(n14 & n28);
  n891 = (uint16_T)(n4 & n30);
  n906 = (uint16_T)(n6 & n30);
  n920 = (uint16_T)(n8 & n30);
  n921 = (uint16_T)(n8 & n30);
  n934 = (uint16_T)(n10 & n30);
  n950 = (uint16_T)(n12 & n30);
  n1069 = (uint16_T)(n8 & n46 & 65535);
  n46 = (uint16_T)((n10 & n46) | (n8 & n24));
  n26 = (uint16_T)(n476 ^ n0);
  n0 &= n476;
  n10 = (uint16_T)(n491 ^ n82 ^ n22);
  n22 = (uint16_T)((n491 & n82) | (n82 & n22) | (n491 & n22));
  n476 = (uint16_T)(n91 & n16);
  n491 = (uint16_T)(n91 ^ n16);
  n8 = (uint16_T)(n157 | (uint16_T)(n12 & (n20 & 65535)));
  n1334 = (uint16_T)(n817 ^ n1069 ^ n46);
  n1335 = (uint16_T)((n817 & n1069) | (n1069 & n46) | (n817 & n46));
  n1350 = (uint16_T)(n891 ^ n420 ^ n26);
  n20 = (uint16_T)((n891 & n420) | (n420 & n26) | (n891 & n26));
  n82 = (uint16_T)(n0 ^ n802 ^ n906);
  n26 = (uint16_T)((n0 & n802) | (n802 & n906) | (n0 & n906));
  n0 = (uint16_T)(n22 ^ n816 ^ n920);
  n91 = (uint16_T)((n22 & n816) | (n816 & n920) | (n22 & n920));
  n46 = (uint16_T)(n476 ^ n832 ^ n934);
  n16 = (uint16_T)((n476 & n832) | (n832 & n934) | (n476 & n934));
  n1069 = (uint16_T)(n846 ^ n950);
  n802 = (uint16_T)(n1350 & n1335);
  n906 = (uint16_T)(n10 ^ n476 ^ n82);
  n891 = (uint16_T)((n10 & n476) | (n476 & n82) | (n10 & n82));
  n82 = (uint16_T)(n491 & n0);
  n0 |= n491;
  n22 = (uint16_T)(n728 & n46);
  n46 ^= n728;
  n10 = (uint16_T)((uint16_T)(n8 & (uint16_T)~(uint16_T)((uint16_T)~(uint16_T)
    ((n57 | n12) & n51) & n30)) | (uint16_T)((uint16_T)~n8 & n26));
  n24 = (uint16_T)((n906 & n802) | (n802 & n20) | (n906 & n20));
  n817 = (uint16_T)(n0 ^ n891 ^ n26);
  n491 = (uint16_T)((n0 & n891) | (n891 & n26) | (n0 & n26));
  n8 = (uint16_T)(n46 ^ n82 ^ n91);
  n26 = (uint16_T)((n46 & n82) | (n82 & n91) | (n46 & n91));
  n476 = (uint16_T)(n1069 ^ n22 ^ n16);
  n16 = (uint16_T)((n1069 & n22) | (n22 & n16) | (n1069 & n16));
  n0 = (uint16_T)((n14 & n30) ^ (n846 & n950));
  n46 = (uint16_T)(n817 & n24);
  n82 = (uint16_T)((n8 & n491) | (n491 & n46) | (n8 & n46));
  n22 = (uint16_T)((n476 & n26) | (n26 & n82) | (n476 & n82));
  n91 = (uint16_T)((n157 & 1) << 1);
  return (uint16_T)(n73 | n91 | n891 << 2 | (n921 | n1334) << 3 | ((uint16_T)
    ((uint16_T)(n921 ^ (uint16_T)~(uint16_T)(n73 ^ (uint16_T)~c_c)) | (uint16_T)
     ~(uint16_T)~(uint16_T)(c | b_c | (n18 & n4))) & 1) << 4 | (n10 & 1) << 5 |
                    (n157 & 1) << 6 | (n10 & 1) << 7 | ((uint16_T)((uint16_T)
    (n1334 | (uint16_T)~(uint16_T)~(uint16_T)((n18 & n14) | (n18 & n12))) |
    (uint16_T)(((uint16_T)(n167 & 65535) | (uint16_T)((uint16_T)~n167 & n2)) &
               n28)) & 1) << 8 | ((uint16_T)((uint16_T)(n1350 ^ n1335) |
    (uint16_T)~(uint16_T)~(uint16_T)(n6 & n28)) & 1) << 9 | (n906 ^ n802 ^ n20) <<
                    10 | (n817 ^ n24) << 11 | (n8 ^ n491 ^ n46) << 12 | (n476 ^
    n26 ^ n82) << 13 | (n0 ^ n16 ^ n22) << 14 | ((uint16_T)((uint16_T)((uint16_T)
    ~(uint16_T)~(uint16_T)(n12 & (n28 & n14)) & (uint16_T)~n53 & 65535) |
    (uint16_T)((n0 & n16) | (n16 & n22) | (n0 & n22))) & 1) << 15);
}

/* End of code generation (mul8_198.c) */
