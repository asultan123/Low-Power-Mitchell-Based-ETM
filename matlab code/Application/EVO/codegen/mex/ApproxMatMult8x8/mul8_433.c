/*
 * mul8_433.c
 *
 * Code generation for function 'mul8_433'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mul8_433.h"

/* Function Definitions */
uint16_T mul8_433(uint8_T a, uint8_T b)
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
  uint16_T n48;
  uint16_T n64;
  uint16_T n82;
  uint16_T n98;
  uint16_T n114;
  uint16_T n132;
  uint16_T n148;
  uint16_T n164;
  uint16_T n182;
  uint16_T n198;
  uint16_T n214;
  uint16_T n232;
  uint16_T n248;
  uint16_T n264;
  uint16_T n282;
  uint16_T n299;
  uint16_T n314;
  uint16_T n315;
  uint16_T n332;
  uint16_T n333;
  uint16_T n348;
  uint16_T n414;
  uint16_T n532;
  uint16_T n549;
  uint16_T n564;
  uint16_T n565;
  uint16_T n582;
  uint16_T n598;
  uint16_T n799;
  uint16_T n814;
  uint16_T n914;
  uint16_T n1049;
  uint16_T n1064;
  uint16_T n1164;
  uint16_T n1299;
  uint16_T n1314;
  uint16_T n1414;

  /*  Approximate function mul8_433 */
  /*   Library = EvoApprox8b */
  /*   Circuit = mul8_433 */
  /*   Area   (180) = 8448 */
  /*   Delay  (180) = 3.720 */
  /*   Power  (180) = 4454.10 */
  /*   Area   (45) = 616 */
  /*   Delay  (45) = 1.400 */
  /*   Power  (45) = 390.20 */
  /*   Nodes = 120 */
  /*   HD = 0 */
  /*   MAE = 0.00000 */
  /*   MSE = 0.00000 */
  /*   MRE = 0.00 % */
  /*   WCE = 0 */
  /*   WCRE = 0 % */
  /*   EP = 0.0 % */
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
  n48 = (uint16_T)(n2 & n16);
  n64 = (uint16_T)(n4 & n16);
  n82 = (uint16_T)(n6 & n16);
  n98 = (uint16_T)(n8 & n16);
  n114 = (uint16_T)(n10 & n16);
  n132 = (uint16_T)(n12 & n16);
  n148 = (uint16_T)(n14 & n16);
  n164 = (uint16_T)(n0 & n18);
  n182 = (uint16_T)(n2 & n18);
  n198 = (uint16_T)(n4 & n18);
  n214 = (uint16_T)(n6 & n18);
  n232 = (uint16_T)(n8 & n18);
  n248 = (uint16_T)(n10 & n18);
  n264 = (uint16_T)(n12 & n18);
  n282 = (uint16_T)(n14 & n18);
  n299 = (uint16_T)(n48 & n164);
  n314 = (uint16_T)(n64 ^ n182);
  n315 = (uint16_T)(n64 & n182);
  n332 = (uint16_T)(n82 ^ n198);
  n333 = (uint16_T)(n82 & n198);
  n348 = (uint16_T)(n98 ^ n214);
  n98 &= n214;
  n214 = (uint16_T)(n114 ^ n232);
  n114 &= n232;
  n232 = (uint16_T)(n132 ^ n248);
  n132 &= n248;
  n248 = (uint16_T)(n148 ^ n264);
  n148 &= n264;
  n414 = (uint16_T)(n0 & n20);
  n18 = (uint16_T)(n2 & n20);
  n64 = (uint16_T)(n4 & n20);
  n182 = (uint16_T)(n6 & n20);
  n82 = (uint16_T)(n8 & n20);
  n198 = (uint16_T)(n10 & n20);
  n264 = (uint16_T)(n12 & n20);
  n532 = (uint16_T)(n14 & n20);
  n549 = (uint16_T)((n314 & n414) | (n414 & n299) | (n314 & n299));
  n564 = (uint16_T)(n332 ^ n18 ^ n315);
  n565 = (uint16_T)((n332 & n18) | (n18 & n315) | (n332 & n315));
  n582 = (uint16_T)(n348 ^ n64 ^ n333);
  n348 = (uint16_T)((n348 & n64) | (n64 & n333) | (n348 & n333));
  n598 = (uint16_T)(n214 ^ n182 ^ n98);
  n332 = (uint16_T)((n214 & n182) | (n182 & n98) | (n214 & n98));
  n333 = (uint16_T)(n232 ^ n82 ^ n114);
  n20 = (uint16_T)((n232 & n82) | (n82 & n114) | (n232 & n114));
  n315 = (uint16_T)(n248 ^ n198 ^ n132);
  n232 = (uint16_T)((n248 & n198) | (n198 & n132) | (n248 & n132));
  n132 = (uint16_T)(n282 ^ n264 ^ n148);
  n214 = (uint16_T)((n282 & n264) | (n264 & n148) | (n282 & n148));
  n18 = (uint16_T)(n0 & n22);
  n64 = (uint16_T)(n2 & n22);
  n182 = (uint16_T)(n4 & n22);
  n82 = (uint16_T)(n6 & n22);
  n198 = (uint16_T)(n8 & n22);
  n98 = (uint16_T)(n10 & n22);
  n114 = (uint16_T)(n12 & n22);
  n282 = (uint16_T)(n14 & n22);
  c = (uint16_T)(n564 ^ n18);
  n799 = (uint16_T)((n564 & n18) | (n18 & n549) | (n564 & n549));
  n814 = (uint16_T)(n582 ^ n64 ^ n565);
  n565 = (uint16_T)((n582 & n64) | (n64 & n565) | (n582 & n565));
  n582 = (uint16_T)(n598 ^ n182 ^ n348);
  n348 = (uint16_T)((n598 & n182) | (n182 & n348) | (n598 & n348));
  n598 = (uint16_T)(n333 ^ n82 ^ n332);
  n264 = (uint16_T)((n333 & n82) | (n82 & n332) | (n333 & n332));
  n332 = (uint16_T)(n315 ^ n198 ^ n20);
  n248 = (uint16_T)((n315 & n198) | (n198 & n20) | (n315 & n20));
  n148 = (uint16_T)(n132 ^ n98 ^ n232);
  n232 = (uint16_T)((n132 & n98) | (n98 & n232) | (n132 & n232));
  n132 = (uint16_T)(n532 ^ n114 ^ n214);
  n98 = (uint16_T)((n532 & n114) | (n114 & n214) | (n532 & n214));
  n914 = (uint16_T)(n0 & n24);
  n18 = (uint16_T)(n2 & n24);
  n64 = (uint16_T)(n4 & n24);
  n182 = (uint16_T)(n6 & n24);
  n82 = (uint16_T)(n8 & n24);
  n198 = (uint16_T)(n10 & n24);
  n214 = (uint16_T)(n12 & n24);
  n564 = (uint16_T)(n14 & n24);
  n1049 = (uint16_T)((n814 & n914) | (n914 & n799) | (n814 & n799));
  n1064 = (uint16_T)(n582 ^ n18 ^ n565);
  n565 = (uint16_T)((n582 & n18) | (n18 & n565) | (n582 & n565));
  n582 = (uint16_T)(n598 ^ n64 ^ n348);
  n315 = (uint16_T)((n598 & n64) | (n64 & n348) | (n598 & n348));
  n333 = (uint16_T)(n332 ^ n182 ^ n264);
  n264 = (uint16_T)((n332 & n182) | (n182 & n264) | (n332 & n264));
  n20 = (uint16_T)(n148 ^ n82 ^ n248);
  n248 = (uint16_T)((n148 & n82) | (n82 & n248) | (n148 & n248));
  n148 = (uint16_T)(n132 ^ n198 ^ n232);
  n114 = (uint16_T)((n132 & n198) | (n198 & n232) | (n132 & n232));
  n232 = (uint16_T)(n282 ^ n214 ^ n98);
  n98 = (uint16_T)((n282 & n214) | (n214 & n98) | (n282 & n98));
  n1164 = (uint16_T)(n0 & n26);
  n18 = (uint16_T)(n2 & n26);
  n64 = (uint16_T)(n4 & n26);
  n182 = (uint16_T)(n6 & n26);
  n82 = (uint16_T)(n8 & n26);
  n198 = (uint16_T)(n10 & n26);
  n214 = (uint16_T)(n12 & n26);
  n282 = (uint16_T)(n14 & n26);
  n1299 = (uint16_T)((n1064 & n1164) | (n1164 & n1049) | (n1064 & n1049));
  n1314 = (uint16_T)(n582 ^ n18 ^ n565);
  n348 = (uint16_T)((n582 & n18) | (n18 & n565) | (n582 & n565));
  n598 = (uint16_T)(n333 ^ n64 ^ n315);
  n315 = (uint16_T)((n333 & n64) | (n64 & n315) | (n333 & n315));
  n332 = (uint16_T)(n20 ^ n182 ^ n264);
  n264 = (uint16_T)((n20 & n182) | (n182 & n264) | (n20 & n264));
  n20 = (uint16_T)(n148 ^ n82 ^ n248);
  n132 = (uint16_T)((n148 & n82) | (n82 & n248) | (n148 & n248));
  n248 = (uint16_T)(n232 ^ n198 ^ n114);
  n114 = (uint16_T)((n232 & n198) | (n198 & n114) | (n232 & n114));
  n232 = (uint16_T)(n564 ^ n214 ^ n98);
  n98 = (uint16_T)((n564 & n214) | (n214 & n98) | (n564 & n98));
  n1414 = (uint16_T)(n0 & n28);
  n18 = (uint16_T)(n2 & n28);
  n64 = (uint16_T)(n4 & n28);
  n182 = (uint16_T)(n6 & n28);
  n82 = (uint16_T)(n8 & n28);
  n198 = (uint16_T)(n10 & n28);
  n214 = (uint16_T)(n12 & n28);
  n532 = (uint16_T)(n14 & n28);
  n24 = (uint16_T)((n1314 & n1414) | (n1414 & n1299) | (n1314 & n1299));
  n26 = (uint16_T)(n598 ^ n18 ^ n348);
  n333 = (uint16_T)((n598 & n18) | (n18 & n348) | (n598 & n348));
  n348 = (uint16_T)(n332 ^ n64 ^ n315);
  n315 = (uint16_T)((n332 & n64) | (n64 & n315) | (n332 & n315));
  n332 = (uint16_T)(n20 ^ n182 ^ n264);
  n148 = (uint16_T)((n20 & n182) | (n182 & n264) | (n20 & n264));
  n264 = (uint16_T)(n248 ^ n82 ^ n132);
  n132 = (uint16_T)((n248 & n82) | (n82 & n132) | (n248 & n132));
  n248 = (uint16_T)(n232 ^ n198 ^ n114);
  n114 = (uint16_T)((n232 & n198) | (n198 & n114) | (n232 & n114));
  n232 = (uint16_T)(n282 ^ n214 ^ n98);
  n214 = (uint16_T)((n282 & n214) | (n214 & n98) | (n282 & n98));
  n22 = (uint16_T)(n0 & n30);
  n18 = (uint16_T)(n2 & n30);
  n64 = (uint16_T)(n4 & n30);
  n182 = (uint16_T)(n6 & n30);
  n82 = (uint16_T)(n8 & n30);
  n198 = (uint16_T)(n10 & n30);
  n98 = (uint16_T)(n12 & n30);
  n582 = (uint16_T)(n14 & n30);
  n564 = (uint16_T)((n26 & n22) | (n22 & n24) | (n26 & n24));
  n282 = (uint16_T)(n348 ^ n18 ^ n333);
  n598 = (uint16_T)((n348 & n18) | (n18 & n333) | (n348 & n333));
  n565 = (uint16_T)(n332 ^ n64 ^ n315);
  n333 = (uint16_T)((n332 & n64) | (n64 & n315) | (n332 & n315));
  n348 = (uint16_T)(n264 ^ n182 ^ n148);
  n315 = (uint16_T)((n264 & n182) | (n182 & n148) | (n264 & n148));
  n332 = (uint16_T)(n248 ^ n82 ^ n132);
  n264 = (uint16_T)((n248 & n82) | (n82 & n132) | (n248 & n132));
  n20 = (uint16_T)(n232 ^ n198 ^ n114);
  n248 = (uint16_T)((n232 & n198) | (n198 & n114) | (n232 & n114));
  n148 = (uint16_T)(n532 ^ n98 ^ n214);
  n82 = (uint16_T)((n532 & n98) | (n98 & n214) | (n532 & n214));
  n198 = (uint16_T)(n282 & n564);
  n98 = (uint16_T)((n565 & n598) | (n598 & n198) | (n565 & n198));
  n214 = (uint16_T)((n348 & n333) | (n333 & n98) | (n348 & n98));
  n114 = (uint16_T)((n332 & n315) | (n315 & n214) | (n332 & n214));
  n232 = (uint16_T)((n20 & n264) | (n264 & n114) | (n20 & n114));
  n132 = (uint16_T)((n148 & n248) | (n248 & n232) | (n148 & n232));
  n182 = (uint16_T)(n0 & n16);
  n64 = (uint16_T)((n48 ^ n164) << 1);
  n18 = (uint16_T)(n314 ^ n414 ^ n299);
  return (uint16_T)(n182 | n64 | n18 << 2 | (c ^ n549) << 3 | (n814 ^ n914 ^
    n799) << 4 | (n1064 ^ n1164 ^ n1049) << 5 | (n1314 ^ n1414 ^ n1299) << 6 |
                    (n26 ^ n22 ^ n24) << 7 | (n282 ^ n564) << 8 | (n565 ^ n598 ^
    n198) << 9 | (n348 ^ n333 ^ n98) << 10 | (n332 ^ n315 ^ n214) << 11 | (n20 ^
    n264 ^ n114) << 12 | (n148 ^ n248 ^ n232) << 13 | (n582 ^ n82 ^ n132) << 14 |
                    ((n582 & n82) | (n82 & n132) | (n582 & n132)) << 15);
}

/* End of code generation (mul8_433.c) */
