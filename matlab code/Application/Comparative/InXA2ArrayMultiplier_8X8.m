%%%  EIn2
% Approximate 8X8 Array Multiplier based on AMA1
function C=InXA2ArrayMultiplier_8X8(A,B)
% C = A X B
%convert input from decimal to 4 bits binary
Abin=de2bi(A,8);
Bbin=de2bi(B,8);
PP=zeros(8,8);   %(R,C)
for i=1:8    %% row   generate partial products  
    for j=1:8   % column
    PP(i,j)=and(Abin(j),Bbin(i));  % inner loop   PP(R,C)
    end
end
S0=PP(1,1) ;
[C22, S1]= HalfAdder(PP(2,1),PP(1,2));
[C23, S22]= InXA2FA(PP(1,3),PP(2,2),C22);
[C24, S23]= InXA2FA(PP(1,4),PP(2,3),C23);
[C25, S24]= InXA2FA(PP(1,5),PP(2,4),C24);
[C26, S25]= InXA2FA(PP(1,6),PP(2,5),C25);
[C27, S26]= InXA2FA(PP(1,7),PP(2,6),C26);
[C28, S27]= InXA2FA(PP(1,8),PP(2,7),C27);
[C29, S28]= HalfAdder(PP(2,8),C28);    % first row of FAs

[C32, S2]= HalfAdder(PP(3,1),S22);
[C33, S32]=InXA2FA(PP(3,2),S23,C32);
[C34 ,S33]=InXA2FA(PP(3,3),S24,C33);
[C35, S34]=InXA2FA(PP(3,4),S25,C34);
[C36, S35]=InXA2FA(PP(3,5),S26,C35);
[C37 ,S36]=InXA2FA(PP(3,6),S27,C36);
[C38, S37]=MAFA(PP(3,7),S28,C37);
[C39, S38]=MAFA(PP(3,8),C29,C38);   % second row of FAS

[C42, S3]= HalfAdder(PP(4,1),S32);
[C43, S42]=InXA2FA(PP(4,2),S33,C42);
[C44 ,S43]=InXA2FA(PP(4,3),S34,C43);
[C45, S44]=InXA2FA(PP(4,4),S35,C44);
[C46, S45]=InXA2FA(PP(4,5),S36,C45);
[C47 ,S46]=MAFA(PP(4,6),S37,C46);
[C48, S47]=MAFA(PP(4,7),S38,C47);
[C49, S48]=MAFA(PP(4,8),C39,C48);   % Third row of FAS


[C52, S4]= HalfAdder(PP(5,1),S42);
[C53, S52]=InXA2FA(PP(5,2),S43,C52);
[C54 ,S53]=InXA2FA(PP(5,3),S44,C53);
[C55, S54]=InXA2FA(PP(5,4),S45,C54);
[C56, S55]=MAFA(PP(5,5),S46,C55);
[C57 ,S56]=MAFA(PP(5,6),S47,C56);
[C58, S57]=MAFA(PP(5,7),S48,C57);
[C59, S58]=MAFA(PP(5,8),C49,C58);   % Fourth row of FA

[C62,S5] = HalfAdder(PP(6,1),S52);
[C63,S62]=InXA2FA(PP(6,2),S53,C62);
[C64,S63]=InXA2FA(PP(6,3),S54,C63);
[C65,S64]=MAFA(PP(6,4),S55,C64);
[C66,S65]=MAFA(PP(6,5),S56,C65);
[C67,S66]=MAFA(PP(6,6),S57,C66);
[C68,S67]=MAFA(PP(6,7),S58,C67);
[C69,S68]=MAFA(PP(6,8),C59,C68);   % 5th row of FA

[C72,S6]= HalfAdder(PP(7,1),S62);
[C73,S72]=InXA2FA(PP(7,2),S63,C72);
[C74,S73]=MAFA(PP(7,3),S64,C73);
[C75,S74]=MAFA(PP(7,4),S65,C74);
[C76,S75]=MAFA(PP(7,5),S66,C75);
[C77,S76]=MAFA(PP(7,6),S67,C76);
[C78,S77]=MAFA(PP(7,7),S68,C77);
[C79,S78]=MAFA(PP(7,8),C69,C78);   % siXth row of FA

[C82,S7] =HalfAdder(PP(8,1),S72);
[C83,S8] =MAFA(PP(8,2),S73,C82);
[C84,S9] =MAFA(PP(8,3),S74,C83);
[C85,S10]=MAFA(PP(8,4),S75,C84);
[C86,S11]=MAFA(PP(8,5),S76,C85);
[C87,S12]=MAFA(PP(8,6),S77,C86);
[C88,S13]=MAFA(PP(8,7),S78,C87);
[S15,S14]=MAFA(PP(8,8),C79,C88);   % 7th row of FA
%************************************%
output=[S0 S1 S2 S3 S4 S5 S6 S7 S8 S9 S10 S11 S12 S13 S14 S15];
C=bi2de(output);

end 