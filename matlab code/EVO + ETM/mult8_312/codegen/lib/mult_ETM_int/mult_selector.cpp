//
// File: mult_selector.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 16:34:01
//

// Include Files
#include "rt_nonfinite.h"
#include "mult_ETM_int.h"
#include "mult_selector.h"
#include "mul8_347.h"
#include "mul8_429.h"
#include "mul8_198.h"
#include "mul8_236.h"
#include "mul8_435.h"
#include "mul8_312.h"
#include "mul8_478.h"
#include "mul8_476.h"
#include "mul8_474.h"
#include "mul8_218.h"
#include "mul8_433.h"

// Function Definitions

//
// Arguments    : unsigned char a
//                unsigned char b
//                double sel
// Return Type  : unsigned short
//
unsigned short mult_selector(unsigned char a, unsigned char b, double sel)
{
  unsigned short res;
  switch ((int)sel) {
   case 0:
    res = mul8_433(a, b);
    break;

   case 1:
    res = mul8_218(a, b);
    break;

   case 2:
    res = mul8_474(a, b);
    break;

   case 3:
    res = mul8_476(a, b);
    break;

   case 4:
    res = mul8_478(a, b);
    break;

   case 5:
    res = mul8_312(a, b);
    break;

   case 6:
    res = mul8_435(a, b);
    break;

   case 7:
    res = mul8_236(a, b);
    break;

   case 8:
    res = mul8_198(a, b);
    break;

   case 9:
    res = mul8_429(a, b);
    break;

   case 10:
    res = mul8_347(a, b);
    break;

   default:
    res = 0;
    break;
  }

  return res;
}

//
// File trailer for mult_selector.cpp
//
// [EOF]
//
