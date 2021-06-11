/*
 * File: BAM.c
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 02-Sep-2018 18:37:39
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "BAM_ETM.h"
#include "BAM.h"
#include "dec2bin.h"
#include "BAM_ETM_rtwutil.h"

/* Function Definitions */

/*
 * Arguments    : unsigned char a
 *                unsigned char b
 *                double vbl
 *                double hbl
 * Return Type  : unsigned short
 */
unsigned short BAM(unsigned char a, unsigned char b, double vbl, double hbl)
{
  unsigned short res;
  char x_bin_temp[8];
  char y_bin_temp[8];
  int i;
  short pp[120];
  double x_bin[8];
  short y_bin[8];
  int j;
  int xtmp;
  int xoffset;
  short z1[120];
  static const signed char iv0[120] = { 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3,
    2, 1, 0, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14, 13, 12, 11,
    10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2,
    1, 0, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14, 13, 12, 11, 10,
    9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1,
    0, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };

  double y;
  dec2bin(a, x_bin_temp);
  dec2bin(b, y_bin_temp);
  for (i = 0; i < 8; i++) {
    x_bin[i] = (double)(unsigned char)x_bin_temp[i] - 48.0;
    y_bin[i] = (short)((unsigned char)y_bin_temp[i] - 48);
  }

  memset(&pp[0], 0, 120U * sizeof(short));
  for (i = 0; i < 8; i++) {
    for (j = 0; j < 8; j++) {
      xtmp = i + j;
      pp[i + (xtmp << 3)] = (short)((x_bin[i] != 0.0) && (y_bin[xtmp - i] != 0));
    }
  }

  for (j = 0; j < 15; j++) {
    for (i = 0; i < 4; i++) {
      xtmp = pp[i + (j << 3)];
      pp[i + (j << 3)] = pp[((j << 3) - i) + 7];
      pp[((j << 3) - i) + 7] = (short)xtmp;
    }
  }

  if (hbl > 0.0) {
    for (i = 0; i < (int)hbl; i++) {
      for (xoffset = 0; xoffset < 15; xoffset++) {
        pp[i + (xoffset << 3)] = 0;
      }
    }
  }

  if (vbl > 0.0) {
    for (j = 0; j < (int)(15.0 + (1.0 - (15.0 - (vbl - 1.0)))); j++) {
      xoffset = (int)((15.0 - (vbl - 1.0)) + (double)j);
      for (xtmp = 0; xtmp < 8; xtmp++) {
        pp[xtmp + ((xoffset - 1) << 3)] = 0;
      }
    }
  }

  for (xtmp = 0; xtmp < 120; xtmp++) {
    z1[xtmp] = (short)rt_powd_snf(2.0, iv0[xtmp]);
  }

  for (xoffset = 0; xoffset < 15; xoffset++) {
    for (xtmp = 0; xtmp < 8; xtmp++) {
      pp[xtmp + (xoffset << 3)] *= z1[xoffset + 15 * xtmp];
    }
  }

  for (j = 0; j < 8; j++) {
    x_bin[j] = pp[j];
  }

  for (xtmp = 0; xtmp < 14; xtmp++) {
    xoffset = (xtmp + 1) << 3;
    for (j = 0; j < 8; j++) {
      x_bin[j] += (double)pp[xoffset + j];
    }
  }

  y = x_bin[0];
  for (xtmp = 0; xtmp < 7; xtmp++) {
    y += x_bin[xtmp + 1];
  }

  if (y < 65536.0) {
    if (y >= 0.0) {
      res = (unsigned short)y;
    } else {
      res = 0;
    }
  } else if (y >= 65536.0) {
    res = MAX_uint16_T;
  } else {
    res = 0;
  }

  return res;
}

/*
 * File trailer for BAM.c
 *
 * [EOF]
 */
