/*
 * mult_selector.c
 *
 * Code generation for function 'mult_selector'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
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

/* Variable Definitions */
static emlrtDCInfo emlrtDCI = { 2,     /* lineNo */
  12,                                  /* colNo */
  "mult_selector",                     /* fName */
  "C:\\Users\\USER\\Documents\\One Lab\\Comparing_multipliers\\Application\\Application\\EVO\\mult_selector.m",/* pName */
  1                                    /* checkKind */
};

/* Function Definitions */
uint16_T mult_selector(const emlrtStack *sp, uint8_T a, uint8_T b, real_T sel)
{
  uint16_T res;
  if (sel != (int32_T)muDoubleScalarFloor(sel)) {
    emlrtIntegerCheckR2012b(sel, &emlrtDCI, sp);
  }

  switch ((int32_T)sel) {
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

/* End of code generation (mult_selector.c) */
