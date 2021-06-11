//
// File: mult_selector.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 21:26:41
//

// Include Files
#include "rt_nonfinite.h"
#include "COMPARATIVE_ETM.h"
#include "mult_selector.h"
#include "Comp_E_AMA5_8X8_Multiplier.h"
#include "bi2de.h"
#include "MAFA.h"
#include "AMA4FA.h"
#include "HalfAdder.h"
#include "de2bi.h"

// Function Definitions

//
// Arguments    : unsigned char a
//                unsigned char b
//                double sel
// Return Type  : double
//
double mult_selector(unsigned char a, unsigned char b, double sel)
{
  double res;
  unsigned char Abin[8];
  unsigned char Bbin[8];
  int i;
  signed char PP[64];
  boolean_T Cin;
  boolean_T S1;
  int j;
  boolean_T Xbar;
  boolean_T S22;
  double pp;
  double C25;
  boolean_T S25;
  boolean_T S26;
  boolean_T S27;
  boolean_T C29;
  boolean_T S28;
  boolean_T S32;
  boolean_T S33;
  boolean_T C39;
  boolean_T S42;
  double C45;
  boolean_T C49;
  boolean_T S52;
  boolean_T S62;
  boolean_T S72;
  boolean_T S77;
  boolean_T C79;
  boolean_T S78;
  signed char output[16];
  switch ((int)sel) {
   case 0:
    //  C = A X B
    // convert input from decimal to 4 bits binary
    // %%%EM4
    //  Approximate 8X8 Array Multiplier based on AMA4
    de2bi(a, Abin);
    de2bi(b, Bbin);

    // (R,C)
    for (i = 0; i < 8; i++) {
      //  row   generate partial products
      for (j = 0; j < 8; j++) {
        //  column
        PP[i + (j << 3)] = (signed char)((Abin[j] != 0) && (Bbin[i] != 0));

        //  inner loop   PP(R,C)
      }
    }

    HalfAdder((double)PP[1], (double)PP[8], &Cin, &S1);

    //  Approximate MA4
    Xbar = !(PP[16] != 0);
    S22 = ((Xbar && (!(PP[9] != 0)) && Cin) || ((Xbar && (PP[9] != 0) && Cin) ||
            ((PP[16] != 0) && (PP[9] != 0) && Cin)));
    AMA4FA((double)PP[24], (double)PP[17], (double)PP[16], &pp, &Cin);
    AMA4FA((double)PP[32], (double)PP[25], pp, &C25, &Xbar);
    AMA4FA((double)PP[40], (double)PP[33], C25, &pp, &S25);
    AMA4FA((double)PP[48], (double)PP[41], pp, &C25, &S26);
    AMA4FA((double)PP[56], (double)PP[49], C25, &pp, &S27);
    HalfAdder((double)PP[57], pp, &C29, &S28);

    //  first row of FAs
    b_AMA4FA((double)PP[10], Cin, (PP[2] != 0) && S22, &pp, &S32);
    c_AMA4FA((double)PP[18], Xbar, pp, &C25, &S33);
    c_AMA4FA((double)PP[26], S25, C25, &pp, &Xbar);
    c_AMA4FA((double)PP[34], S26, pp, &C25, &S25);
    c_AMA4FA((double)PP[42], S27, C25, &pp, &S26);
    MAFA((double)PP[50], S28, pp, &Cin, &S27);
    b_MAFA((double)PP[58], C29, Cin, &C39, &S28);

    //  second row of FAS
    b_AMA4FA((double)PP[11], S33, (PP[3] != 0) && S32, &pp, &S42);
    c_AMA4FA((double)PP[19], Xbar, pp, &C25, &C29);
    c_AMA4FA((double)PP[27], S25, C25, &C45, &S33);
    c_AMA4FA((double)PP[35], S26, C45, &pp, &S25);
    MAFA((double)PP[43], S27, pp, &Cin, &S26);
    b_MAFA((double)PP[51], S28, Cin, &Xbar, &S27);
    b_MAFA((double)PP[59], C39, Xbar, &C49, &S28);

    //  Third row of FAS
    b_AMA4FA((double)PP[12], C29, (PP[4] != 0) && S42, &pp, &S52);
    c_AMA4FA((double)PP[20], S33, pp, &C25, &C29);
    c_AMA4FA((double)PP[28], S25, C25, &pp, &S33);
    MAFA((double)PP[36], S26, pp, &Cin, &S25);
    b_MAFA((double)PP[44], S27, Cin, &Xbar, &S26);
    b_MAFA((double)PP[52], S28, Xbar, &Cin, &S27);
    b_MAFA((double)PP[60], C49, Cin, &C39, &S28);

    //  Fourth row of FA
    b_AMA4FA((double)PP[13], C29, (PP[5] != 0) && S52, &pp, &S62);
    c_AMA4FA((double)PP[21], S33, pp, &C25, &C29);
    MAFA((double)PP[29], S25, C25, &Cin, &S33);
    b_MAFA((double)PP[37], S26, Cin, &Xbar, &S25);
    b_MAFA((double)PP[45], S27, Xbar, &Cin, &S26);
    b_MAFA((double)PP[53], S28, Cin, &Xbar, &S27);
    b_MAFA((double)PP[61], C39, Xbar, &C49, &S28);

    //  5th row of FA
    b_AMA4FA((double)PP[14], C29, (PP[6] != 0) && S62, &pp, &S72);
    MAFA((double)PP[22], S33, pp, &Cin, &C29);
    b_MAFA((double)PP[30], S25, Cin, &Xbar, &C39);
    b_MAFA((double)PP[38], S26, Xbar, &Cin, &S25);
    b_MAFA((double)PP[46], S27, Cin, &Xbar, &S26);
    b_MAFA((double)PP[54], S28, Xbar, &Cin, &S77);
    b_MAFA((double)PP[62], C49, Cin, &C79, &S78);

    //  siXth row of FA
    b_MAFA((double)PP[15], C29, (PP[7] != 0) && S72, &Cin, &C49);
    b_MAFA((double)PP[23], C39, Cin, &Xbar, &S33);
    b_MAFA((double)PP[31], S25, Xbar, &Cin, &C29);
    b_MAFA((double)PP[39], S26, Cin, &Xbar, &S28);
    b_MAFA((double)PP[47], S77, Xbar, &Cin, &S27);
    b_MAFA((double)PP[55], S78, Cin, &S25, &S26);
    b_MAFA((double)PP[63], C79, S25, &Cin, &Xbar);

    //  7th row of FA
    // ************************************%
    output[0] = PP[0];
    output[1] = (signed char)S1;
    output[2] = (signed char)(((PP[2] != 0) ^ S22) != 0);
    output[3] = (signed char)(((PP[3] != 0) ^ S32) != 0);
    output[4] = (signed char)(((PP[4] != 0) ^ S42) != 0);
    output[5] = (signed char)(((PP[5] != 0) ^ S52) != 0);
    output[6] = (signed char)(((PP[6] != 0) ^ S62) != 0);
    output[7] = (signed char)(((PP[7] != 0) ^ S72) != 0);
    output[8] = (signed char)C49;
    output[9] = (signed char)S33;
    output[10] = (signed char)C29;
    output[11] = (signed char)S28;
    output[12] = (signed char)S27;
    output[13] = (signed char)S26;
    output[14] = (signed char)Xbar;
    output[15] = (signed char)Cin;
    pp = 1.0;
    res = 0.0;
    for (j = 0; j < 16; j++) {
      UPDATE_DECIMAL(&res, pp, (double)output[j]);
      pp *= 2.0;
    }
    break;

   case 1:
    res = Comp_E_AMA5_8X8_Multiplier(a, b);
    break;

   default:
    res = 0.0;
    break;
  }

  return res;
}

//
// File trailer for mult_selector.cpp
//
// [EOF]
//
