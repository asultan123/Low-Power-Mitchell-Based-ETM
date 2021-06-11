//
// File: TBM.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 20:34:45
//

// Include Files
#include "rt_nonfinite.h"
#include "TBM_ETM.h"
#include "TBM.h"
#include "sum.h"
#include "bi2de.h"
#include "fliplr.h"
#include "dec2bin.h"
#include "TBM_ETM_rtwutil.h"

// Function Definitions

//
// Arguments    : unsigned char x
//                unsigned char y
// Return Type  : unsigned int
//
unsigned int TBM(unsigned char x, unsigned char y)
{
  unsigned int res;
  char x_bin_temp[8];
  char y_bin_temp[8];
  int i;
  signed char pp[99];
  short y_bin[8];
  short x_bin[8];
  int i0;
  double d0;
  double pp_dec[9];
  double dv0[11];
  dec2bin(x, x_bin_temp);
  dec2bin(y, y_bin_temp);
  for (i = 0; i < 8; i++) {
    x_bin[i] = (short)((unsigned char)x_bin_temp[i] - 48);
    y_bin[i] = (short)((unsigned char)y_bin_temp[i] - 48);
    pp[9 * i] = 0;
  }

  pp[72] = (signed char)((y_bin[7] != 0) && (x_bin[0] != 0));
  pp[81] = (signed char)((y_bin[7] != 0) && (x_bin[1] != 0));
  pp[90] = (signed char)((y_bin[7] != 0) && (x_bin[2] != 0));
  for (i0 = 0; i0 < 7; i0++) {
    pp[1 + 9 * i0] = 0;
  }

  pp[64] = (signed char)((y_bin[6] != 0) && (x_bin[0] != 0));
  pp[73] = (signed char)((y_bin[6] != 0) && (x_bin[1] != 0));
  pp[82] = (signed char)((y_bin[6] != 0) && (x_bin[2] != 0));
  pp[91] = (signed char)((y_bin[6] != 0) && (x_bin[3] != 0));
  for (i0 = 0; i0 < 6; i0++) {
    pp[2 + 9 * i0] = 0;
  }

  pp[56] = (signed char)((y_bin[5] != 0) && (x_bin[0] != 0));
  pp[65] = (signed char)((y_bin[5] != 0) && (x_bin[1] != 0));
  pp[74] = (signed char)((y_bin[5] != 0) && (x_bin[2] != 0));
  pp[83] = (signed char)((y_bin[5] != 0) && (x_bin[3] != 0));
  pp[92] = 0;
  for (i0 = 0; i0 < 5; i0++) {
    pp[3 + 9 * i0] = 0;
  }

  pp[48] = (signed char)((y_bin[4] != 0) && (x_bin[0] != 0));
  pp[57] = (signed char)((y_bin[4] != 0) && (x_bin[1] != 0));
  pp[66] = (signed char)((y_bin[4] != 0) && (x_bin[2] != 0));
  pp[75] = (signed char)((y_bin[4] != 0) && (x_bin[3] != 0));
  pp[84] = (signed char)((y_bin[4] != 0) && (x_bin[4] != 0));
  pp[93] = 0;
  for (i0 = 0; i0 < 4; i0++) {
    pp[4 + 9 * i0] = 0;
  }

  pp[40] = (signed char)((y_bin[3] != 0) && (x_bin[0] != 0));
  pp[49] = (signed char)((y_bin[3] != 0) && (x_bin[1] != 0));
  pp[58] = (signed char)((y_bin[3] != 0) && (x_bin[2] != 0));
  pp[67] = (signed char)((y_bin[3] != 0) && (x_bin[3] != 0));
  pp[76] = (signed char)((y_bin[3] != 0) && (x_bin[4] != 0));
  pp[85] = (signed char)((y_bin[3] != 0) && (x_bin[5] != 0));
  pp[94] = (signed char)((y_bin[3] != 0) && (x_bin[6] != 0));
  for (i0 = 0; i0 < 3; i0++) {
    pp[5 + 9 * i0] = 0;
  }

  pp[32] = (signed char)((y_bin[2] != 0) && (x_bin[0] != 0));
  pp[41] = (signed char)((y_bin[2] != 0) && (x_bin[1] != 0));
  pp[50] = (signed char)((y_bin[2] != 0) && (x_bin[2] != 0));
  pp[59] = (signed char)((y_bin[2] != 0) && (x_bin[3] != 0));
  pp[68] = (signed char)((y_bin[2] != 0) && (x_bin[4] != 0));
  pp[77] = (signed char)((y_bin[2] != 0) && (x_bin[5] != 0));
  pp[86] = (signed char)((y_bin[2] != 0) && (x_bin[6] != 0));
  pp[95] = (signed char)((y_bin[2] != 0) && (x_bin[7] != 0));
  for (i0 = 0; i0 < 2; i0++) {
    pp[6 + 9 * i0] = 0;
  }

  pp[24] = (signed char)((y_bin[1] != 0) && (x_bin[0] != 0));
  pp[33] = (signed char)((y_bin[1] != 0) && (x_bin[1] != 0));
  pp[42] = (signed char)((y_bin[1] != 0) && (x_bin[2] != 0));
  pp[51] = (signed char)((y_bin[1] != 0) && (x_bin[3] != 0));
  pp[60] = (signed char)((y_bin[1] != 0) && (x_bin[4] != 0));
  pp[69] = (signed char)((y_bin[1] != 0) && (x_bin[5] != 0));
  pp[78] = (signed char)((y_bin[1] != 0) && (x_bin[6] != 0));
  pp[87] = (signed char)((y_bin[1] != 0) && (x_bin[7] != 0));
  pp[96] = 0;
  pp[7] = 0;
  pp[16] = (signed char)((y_bin[0] != 0) && (x_bin[0] != 0));
  pp[25] = (signed char)((y_bin[0] != 0) && (x_bin[1] != 0));
  pp[34] = (signed char)((y_bin[0] != 0) && (x_bin[2] != 0));
  pp[43] = (signed char)((y_bin[0] != 0) && (x_bin[3] != 0));
  pp[52] = (signed char)((y_bin[0] != 0) && (x_bin[4] != 0));
  pp[61] = (signed char)((y_bin[0] != 0) && (x_bin[5] != 0));
  pp[70] = (signed char)((y_bin[0] != 0) && (x_bin[6] != 0));
  pp[79] = (signed char)((y_bin[0] != 0) && (x_bin[7] != 0));
  pp[88] = (signed char)((y_bin[5] != 0) && (x_bin[4] != 0));
  pp[97] = 0;
  pp[8] = 0;
  pp[17] = 0;
  pp[26] = 0;
  pp[35] = 0;
  pp[44] = 0;
  pp[53] = 0;
  pp[62] = 0;
  pp[71] = 0;
  pp[80] = 1;
  pp[89] = (signed char)((y_bin[4] != 0) && (x_bin[5] != 0));
  pp[98] = 0;
  for (i = 0; i < 9; i++) {
    for (i0 = 0; i0 < 11; i0++) {
      dv0[i0] = pp[i + 9 * i0];
    }

    fliplr(dv0);
    pp_dec[i] = bi2de(dv0);
  }

  d0 = rt_roundd_snf(sum(pp_dec));
  if (d0 < 4.294967296E+9) {
    if (d0 >= 0.0) {
      res = (unsigned int)d0;
    } else {
      res = 0U;
    }
  } else if (d0 >= 4.294967296E+9) {
    res = MAX_uint32_T;
  } else {
    res = 0U;
  }

  return res;
}

//
// File trailer for TBM.cpp
//
// [EOF]
//
