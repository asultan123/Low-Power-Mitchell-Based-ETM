% approx 4 to 3 compressor based on approximate MA5
 function [S3,S2,S1] = Approx4to3_AMA5(X4,X3,X2,X1)
[C11,S11]=AMA5FA(X4,X3,X2);
[C12,S1]=HalfAdder(S11,X1);
[S3,S2]=HalfAdder(C12,C11);


end