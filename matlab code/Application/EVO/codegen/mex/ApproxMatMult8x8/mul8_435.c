/*
 * mul8_435.c
 *
 * Code generation for function 'mul8_435'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "mul8_435.h"

/* Function Definitions */
uint16_T mul8_435(uint8_T a, uint8_T b)
{
  uint16_T c;
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
  uint16_T n33;
  uint16_T n35;
  uint16_T n51;
  uint16_T n63;
  uint16_T n117;
  uint16_T n682;
  uint16_T n814;
  uint16_T n932;
  uint16_T n948;
  uint16_T n1049;
  uint16_T n1164;
  uint16_T n1182;
  uint16_T n1198;
  uint16_T n1414;
  uint16_T n1449;
  uint16_T n1664;
  uint16_T n1682;
  uint16_T n1698;
  uint16_T n1699;
  uint16_T n1714;

  /*  Approximate function mul8_435 */
  /*   Library = EvoApprox8b */
  /*   Circuit = mul8_435 */
  /*   Area   (180) = 4623 */
  /*   Delay  (180) = 3.400 */
  /*   Power  (180) = 1946.50 */
  /*   Area   (45) = 337 */
  /*   Delay  (45) = 1.220 */
  /*   Power  (45) = 168.20 */
  /*   Nodes = 82 */
  /*   HD = 324016 */
  /*   MAE = 288.92786 */
  /*   MSE = 140216.04199 */
  /*   MRE = 6.09 % */
  /*   WCE = 1960 */
  /*   WCRE = 100 % */
  /*   EP = 98.3 % */
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
  n32 = (uint16_T)(n18 & n14);
  n33 = (uint16_T)(n18 & n14);
  n35 = (uint16_T)~(uint16_T)(n16 & (n32 & n18));
  n51 = (uint16_T)((uint16_T)~n35 & (uint16_T)~(uint16_T)(n33 | n28));
  n63 = (uint16_T)~(uint16_T)(n2 & (n12 & n30));
  n117 = (uint16_T)~(uint16_T)((n33 | n20) & n22);
  n18 = (uint16_T)(n51 & n16);
  n33 = (uint16_T)(n14 & n20);
  n682 = (uint16_T)(n18 ^ n33);
  n33 &= n18;
  n18 = (uint16_T)(n12 & n22);
  n814 = (uint16_T)(n14 & n22);
  n16 = (uint16_T)((n51 & n16) | (n12 & n20) | (n10 & n22));
  n932 = (uint16_T)(n682 ^ n18);
  n18 &= n682;
  n948 = (uint16_T)(n33 ^ n814 ^ n18);
  n682 = (uint16_T)((n33 & n814) | (n814 & n18) | (n33 & n18));
  n18 = (uint16_T)(n8 & n24);
  n33 = (uint16_T)(n10 & n24);
  n1049 = (uint16_T)(n10 & n24);
  n51 = (uint16_T)(n12 & n24);
  n814 = (uint16_T)(n14 & n24);
  n1164 = (uint16_T)(n16 ^ n18);
  n18 &= n16;
  n1182 = (uint16_T)(n932 ^ n33 ^ n18);
  n18 = (uint16_T)((n932 & n33) | (n33 & n18) | (n932 & n18));
  n1198 = (uint16_T)(n948 ^ n51 ^ n18);
  n18 = (uint16_T)((n948 & n51) | (n51 & n18) | (n948 & n18));
  n948 = (uint16_T)(n682 ^ n814 ^ n18);
  n814 = (uint16_T)((n682 & n814) | (n814 & n18) | (n682 & n18));
  n33 = (uint16_T)(n6 & n26);
  n51 = (uint16_T)(n8 & n26);
  n16 = (uint16_T)(n10 & n26);
  n682 = (uint16_T)(n12 & n26);
  n932 = (uint16_T)(n14 & n26);
  n18 = (uint16_T)((n117 & n32) | (n10 & n20) | (n8 & n22) | (n6 & n24) | (n4 &
    n26));
  n1414 = (uint16_T)(n1164 ^ n33 ^ n18);
  n18 = (uint16_T)((n1164 & n33) | (n33 & n18) | (n1164 & n18));
  n26 = (uint16_T)(n1182 ^ n51 ^ n18);
  n18 = (uint16_T)((n1182 & n51) | (n51 & n18) | (n1182 & n18));
  n24 = (uint16_T)(n1198 ^ n16 ^ n18);
  n1449 = (uint16_T)((n1198 & n16) | (n16 & n18) | (n1198 & n18));
  n20 = (uint16_T)(n948 ^ n682 ^ n1449);
  n18 = (uint16_T)((n948 & n682) | (n682 & n1449) | (n948 & n1449));
  n948 = (uint16_T)(n814 ^ n932 ^ n18);
  n932 = (uint16_T)((n814 & n932) | (n932 & n18) | (n814 & n18));
  n18 = (uint16_T)(n4 & n28);
  n33 = (uint16_T)(n6 & n28);
  n51 = (uint16_T)(n8 & n28);
  n16 = (uint16_T)(n10 & n28);
  n682 = (uint16_T)(n12 & n28);
  n814 = (uint16_T)(n14 & n28);
  n1664 = (uint16_T)(n1414 ^ n18);
  n18 &= n1414;
  n1682 = (uint16_T)(n26 ^ n33 ^ n18);
  n18 = (uint16_T)((n26 & n33) | (n33 & n18) | (n26 & n18));
  n1698 = (uint16_T)(n24 ^ n51 ^ n18);
  n1699 = (uint16_T)((n24 & n51) | (n51 & n18) | (n24 & n18));
  n1714 = (uint16_T)(n20 ^ n16 ^ n1699);
  n18 = (uint16_T)((n20 & n16) | (n16 & n1699) | (n20 & n1699));
  n28 = (uint16_T)(n948 ^ n682 ^ n18);
  n18 = (uint16_T)((n948 & n682) | (n682 & n18) | (n948 & n18));
  n1414 = (uint16_T)(n932 ^ n814 ^ n18);
  n24 = (uint16_T)((n932 & n814) | (n814 & n18) | (n932 & n18));
  n26 = (uint16_T)(n2 & n30);
  n1164 = (uint16_T)(n4 & n30);
  n1182 = (uint16_T)(n6 & n30);
  n20 = (uint16_T)(n8 & n30);
  n948 = (uint16_T)(n10 & n30);
  n1198 = (uint16_T)(n12 & n30);
  n18 = (uint16_T)(n14 & n30);
  n33 = (uint16_T)(n1664 & n26);
  n51 = (uint16_T)((n1682 & n1164) | (n1164 & n33) | (n1682 & n33));
  n16 = (uint16_T)((n1698 & n1182) | (n1182 & n51) | (n1698 & n51));
  n682 = (uint16_T)((n1714 & n20) | (n20 & n16) | (n1714 & n16));
  n814 = (uint16_T)((n28 & n948) | (n948 & n682) | (n28 & n682));
  n932 = (uint16_T)((n1414 & n1198) | (n1198 & n814) | (n1414 & n814));
  c = (uint16_T)((n117 & n32 & (uint16_T)~(uint16_T)~(uint16_T)(n63 | n12)) << 1);
  return (uint16_T)(n1449 | c | n1699 << 2 | n1049 << 3 | (n6 & n22) << 4 |
                    ((uint16_T)~(uint16_T)(n63 | (uint16_T)~n35) & 1) << 5 |
                    n1049 << 6 | ((uint16_T)((uint16_T)~n35 ^ (uint16_T)(n2 &
    n30)) & 1) << 7 | (n1664 ^ n26) << 8 | (n1682 ^ n1164 ^ n33) << 9 | (n1698 ^
    n1182 ^ n51) << 10 | (n1714 ^ n20 ^ n16) << 11 | (n28 ^ n948 ^ n682) << 12 |
                    (n1414 ^ n1198 ^ n814) << 13 | (n24 ^ n18 ^ n932) << 14 |
                    ((n24 & n18) | (n18 & n932) | (n24 & n932)) << 15);
}

/* End of code generation (mul8_435.c) */
