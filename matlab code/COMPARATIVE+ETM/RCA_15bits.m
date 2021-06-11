 function C=RCA_15bits(A,B)
Abin=de2bi(A,16);    % make the size one bit larger to get Cout
Bbin=de2bi(B,16);

S=zeros(1,16);   %(R,C)
Cin=zeros(1,17);
for i=1:16
    [Cin(i+1),S(i)]=MAFA(Abin(i),Bbin(i),Cin(i));  
end

output=[S(1) S(2) S(3) S(4) S(5) S(6) S(7) S(8) S(9) S(10) S(11) S(12) S(13) S(14) S(15) S(16)];
C=bi2de(output);

 end