//
// File: dec2bin.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 20:34:45
//

// Include Files
#include "rt_nonfinite.h"
#include "TBM_ETM.h"
#include "dec2bin.h"

// Function Definitions

//
// Arguments    : unsigned char d
//                char s[8]
// Return Type  : void
//
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

//
// File trailer for dec2bin.cpp
//
// [EOF]
//
