% approx 6-3 compressor based on approximate AMA5
function [S3,S2,S1] = Approx6to3_AMA5(X6,X5,X4,X3,X2,X1)
[C11,S11]=AMA5FA(X3,X2,X1);
[C12,S12]=AMA5FA(X6,X5,X4);
[CHF,S1]=HalfAdder(S12,S11);
[S3,S2]=AMA5FA(C12,C11,CHF);
end