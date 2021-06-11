% Exact 7 to 3 compressor based on exact FA
function [S3,S2,S1] = Exact7to3(X7,X6,X5,X4,X3,X2,X1)

[C11,S11]=MAFA(X4,X3,X2);
[C12,S12]=MAFA(X7,X6,X5);
[CFF,S1]=MAFA(S12,S11,X1);
[S3,S2]=MAFA(C12,C11,CFF);

%result=S1+S2*2+S3*4;

end