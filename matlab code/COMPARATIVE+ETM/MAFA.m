function [MAFACout,MAFASum] = MAFA(X,Y,Cin)
% X=[0 0 0 0 1 1 1 1];
% Y=[0 0 1 1 0 0 1 1];
% Cin=[0 1 0 1 0 1 0 1];

MAFASum=xor(xor(X,Y),Cin);

XY=and(X,Y);
YCin=and(Y,Cin);
XCin=and(X,Cin);

MAFACout=or(or(XY,YCin),XCin);
end
