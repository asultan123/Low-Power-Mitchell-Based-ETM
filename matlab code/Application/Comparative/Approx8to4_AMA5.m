% approx 8-4 compressor based on approximate AMA5
function [S4,S3,S2,S1] = Approx8to4_AMA5(X8,X7,X6,X5,X4,X3,X2,X1)

[C11,S11]=HalfAdder(X2,X1);
[C12,S12]=AMA5FA(X5,X4,X3);
[C13,S13]=AMA5FA(X8,X7,X6);

[C14,S1]=AMA5FA(S11,S12,S13);
[C15,S14]=AMA5FA(C11,C12,C13);

[C16,S2]=HalfAdder(C14,S14);
[S4,S3]=HalfAdder(C16,C15);


end