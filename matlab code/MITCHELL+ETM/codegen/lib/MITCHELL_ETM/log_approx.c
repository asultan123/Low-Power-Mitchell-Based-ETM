/*
 * File: log_approx.c
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 02-Sep-2018 17:52:20
 */

/* Include Files */
#include "rt_nonfinite.h"
#include "MITCHELL_ETM.h"
#include "log_approx.h"
#include "MITCHELL_ETM_rtwutil.h"

/* Function Definitions */

/*
 * Arguments    : unsigned char input
 *                double *log_num
 *                double *lower
 * Return Type  : void
 */
void log_approx(unsigned char input, double *log_num, double *lower)
{
  int b;
  char num_bin[8];
  int characteristic_num;
  boolean_T exitg1;
  signed char lower_part[8];
  int b_index;
  int j;
  double z1[8];
  for (b = 0; b < 8; b++) {
    num_bin[b] = '0';
  }

  for (b = 0; b < 8; b++) {
    if ((input & 1 << b) != 0) {
      num_bin[7 - b] = '1';
    }

    lower_part[b] = 0;
  }

  characteristic_num = 0;
  b = 0;
  exitg1 = false;
  while ((!exitg1) && (b < 8)) {
    if (num_bin[b] == '1') {
      characteristic_num = 7 - b;
      b_index = 0;
      for (j = 0; j <= 6 - b; j++) {
        lower_part[b_index] = (signed char)(num_bin[(b + j) + 1] - 48);
        b_index++;
      }

      for (b = 0; b < 8; b++) {
        z1[b] = rt_powd_snf(2.0, -1.0 + -(((double)b + 1.0) - 1.0)) * (double)
          lower_part[b];
      }

      *lower = z1[0];
      for (b = 0; b < 7; b++) {
        *lower += z1[b + 1];
      }

      exitg1 = true;
    } else {
      *lower = 0.0;
      b++;
    }
  }

  *log_num = (double)characteristic_num + *lower;
}

/*
 * File trailer for log_approx.c
 *
 * [EOF]
 */
