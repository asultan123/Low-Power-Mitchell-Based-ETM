/*
 * File: dec2bin.c
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 02-Sep-2018 18:37:39
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "BAM_ETM.h"
#include "dec2bin.h"

/* Function Definitions */

/*
 * Arguments    : unsigned char d
 *                char s[8]
 * Return Type  : void
 */
void dec2bin(unsigned char d, char s[8])
{
  int b;
  for (b = 0; b < 8; b++) {
    s[b] = '0';
  }

  for (b = 0; b < 8; b++) {
    if ((d & 1 << b) != 0) {
      s[7 - b] = '1';
    }
  }
}

/*
 * File trailer for dec2bin.c
 *
 * [EOF]
 */
