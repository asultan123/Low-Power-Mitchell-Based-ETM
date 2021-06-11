% approx 7-3 compressor based on approximate AMA5
function [S3,S2,S1] = Approx7to3_AMA5(X7,X6,X5,X4,X3,X2,X1)
[C11,S11]=AMA5FA(X4,X3,X2);
[C12,S12]=AMA5FA(X7,X6,X5);
[CFF,S1]=AMA5FA(S12,S11,X1);
[S3,S2]=AMA5FA(C12,C11,CFF);
end