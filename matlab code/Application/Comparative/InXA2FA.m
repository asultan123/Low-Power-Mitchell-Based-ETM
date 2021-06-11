% InExact Adder 2 InXA2
function [InXA2Cout,InXA2Sum ] = InXA2FA(X,Y,Cin)

P1 = xor(X,Y);
InXA2Sum= or(P1,Cin);

G1=and(X,Y);
P2=and(Cin,P1);

InXA2Cout=or(G1,P2);


end