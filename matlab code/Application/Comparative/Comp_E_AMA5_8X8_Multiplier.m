%%%% CEM5
%8X8  Exact-approximate compressor AMA5
 function C=Comp_E_AMA5_8X8_Multiplier(A,B)

Abin=de2bi(A,8);
Bbin=de2bi(B,8);

PP=zeros(8,8);   %(R,C)
for i=1:8    %% row   generate partial products  
    for j=1:8   % column
    PP(i,j)=and(Abin(j),Bbin(i));  % inner loop   PP(R,C)
    end
end
S1=PP(1,1) ;
%..................................................
[y4,x3]=AMA5FA(PP(1,3),PP(2,2),PP(3,1));
[z6,y5,x4]=Approx4to3_AMA5(PP(1,4),PP(2,3),PP(3,2),PP(4,1));
[z7,y6,x5]=Approx5to3_AMA5(PP(1,5),PP(2,4),PP(3,3),PP(4,2),PP(5,1));
[z8,y7,x6]=Approx6to3_AMA5(PP(1,6),PP(2,5),PP(3,4),PP(4,3),PP(5,2),PP(6,1));
[z9,y8,x7]=Approx7to3_AMA5(PP(1,7),PP(2,6),PP(3,5),PP(4,4),PP(5,3),PP(6,2),PP(7,1));
[k11,z10,y9,x8]=Approx8to4_AMA5(PP(1,8),PP(2,7),PP(3,6),PP(4,5),PP(5,4),PP(6,3),PP(7,2),PP(8,1));
[z11,y10,x9]=Exact7to3(PP(2,8),PP(3,7),PP(4,6),PP(5,5),PP(6,4),PP(7,3),PP(8,2));
[z12,y11,x10]=Exact6to3(PP(3,8),PP(4,7),PP(5,6),PP(6,5),PP(7,4),PP(8,3));
[z13,y12,x11]=Exact5to3(PP(4,8),PP(5,7),PP(6,6),PP(7,5),PP(8,4));
[z14,y13,x12]=Exact4to3(PP(5,8),PP(6,7),PP(7,6),PP(8,5));
[y14,x13]=MAFA(PP(6,8),PP(7,7),PP(8,6));
%-------------------------------------------------
[w7,f6]=AMA5FA(x6,y6,z6);
[w8,f7]=AMA5FA(x7,y7,z7);
[w9,f8]=AMA5FA(x8,y8,z8);
[w10,f9]=MAFA(x9,y9,z9);
[w11,f10]=MAFA(x10,y10,z10);
[m13,w12,f11]=Exact4to3(x11,y11,z11,k11);
[w13,f12]=MAFA(x12,y12,z12);
[w14,f13]=MAFA(x13,y13,z13);
[m16,w15,f14]=Exact4to3(y14,z14,PP(7,8),PP(8,7));
%...........................................
[TT14,RR13]=MAFA(f13,w13,m13);
[TT15,RR14]=HalfAdder(f14,w14);
[TT16,RR15]=HalfAdder(PP(8,8),w15);
%................................................

input1=[PP(1,2) x3 x4 x5 f6 f7 f8 f9 f10 f11 f12 RR13 RR14 RR15 m16];
input2=[PP(2,1) 0 y4 y5 0 w7 w8 w9 w10 w11 w12 0 TT14 TT15 TT16];

in1=bi2de(input1);
in2=bi2de(input2);
R=RCA_15bits(in1,in2);
Rbin=de2bi(R,16);

output=[S1 Rbin(1) Rbin(2) Rbin(3) Rbin(4) Rbin(5) Rbin(6) Rbin(7) Rbin(8) Rbin(9) Rbin(10) Rbin(11) Rbin(12) Rbin(13) Rbin(14) Rbin(15)];
C=bi2de(output);
end
