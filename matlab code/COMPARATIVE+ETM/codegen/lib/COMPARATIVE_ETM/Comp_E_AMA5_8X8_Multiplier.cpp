//
// File: Comp_E_AMA5_8X8_Multiplier.cpp
//
// MATLAB Coder version            : 3.4
// C/C++ source code generated on  : 31-Aug-2018 21:26:41
//

// Include Files
#include "rt_nonfinite.h"
#include "COMPARATIVE_ETM.h"
#include "Comp_E_AMA5_8X8_Multiplier.h"
#include "bi2de.h"
#include "de2bi.h"
#include "MAFA.h"
#include "HalfAdder.h"

// Function Definitions

//
// Arguments    : unsigned char A
//                unsigned char B
// Return Type  : double
//
double Comp_E_AMA5_8X8_Multiplier(unsigned char A, unsigned char B)
{
  double C;
  unsigned char Abin[8];
  unsigned char Bbin[8];
  int i;
  int j;
  signed char PP[64];
  boolean_T X;
  boolean_T x4;
  boolean_T S3;
  boolean_T y6;
  boolean_T CHF;
  boolean_T x6;
  boolean_T C11;
  boolean_T S11;
  boolean_T C16;
  boolean_T S4;
  boolean_T b_S11;
  boolean_T C12;
  boolean_T x9;
  boolean_T S2;
  boolean_T b_S3;
  boolean_T b_X;
  boolean_T S1;
  boolean_T b_S2;
  boolean_T c_S3;
  boolean_T b_S1;
  boolean_T c_S2;
  boolean_T c_S1;
  boolean_T y14;
  boolean_T w10;
  boolean_T f9;
  boolean_T b_C12;
  boolean_T w13;
  boolean_T f13;
  signed char input1[15];
  signed char input2[15];
  double pp;
  double d;
  double b_d;
  double b_Abin[16];
  double b_Bbin[16];
  signed char Cin[17];
  signed char S[16];

  // %%% CEM5
  // 8X8  Exact-approximate compressor AMA5
  de2bi(A, Abin);
  de2bi(B, Bbin);

  // (R,C)
  for (i = 0; i < 8; i++) {
    //  row   generate partial products
    for (j = 0; j < 8; j++) {
      //  column
      PP[i + (j << 3)] = (signed char)((Abin[j] != 0) && (Bbin[i] != 0));

      //  inner loop   PP(R,C)
    }
  }

  // ..................................................
  //  Approximate MA5
  //  Cin is discarded
  //  approx 4 to 3 compressor based on approximate MA5
  //  Approximate MA5
  //  Cin is discarded
  HalfAdder((double)PP[17], (double)PP[3], &X, &x4);

  //  approx 5-3 compressor based on approximate AMA5
  //  Approximate MA5
  //  Cin is discarded
  //  Approximate MA5
  //  Cin is discarded
  HalfAdder((double)PP[25], (double)PP[32], &S3, &y6);

  //  approx 6-3 compressor based on approximate AMA5
  //  Approximate MA5
  //  Cin is discarded
  //  Approximate MA5
  //  Cin is discarded
  HalfAdder((double)PP[33], (double)PP[12], &CHF, &x6);

  //  Approximate MA5
  //  Cin is discarded
  //  approx 7-3 compressor based on approximate AMA5
  //  Approximate MA5
  //  Cin is discarded
  //  Approximate MA5
  //  Cin is discarded
  //  Approximate MA5
  //  Cin is discarded
  //  Approximate MA5
  //  Cin is discarded
  //  approx 8-4 compressor based on approximate AMA5
  HalfAdder((double)PP[14], (double)PP[7], &C11, &S11);

  //  Approximate MA5
  //  Cin is discarded
  //  Approximate MA5
  //  Cin is discarded
  //  Approximate MA5
  //  Cin is discarded
  C16 = (S11 && (PP[35] != 0));
  S4 = (C16 && C11);
  S3 = ((C16 ^ C11) != 0);

  //  Exact 7 to 3 compressor based on exact FA
  c_MAFA((double)PP[36], (double)PP[29], (double)PP[22], &C11, &b_S11);
  c_MAFA((double)PP[57], (double)PP[50], (double)PP[43], &C12, &CHF);
  d_MAFA(CHF, b_S11, (double)PP[15], &C16, &x9);

  //  X=[0 0 0 0 1 1 1 1];
  //  Y=[0 0 1 1 0 0 1 1];
  //  Cin=[0 1 0 1 0 1 0 1];
  S2 = ((((C12 ^ C11) != 0) ^ C16) != 0);
  b_S3 = ((C12 && C11) || (C11 && C16) || (C12 && C16));

  // result=S1+S2*2+S3*4;
  //    X1=[0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1];
  //    X2=[0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1];
  //    X3=[0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1];
  //    X4=[0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1];
  //    X5=[0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1];
  //  Exact 6 to 3 compressor based on exact FA
  c_MAFA((double)PP[37], (double)PP[30], (double)PP[23], &C11, &b_S11);
  c_MAFA((double)PP[58], (double)PP[51], (double)PP[44], &b_X, &C16);
  CHF = (C16 && b_S11);
  S1 = ((C16 ^ b_S11) != 0);

  //  X=[0 0 0 0 1 1 1 1];
  //  Y=[0 0 1 1 0 0 1 1];
  //  Cin=[0 1 0 1 0 1 0 1];
  b_S2 = ((((b_X ^ C11) != 0) ^ CHF) != 0);
  c_S3 = ((b_X && C11) || (C11 && CHF) || (b_X && CHF));

  // result=S1+S2*2+S3*4;
  //    X1=[0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1];
  //    X2=[0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1];
  //    X3=[0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1];
  //    X4=[0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1];
  //    X5=[0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1];
  //  Exact 5 to 3 compressor based on exact FA
  c_MAFA((double)PP[59], (double)PP[52], (double)PP[45], &C11, &b_X);

  //  X=[0 0 0 0 1 1 1 1];
  //  Y=[0 0 1 1 0 0 1 1];
  //  Cin=[0 1 0 1 0 1 0 1];
  b_S1 = ((((b_X ^ (PP[38] != 0)) != 0) ^ (PP[31] != 0)) != 0);
  C12 = ((b_X && (PP[38] != 0)) || ((PP[38] != 0) && (PP[31] != 0)) || (b_X &&
          (PP[31] != 0)));
  b_S11 = (C12 && C11);
  c_S2 = ((C12 ^ C11) != 0);

  // result=S1+S2*2+S3*4;
  //   X1=[0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1];
  //   X2=[0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1];
  //   X3=[0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1];
  //   X4=[0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1];
  //  Exact 4 to 3 compressor based on exact FA
  c_MAFA((double)PP[60], (double)PP[53], (double)PP[46], &C11, &b_X);
  C12 = (b_X && (PP[39] != 0));
  c_S1 = ((b_X ^ (PP[39] != 0)) != 0);
  C16 = ((C12 ^ C11) != 0);

  // result=S1+S2*2+S3*4;
  c_MAFA((double)PP[61], (double)PP[54], (double)PP[47], &y14, &CHF);

  // -------------------------------------------------
  //  Approximate MA5
  //  Cin is discarded
  //  Approximate MA5
  //  Cin is discarded
  //  Approximate MA5
  //  Cin is discarded
  d_MAFA(x9, (S11 ^ (PP[35] != 0)) != 0, (double)PP[48], &w10, &f9);

  //  X=[0 0 0 0 1 1 1 1];
  //  Y=[0 0 1 1 0 0 1 1];
  //  Cin=[0 1 0 1 0 1 0 1];
  //   X1=[0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1];
  //   X2=[0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1];
  //   X3=[0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1];
  //   X4=[0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1];
  //  Exact 4 to 3 compressor based on exact FA
  //  X=[0 0 0 0 1 1 1 1];
  //  Y=[0 0 1 1 0 0 1 1];
  //  Cin=[0 1 0 1 0 1 0 1];
  S11 = ((((b_S1 ^ b_S2) != 0) ^ b_S3) != 0);
  x9 = ((b_S1 && b_S2) || (b_S2 && b_S3) || (b_S1 && b_S3));
  b_C12 = (S11 && S4);
  b_S3 = (b_C12 && x9);

  // result=S1+S2*2+S3*4;
  //  X=[0 0 0 0 1 1 1 1];
  //  Y=[0 0 1 1 0 0 1 1];
  //  Cin=[0 1 0 1 0 1 0 1];
  w13 = ((c_S1 && c_S2) || (c_S2 && c_S3) || (c_S1 && c_S3));

  //  X=[0 0 0 0 1 1 1 1];
  //  Y=[0 0 1 1 0 0 1 1];
  //  Cin=[0 1 0 1 0 1 0 1];
  f13 = ((((CHF ^ C16) != 0) ^ b_S11) != 0);
  C16 = ((CHF && C16) || (C16 && b_S11) || (CHF && b_S11));

  //   X1=[0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1];
  //   X2=[0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1];
  //   X3=[0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1];
  //   X4=[0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1];
  //  Exact 4 to 3 compressor based on exact FA
  d_MAFA(y14, C12 && C11, (double)PP[62], &CHF, &b_X);
  C12 = (b_X && (PP[55] != 0));
  b_S1 = ((b_X ^ (PP[55] != 0)) != 0);
  b_S2 = ((C12 ^ CHF) != 0);

  // result=S1+S2*2+S3*4;
  // ...........................................
  //  X=[0 0 0 0 1 1 1 1];
  //  Y=[0 0 1 1 0 0 1 1];
  //  Cin=[0 1 0 1 0 1 0 1];
  // ................................................
  input1[0] = PP[8];
  input1[1] = PP[9];
  input1[2] = (signed char)x4;
  input1[3] = PP[11];
  input1[4] = (signed char)y6;
  input1[5] = PP[19];
  input1[6] = PP[27];
  input1[7] = (signed char)f9;
  input1[8] = (signed char)((((S1 ^ S2) != 0) ^ S3) != 0);
  input1[9] = (signed char)((S11 ^ S4) != 0);
  input1[10] = (signed char)((((c_S1 ^ c_S2) != 0) ^ c_S3) != 0);
  input1[11] = (signed char)((((f13 ^ w13) != 0) ^ b_S3) != 0);
  input1[12] = (signed char)((b_S1 ^ C16) != 0);
  input1[13] = (signed char)(((PP[63] != 0) ^ b_S2) != 0);
  input1[14] = (signed char)(C12 && CHF);
  input2[0] = PP[1];
  input2[1] = 0;
  input2[2] = PP[16];
  input2[3] = (signed char)((X ^ (PP[24] != 0)) != 0);
  input2[4] = 0;
  input2[5] = (signed char)x6;
  input2[6] = PP[20];
  input2[7] = PP[28];
  input2[8] = (signed char)w10;
  input2[9] = (signed char)((S1 && S2) || (S2 && S3) || (S1 && S3));
  input2[10] = (signed char)((b_C12 ^ x9) != 0);
  input2[11] = 0;
  input2[12] = (signed char)((f13 && w13) || (w13 && b_S3) || (f13 && b_S3));
  input2[13] = (signed char)(b_S1 && C16);
  input2[14] = (signed char)((PP[63] != 0) && b_S2);
  pp = 1.0;
  d = 0.0;
  for (j = 0; j < 15; j++) {
    UPDATE_DECIMAL(&d, pp, (double)input1[j]);
    pp *= 2.0;
  }

  pp = 1.0;
  b_d = 0.0;
  for (j = 0; j < 15; j++) {
    UPDATE_DECIMAL(&b_d, pp, (double)input2[j]);
    pp *= 2.0;
  }

  b_de2bi(d, b_Abin);

  //  make the size one bit larger to get Cout
  b_de2bi(b_d, b_Bbin);

  // (R,C)
  for (i = 0; i < 17; i++) {
    Cin[i] = 0;
  }

  for (i = 0; i < 16; i++) {
    c_MAFA(b_Abin[i], b_Bbin[i], (double)Cin[i], &C16, &CHF);
    Cin[i + 1] = (signed char)C16;
    S[i] = (signed char)CHF;
  }

  b_Bbin[0] = S[0];
  b_Bbin[1] = S[1];
  b_Bbin[2] = S[2];
  b_Bbin[3] = S[3];
  b_Bbin[4] = S[4];
  b_Bbin[5] = S[5];
  b_Bbin[6] = S[6];
  b_Bbin[7] = S[7];
  b_Bbin[8] = S[8];
  b_Bbin[9] = S[9];
  b_Bbin[10] = S[10];
  b_Bbin[11] = S[11];
  b_Bbin[12] = S[12];
  b_Bbin[13] = S[13];
  b_Bbin[14] = S[14];
  b_Bbin[15] = S[15];
  pp = 1.0;
  d = 0.0;
  for (j = 0; j < 16; j++) {
    UPDATE_DECIMAL(&d, pp, b_Bbin[j]);
    pp *= 2.0;
  }

  b_de2bi(d, b_Abin);
  b_Bbin[0] = PP[0];
  memcpy(&b_Bbin[1], &b_Abin[0], 15U * sizeof(double));
  pp = 1.0;
  C = 0.0;
  for (j = 0; j < 16; j++) {
    UPDATE_DECIMAL(&C, pp, b_Bbin[j]);
    pp *= 2.0;
  }

  return C;
}

//
// File trailer for Comp_E_AMA5_8X8_Multiplier.cpp
//
// [EOF]
//
