@echo off
set MATLAB=C:\PROGRA~1\MATLAB\R2017b
set MATLAB_ARCH=win64
set MATLAB_BIN="C:\Program Files\MATLAB\R2017b\bin"
set ENTRYPOINT=mexFunction
set OUTDIR=.\
set LIB_NAME=ApproxMatMult8x8_mex
set MEX_NAME=ApproxMatMult8x8_mex
set MEX_EXT=.mexw64
call setEnv.bat
echo # Make settings for ApproxMatMult8x8 > ApproxMatMult8x8_mex.mki
echo COMPILER=%COMPILER%>> ApproxMatMult8x8_mex.mki
echo COMPFLAGS=%COMPFLAGS%>> ApproxMatMult8x8_mex.mki
echo OPTIMFLAGS=%OPTIMFLAGS%>> ApproxMatMult8x8_mex.mki
echo DEBUGFLAGS=%DEBUGFLAGS%>> ApproxMatMult8x8_mex.mki
echo LINKER=%LINKER%>> ApproxMatMult8x8_mex.mki
echo LINKFLAGS=%LINKFLAGS%>> ApproxMatMult8x8_mex.mki
echo LINKOPTIMFLAGS=%LINKOPTIMFLAGS%>> ApproxMatMult8x8_mex.mki
echo LINKDEBUGFLAGS=%LINKDEBUGFLAGS%>> ApproxMatMult8x8_mex.mki
echo MATLAB_ARCH=%MATLAB_ARCH%>> ApproxMatMult8x8_mex.mki
echo OMPFLAGS= >> ApproxMatMult8x8_mex.mki
echo OMPLINKFLAGS= >> ApproxMatMult8x8_mex.mki
echo EMC_COMPILER=msvc150>> ApproxMatMult8x8_mex.mki
echo EMC_CONFIG=optim>> ApproxMatMult8x8_mex.mki
"C:\Program Files\MATLAB\R2017b\bin\win64\gmake" -B -f ApproxMatMult8x8_mex.mk
