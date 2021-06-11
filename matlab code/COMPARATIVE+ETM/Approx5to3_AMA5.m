% approx 5-3 compressor based on approximate AMA5
function [S3,S2,S1] = Approx5to3_AMA5(X5,X4,X3,X2,X1)
[C11,S11]=AMA5FA(X5,X4,X3);
[C12,S1]=AMA5FA(S11,X2,X1);
[S3,S2]=HalfAdder(C12,C11);
end