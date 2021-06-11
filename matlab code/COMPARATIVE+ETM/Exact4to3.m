% Exact 4 to 3 compressor based on exact FA
 function [S3,S2,S1] = Exact4to3(X4,X3,X2,X1)

%  X1=[0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1];
%  X2=[0 0 0 0 1 1 1 1 0 0 0 0 1 1 1 1];
%  X3=[0 0 1 1 0 0 1 1 0 0 1 1 0 0 1 1];
%  X4=[0 1 0 1 0 1 0 1 0 1 0 1 0 1 0 1];

[C11,S11]=MAFA(X4,X3,X2);
[C12,S1]=HalfAdder(S11,X1);
[S3,S2]=HalfAdder(C12,C11);

%result=S1+S2*2+S3*4;

end