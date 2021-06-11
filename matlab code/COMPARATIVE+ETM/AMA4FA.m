% Approximate MA4
function [AMA4Cout,AMA4Sum ] = AMA4FA(X,Y,Cin)

Xbar=not(X);
Ybar=not(Y);
Cinbar=not(Cin);

m1=and(and(Xbar,Ybar),Cin);
m3=and(and(Xbar,Y),Cin);
m7=and(and(X,Y),Cin);

AMA4Sum=or(m1,or(m3,m7));
AMA4Cout= X;

end