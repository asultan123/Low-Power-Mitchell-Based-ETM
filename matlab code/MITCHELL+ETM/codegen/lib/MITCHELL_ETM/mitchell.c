/*
 * File: mitchell.c
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 02-Sep-2018 17:52:20
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "MITCHELL_ETM.h"
#include "mitchell.h"
#include "log_approx.h"

/* Function Definitions */

/*
 * Arguments    : unsigned char a
 *                unsigned char b
 * Return Type  : unsigned short
 */
unsigned short mitchell(unsigned char a, unsigned char b)
{
  unsigned short result;
  double b_a;
  double p2;
  double b_b;
  double lower2;
  int row;
  int col;
  unsigned short c;
  static const double lut[64] = { 0.0048, 0.0131, 0.0198, 0.0254, 0.0301, 0.0342,
    0.0377, 0.0266, 0.0131, 0.036, 0.0548, 0.0705, 0.0838, 0.0952, 0.091, 0.0328,
    0.0198, 0.0548, 0.0837, 0.108, 0.1287, 0.1324, 0.0811, 0.025, 0.0254, 0.0705,
    0.108, 0.1397, 0.1527, 0.1093, 0.0601, 0.0187, 0.0301, 0.0838, 0.1287,
    0.1527, 0.1186, 0.0774, 0.0428, 0.0133, 0.0342, 0.0952, 0.1324, 0.1093,
    0.0774, 0.0507, 0.0282, 0.0088, 0.0377, 0.091, 0.0611, 0.0601, 0.0428,
    0.0282, 0.0157, 0.0049, 0.0266, 0.0328, 0.025, 0.0187, 0.0133, 0.0088,
    0.0049, 0.0015 };

  unsigned char u1;
  unsigned short hfi;
  unsigned short log_addition;
  int j;
  char anti_log_num_bin_data[52];
  char lower_part_data[52];
  int characteristic_num;
  int characteristic_num_pos;
  int b_hfi;
  boolean_T exitg1;
  boolean_T p;
  char b_lower_part_data[52];
  if ((a < 1) || (b < 1)) {
    result = 0;
  } else {
    log_approx(a, &b_a, &p2);
    log_approx(b, &b_b, &lower2);
    row = -1;
    if (p2 < 0.125) {
      row = 0;
    } else if (p2 < 0.25) {
      row = 1;
    } else if (p2 < 0.375) {
      row = 2;
    } else if (p2 < 0.5) {
      row = 3;
    } else if (p2 < 0.625) {
      row = 4;
    } else if (p2 < 0.75) {
      row = 5;
    } else if (p2 < 0.875) {
      row = 6;
    } else {
      if (p2 <= 1.0) {
        row = 7;
      }
    }

    col = -1;
    if (lower2 < 0.125) {
      col = 0;
    } else if (lower2 < 0.25) {
      col = 1;
    } else if (lower2 < 0.375) {
      col = 2;
    } else if (lower2 < 0.5) {
      col = 3;
    } else if (lower2 < 0.625) {
      col = 4;
    } else if (lower2 < 0.75) {
      col = 5;
    } else if (lower2 < 0.875) {
      col = 6;
    } else {
      if (lower2 <= 1.0) {
        col = 7;
      }
    }

    p2 = b_a * 128.0;
    b_a = fabs(p2);
    if (b_a < 4.503599627370496E+15) {
      if (b_a >= 0.5) {
        p2 = floor(p2 + 0.5);
      } else {
        p2 *= 0.0;
      }
    }

    if (rtIsNaN(p2) || rtIsInf(p2)) {
      lower2 = 0.0;
    } else {
      lower2 = fmod(p2, 2048.0);
    }

    p2 = b_b * 128.0;
    b_a = fabs(p2);
    if (b_a < 4.503599627370496E+15) {
      if (b_a >= 0.5) {
        p2 = floor(p2 + 0.5);
      } else {
        p2 *= 0.0;
      }
    }

    if (rtIsNaN(p2) || rtIsInf(p2)) {
      b_a = 0.0;
    } else {
      b_a = fmod(p2, 2048.0);
    }

    c = (unsigned short)((int)((unsigned int)((unsigned short)(short)floor
      (lower2) & 2047) + ((unsigned short)(short)floor(b_a) & 2047)) & 2047);
    p2 = lut[row + (col << 3)] * 128.0;
    if (p2 >= 0.5) {
      lower2 = floor(p2 + 0.5);
    } else {
      lower2 = 0.0;
    }

    u1 = (unsigned char)lower2;
    hfi = u1;
    log_addition = (unsigned short)((int)((unsigned int)c + hfi) & 2047);
    b_a = (double)((int)((unsigned int)c + hfi) & 2047) * 0.0078125;
    for (row = 0; row < 52; row++) {
      anti_log_num_bin_data[row] = '0';
    }

    for (j = 0; j < 16; j++) {
      anti_log_num_bin_data[j] = '0';
    }

    for (row = 0; row < 16; row++) {
      lower_part_data[row] = '0';
    }

    memcpy(&anti_log_num_bin_data[0], &lower_part_data[0], (unsigned int)(16 *
            (int)sizeof(char)));
    characteristic_num = (int)floor((double)log_addition * 0.0078125);
    characteristic_num_pos = 16 - (int)floor(b_a);
    anti_log_num_bin_data[15 - characteristic_num] = '1';
    p2 = ((double)log_addition * 0.0078125 - floor(b_a)) * 256.0;
    b_a = fabs(p2);
    if (b_a >= 0.5) {
      lower2 = floor(p2 + 0.5);
    } else {
      lower2 = p2 * 0.0;
    }

    if (lower2 >= 0.0) {
      hfi = (unsigned short)lower2;
    } else {
      hfi = 0;
    }

    for (row = 0; row < 52; row++) {
      lower_part_data[row] = '0';
    }

    if ((int)((unsigned int)hfi >> 8) == 0) {
      b_hfi = (unsigned short)(hfi << 8);
    } else {
      b_hfi = 65535;
    }

    row = (int)((unsigned int)b_hfi >> 8);
    j = 52;
    exitg1 = false;
    while ((!exitg1) && (j > 0)) {
      col = row;
      row = (int)floor((double)row / 2.0);
      if ((row << 1) < col) {
        lower_part_data[j - 1] = '1';
      }

      if (row > 0) {
        j--;
      } else {
        exitg1 = true;
      }
    }

    col = 45;
    j = 1;
    exitg1 = false;
    while ((!exitg1) && (j <= 44)) {
      p = false;
      if (lower_part_data[j - 1] != '0') {
        p = true;
      }

      if (p) {
        col = j;
        exitg1 = true;
      } else {
        j++;
      }
    }

    if (col > 1) {
      for (j = col; j < 53; j++) {
        lower_part_data[j - col] = lower_part_data[j - 1];
      }

      row = 53 - col;
      memcpy(&b_lower_part_data[0], &lower_part_data[0], (unsigned int)(row *
              (int)sizeof(char)));
      row = 53 - col;
      memcpy(&lower_part_data[0], &b_lower_part_data[0], (unsigned int)(row *
              (int)sizeof(char)));
    }

    if (25 - characteristic_num <= 16) {
      for (col = 0; col < 8; col++) {
        j = (characteristic_num_pos + col) + 1;
        anti_log_num_bin_data[j - 1] = lower_part_data[(j + characteristic_num)
          - 17];
      }
    } else {
      for (col = 0; col < characteristic_num; col++) {
        j = (characteristic_num_pos + col) + 1;
        anti_log_num_bin_data[j - 1] = lower_part_data[(j + characteristic_num)
          - 17];
      }
    }

    b_a = 0.0;
    p2 = 1.0;
    for (j = 0; j < 16; j++) {
      if (anti_log_num_bin_data[15 - j] == '1') {
        b_a += p2;
      }

      p2 += p2;
    }

    if (b_a < 65536.0) {
      result = (unsigned short)b_a;
    } else {
      result = MAX_uint16_T;
    }
  }

  return result;
}

/*
 * File trailer for mitchell.c
 *
 * [EOF]
 */
