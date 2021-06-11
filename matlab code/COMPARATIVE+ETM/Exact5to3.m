% Exact 5 to 3 compressor based on exact FA
function [S3,S2,S1] = Exact5to3(X5,X4,X3,X2,X1)

%   X1=[0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1];
%   X2=[0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1];
%   X3=[0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1];
%   X4=[0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1];
%   X5=[0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1];

[C11,S11]=MAFA(X5,X4,X3);
[C12,S1]=MAFA(S11,X2,X1);
[S3,S2]=HalfAdder(C12,C11);

%result=S1+S2*2+S3*4;

end