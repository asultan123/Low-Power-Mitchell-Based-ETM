//
// File: mul8_433.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 16:34:01
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_ETM_int.h"
#include "mul8_433.h"

// Function Definitions

//
// Approximate function mul8_433
//   Library = EvoApprox8b
//   Circuit = mul8_433
//   Area   (180) = 8448
//   Delay  (180) = 3.720
//   Power  (180) = 4454.10
//   Area   (45) = 616
//   Delay  (45) = 1.400
//   Power  (45) = 390.20
//   Nodes = 120
//   HD = 0
//   MAE = 0.00000
//   MSE = 0.00000
//   MRE = 0.00 %
//   WCE = 0
//   WCRE = 0 %
//   EP = 0.0 %
// Arguments    : unsigned char a
//                unsigned char b
// Return Type  : unsigned short
//
unsigned short mul8_433(unsigned char a, unsigned char b)
{
  unsigned short c;
  unsigned short n0;
  unsigned short n2;
  unsigned short n4;
  unsigned short n6;
  unsigned short n8;
  unsigned short n10;
  unsigned short n12;
  unsigned short n14;
  unsigned short n16;
  unsigned short n18;
  unsigned short n20;
  unsigned short n22;
  unsigned short n24;
  unsigned short n26;
  unsigned short n28;
  unsigned short n30;
  unsigned short n48;
  unsigned short n64;
  unsigned short n82;
  unsigned short n98;
  unsigned short n114;
  unsigned short n132;
  unsigned short n148;
  unsigned short n164;
  unsigned short n182;
  unsigned short n198;
  unsigned short n214;
  unsigned short n232;
  unsigned short n248;
  unsigned short n264;
  unsigned short n282;
  unsigned short n299;
  unsigned short n314;
  unsigned short n315;
  unsigned short n332;
  unsigned short n333;
  unsigned short n348;
  unsigned short n414;
  unsigned short n532;
  unsigned short n549;
  unsigned short n564;
  unsigned short n565;
  unsigned short n582;
  unsigned short n598;
  unsigned short n799;
  unsigned short n814;
  unsigned short n914;
  unsigned short n1049;
  unsigned short n1064;
  unsigned short n1164;
  unsigned short n1299;
  unsigned short n1314;
  unsigned short n1414;
  n0 = (unsigned short)(a & 1);
  n2 = (unsigned short)((int)((unsigned int)a >> 1) & 1);
  n4 = (unsigned short)((int)((unsigned int)a >> 2) & 1);
  n6 = (unsigned short)((int)((unsigned int)a >> 3) & 1);
  n8 = (unsigned short)((int)((unsigned int)a >> 4) & 1);
  n10 = (unsigned short)((int)((unsigned int)a >> 5) & 1);
  n12 = (unsigned short)((int)((unsigned int)a >> 6) & 1);
  n14 = (unsigned short)((unsigned int)a >> 7);
  n16 = (unsigned short)(b & 1);
  n18 = (unsigned short)((int)((unsigned int)b >> 1) & 1);
  n20 = (unsigned short)((int)((unsigned int)b >> 2) & 1);
  n22 = (unsigned short)((int)((unsigned int)b >> 3) & 1);
  n24 = (unsigned short)((int)((unsigned int)b >> 4) & 1);
  n26 = (unsigned short)((int)((unsigned int)b >> 5) & 1);
  n28 = (unsigned short)((int)((unsigned int)b >> 6) & 1);
  n30 = (unsigned short)((unsigned int)b >> 7);
  n48 = (unsigned short)(n2 & n16);
  n64 = (unsigned short)(n4 & n16);
  n82 = (unsigned short)(n6 & n16);
  n98 = (unsigned short)(n8 & n16);
  n114 = (unsigned short)(n10 & n16);
  n132 = (unsigned short)(n12 & n16);
  n148 = (unsigned short)(n14 & n16);
  n164 = (unsigned short)(n0 & n18);
  n182 = (unsigned short)(n2 & n18);
  n198 = (unsigned short)(n4 & n18);
  n214 = (unsigned short)(n6 & n18);
  n232 = (unsigned short)(n8 & n18);
  n248 = (unsigned short)(n10 & n18);
  n264 = (unsigned short)(n12 & n18);
  n282 = (unsigned short)(n14 & n18);
  n299 = (unsigned short)(n48 & n164);
  n314 = (unsigned short)(n64 ^ n182);
  n315 = (unsigned short)(n64 & n182);
  n332 = (unsigned short)(n82 ^ n198);
  n333 = (unsigned short)(n82 & n198);
  n348 = (unsigned short)(n98 ^ n214);
  n98 &= n214;
  n214 = (unsigned short)(n114 ^ n232);
  n114 &= n232;
  n232 = (unsigned short)(n132 ^ n248);
  n132 &= n248;
  n248 = (unsigned short)(n148 ^ n264);
  n148 &= n264;
  n414 = (unsigned short)(n0 & n20);
  n18 = (unsigned short)(n2 & n20);
  n64 = (unsigned short)(n4 & n20);
  n182 = (unsigned short)(n6 & n20);
  n82 = (unsigned short)(n8 & n20);
  n198 = (unsigned short)(n10 & n20);
  n264 = (unsigned short)(n12 & n20);
  n532 = (unsigned short)(n14 & n20);
  n549 = (unsigned short)((n314 & n414) | (n414 & n299) | (n314 & n299));
  n564 = (unsigned short)(n332 ^ n18 ^ n315);
  n565 = (unsigned short)((n332 & n18) | (n18 & n315) | (n332 & n315));
  n582 = (unsigned short)(n348 ^ n64 ^ n333);
  n348 = (unsigned short)((n348 & n64) | (n64 & n333) | (n348 & n333));
  n598 = (unsigned short)(n214 ^ n182 ^ n98);
  n332 = (unsigned short)((n214 & n182) | (n182 & n98) | (n214 & n98));
  n333 = (unsigned short)(n232 ^ n82 ^ n114);
  n20 = (unsigned short)((n232 & n82) | (n82 & n114) | (n232 & n114));
  n315 = (unsigned short)(n248 ^ n198 ^ n132);
  n232 = (unsigned short)((n248 & n198) | (n198 & n132) | (n248 & n132));
  n132 = (unsigned short)(n282 ^ n264 ^ n148);
  n214 = (unsigned short)((n282 & n264) | (n264 & n148) | (n282 & n148));
  n18 = (unsigned short)(n0 & n22);
  n64 = (unsigned short)(n2 & n22);
  n182 = (unsigned short)(n4 & n22);
  n82 = (unsigned short)(n6 & n22);
  n198 = (unsigned short)(n8 & n22);
  n98 = (unsigned short)(n10 & n22);
  n114 = (unsigned short)(n12 & n22);
  n282 = (unsigned short)(n14 & n22);
  c = (unsigned short)(n564 ^ n18);
  n799 = (unsigned short)((n564 & n18) | (n18 & n549) | (n564 & n549));
  n814 = (unsigned short)(n582 ^ n64 ^ n565);
  n565 = (unsigned short)((n582 & n64) | (n64 & n565) | (n582 & n565));
  n582 = (unsigned short)(n598 ^ n182 ^ n348);
  n348 = (unsigned short)((n598 & n182) | (n182 & n348) | (n598 & n348));
  n598 = (unsigned short)(n333 ^ n82 ^ n332);
  n264 = (unsigned short)((n333 & n82) | (n82 & n332) | (n333 & n332));
  n332 = (unsigned short)(n315 ^ n198 ^ n20);
  n248 = (unsigned short)((n315 & n198) | (n198 & n20) | (n315 & n20));
  n148 = (unsigned short)(n132 ^ n98 ^ n232);
  n232 = (unsigned short)((n132 & n98) | (n98 & n232) | (n132 & n232));
  n132 = (unsigned short)(n532 ^ n114 ^ n214);
  n98 = (unsigned short)((n532 & n114) | (n114 & n214) | (n532 & n214));
  n914 = (unsigned short)(n0 & n24);
  n18 = (unsigned short)(n2 & n24);
  n64 = (unsigned short)(n4 & n24);
  n182 = (unsigned short)(n6 & n24);
  n82 = (unsigned short)(n8 & n24);
  n198 = (unsigned short)(n10 & n24);
  n214 = (unsigned short)(n12 & n24);
  n564 = (unsigned short)(n14 & n24);
  n1049 = (unsigned short)((n814 & n914) | (n914 & n799) | (n814 & n799));
  n1064 = (unsigned short)(n582 ^ n18 ^ n565);
  n565 = (unsigned short)((n582 & n18) | (n18 & n565) | (n582 & n565));
  n582 = (unsigned short)(n598 ^ n64 ^ n348);
  n315 = (unsigned short)((n598 & n64) | (n64 & n348) | (n598 & n348));
  n333 = (unsigned short)(n332 ^ n182 ^ n264);
  n264 = (unsigned short)((n332 & n182) | (n182 & n264) | (n332 & n264));
  n20 = (unsigned short)(n148 ^ n82 ^ n248);
  n248 = (unsigned short)((n148 & n82) | (n82 & n248) | (n148 & n248));
  n148 = (unsigned short)(n132 ^ n198 ^ n232);
  n114 = (unsigned short)((n132 & n198) | (n198 & n232) | (n132 & n232));
  n232 = (unsigned short)(n282 ^ n214 ^ n98);
  n98 = (unsigned short)((n282 & n214) | (n214 & n98) | (n282 & n98));
  n1164 = (unsigned short)(n0 & n26);
  n18 = (unsigned short)(n2 & n26);
  n64 = (unsigned short)(n4 & n26);
  n182 = (unsigned short)(n6 & n26);
  n82 = (unsigned short)(n8 & n26);
  n198 = (unsigned short)(n10 & n26);
  n214 = (unsigned short)(n12 & n26);
  n282 = (unsigned short)(n14 & n26);
  n1299 = (unsigned short)((n1064 & n1164) | (n1164 & n1049) | (n1064 & n1049));
  n1314 = (unsigned short)(n582 ^ n18 ^ n565);
  n348 = (unsigned short)((n582 & n18) | (n18 & n565) | (n582 & n565));
  n598 = (unsigned short)(n333 ^ n64 ^ n315);
  n315 = (unsigned short)((n333 & n64) | (n64 & n315) | (n333 & n315));
  n332 = (unsigned short)(n20 ^ n182 ^ n264);
  n264 = (unsigned short)((n20 & n182) | (n182 & n264) | (n20 & n264));
  n20 = (unsigned short)(n148 ^ n82 ^ n248);
  n132 = (unsigned short)((n148 & n82) | (n82 & n248) | (n148 & n248));
  n248 = (unsigned short)(n232 ^ n198 ^ n114);
  n114 = (unsigned short)((n232 & n198) | (n198 & n114) | (n232 & n114));
  n232 = (unsigned short)(n564 ^ n214 ^ n98);
  n98 = (unsigned short)((n564 & n214) | (n214 & n98) | (n564 & n98));
  n1414 = (unsigned short)(n0 & n28);
  n18 = (unsigned short)(n2 & n28);
  n64 = (unsigned short)(n4 & n28);
  n182 = (unsigned short)(n6 & n28);
  n82 = (unsigned short)(n8 & n28);
  n198 = (unsigned short)(n10 & n28);
  n214 = (unsigned short)(n12 & n28);
  n532 = (unsigned short)(n14 & n28);
  n24 = (unsigned short)((n1314 & n1414) | (n1414 & n1299) | (n1314 & n1299));
  n26 = (unsigned short)(n598 ^ n18 ^ n348);
  n333 = (unsigned short)((n598 & n18) | (n18 & n348) | (n598 & n348));
  n348 = (unsigned short)(n332 ^ n64 ^ n315);
  n315 = (unsigned short)((n332 & n64) | (n64 & n315) | (n332 & n315));
  n332 = (unsigned short)(n20 ^ n182 ^ n264);
  n148 = (unsigned short)((n20 & n182) | (n182 & n264) | (n20 & n264));
  n264 = (unsigned short)(n248 ^ n82 ^ n132);
  n132 = (unsigned short)((n248 & n82) | (n82 & n132) | (n248 & n132));
  n248 = (unsigned short)(n232 ^ n198 ^ n114);
  n114 = (unsigned short)((n232 & n198) | (n198 & n114) | (n232 & n114));
  n232 = (unsigned short)(n282 ^ n214 ^ n98);
  n214 = (unsigned short)((n282 & n214) | (n214 & n98) | (n282 & n98));
  n22 = (unsigned short)(n0 & n30);
  n18 = (unsigned short)(n2 & n30);
  n64 = (unsigned short)(n4 & n30);
  n182 = (unsigned short)(n6 & n30);
  n82 = (unsigned short)(n8 & n30);
  n198 = (unsigned short)(n10 & n30);
  n98 = (unsigned short)(n12 & n30);
  n582 = (unsigned short)(n14 & n30);
  n564 = (unsigned short)((n26 & n22) | (n22 & n24) | (n26 & n24));
  n282 = (unsigned short)(n348 ^ n18 ^ n333);
  n598 = (unsigned short)((n348 & n18) | (n18 & n333) | (n348 & n333));
  n565 = (unsigned short)(n332 ^ n64 ^ n315);
  n333 = (unsigned short)((n332 & n64) | (n64 & n315) | (n332 & n315));
  n348 = (unsigned short)(n264 ^ n182 ^ n148);
  n315 = (unsigned short)((n264 & n182) | (n182 & n148) | (n264 & n148));
  n332 = (unsigned short)(n248 ^ n82 ^ n132);
  n264 = (unsigned short)((n248 & n82) | (n82 & n132) | (n248 & n132));
  n20 = (unsigned short)(n232 ^ n198 ^ n114);
  n248 = (unsigned short)((n232 & n198) | (n198 & n114) | (n232 & n114));
  n148 = (unsigned short)(n532 ^ n98 ^ n214);
  n82 = (unsigned short)((n532 & n98) | (n98 & n214) | (n532 & n214));
  n198 = (unsigned short)(n282 & n564);
  n98 = (unsigned short)((n565 & n598) | (n598 & n198) | (n565 & n198));
  n214 = (unsigned short)((n348 & n333) | (n333 & n98) | (n348 & n98));
  n114 = (unsigned short)((n332 & n315) | (n315 & n214) | (n332 & n214));
  n232 = (unsigned short)((n20 & n264) | (n264 & n114) | (n20 & n114));
  n132 = (unsigned short)((n148 & n248) | (n248 & n232) | (n148 & n232));
  n182 = (unsigned short)(n0 & n16);
  n64 = (unsigned short)((n48 ^ n164) << 1);
  n18 = (unsigned short)(n314 ^ n414 ^ n299);
  return (unsigned short)(n182 | n64 | n18 << 2 | (c ^ n549) << 3 | (n814 ^ n914
    ^ n799) << 4 | (n1064 ^ n1164 ^ n1049) << 5 | (n1314 ^ n1414 ^ n1299) << 6 |
    (n26 ^ n22 ^ n24) << 7 | (n282 ^ n564) << 8 | (n565 ^ n598 ^ n198) << 9 |
    (n348 ^ n333 ^ n98) << 10 | (n332 ^ n315 ^ n214) << 11 | (n20 ^ n264 ^ n114)
    << 12 | (n148 ^ n248 ^ n232) << 13 | (n582 ^ n82 ^ n132) << 14 | ((n582 &
    n82) | (n82 & n132) | (n582 & n132)) << 15);
}

//
// File trailer for mul8_433.cpp
//
// [EOF]
//
