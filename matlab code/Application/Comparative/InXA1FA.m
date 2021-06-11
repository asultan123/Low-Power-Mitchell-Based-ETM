% InExact Adder 1 InXA1
function [InXA1Cout,InXA1Sum ] = InXA1FA(X,Y,Cin)

P1 = xor(X,Y);
InXA1Sum=xor(P1,Cin);
InXA1Cout=Cin;

end