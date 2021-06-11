/*
 * _coder_ApproxMatMult8x8_api.c
 *
 * Code generation for function '_coder_ApproxMatMult8x8_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "ApproxMatMult8x8.h"
#include "_coder_ApproxMatMult8x8_api.h"
#include "ApproxMatMult8x8_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[64];
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[64];
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *T, const
  char_T *identifier))[64];
static const mxArray *emlrt_marshallOut(const real_T u[64]);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[64]
{
  real_T (*y)[64];
  y = c_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[64]
{
  real_T (*ret)[64];
  static const int32_T dims[2] = { 8, 8 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[64])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *T, const
  char_T *identifier))[64]
{
  real_T (*y)[64];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(T), &thisId);
  emlrtDestroyArray(&T);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u[64])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv1[2] = { 0, 0 };

  static const int32_T iv2[2] = { 8, 8 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv1, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m0, iv2, 2);
  emlrtAssign(&y, m0);
  return y;
}

void ApproxMatMult8x8_api(const mxArray * const prhs[2], const mxArray *plhs[1])
{
  real_T (*res)[64];
  real_T (*T)[64];
  real_T (*I)[64];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  res = (real_T (*)[64])mxMalloc(sizeof(real_T [64]));

  /* Marshall function inputs */
  T = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "T");
  I = emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "I");

  /* Invoke the target function */
  ApproxMatMult8x8(&st, *T, *I, *res);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*res);
}

/* End of code generation (_coder_ApproxMatMult8x8_api.c) */
