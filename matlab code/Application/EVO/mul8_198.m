function [ c ] = mul8_198( a, b )
% Approximate function mul8_198
%  Library = EvoApprox8b
%  Circuit = mul8_198
%  Area   (180) = 5365
%  Delay  (180) = 2.330
%  Power  (180) = 1928.60
%  Area   (45) = 403
%  Delay  (45) = 0.880
%  Power  (45) = 162.70
%  Nodes = 112
%  HD = 385676
%  MAE = 575.77652
%  MSE = 635894.14844
%  MRE = 8.07 %
%  WCE = 2882
%  WCRE = 312 %
%  EP = 99.1 %
  a = uint16(a);
  b = uint16(b);
  c = 0;
  n0 = bitand(bitshift(a, -0), 1, 'uint16');
  n2 = bitand(bitshift(a, -1), 1, 'uint16');
  n4 = bitand(bitshift(a, -2), 1, 'uint16');
  n6 = bitand(bitshift(a, -3), 1, 'uint16');
  n8 = bitand(bitshift(a, -4), 1, 'uint16');
  n10 = bitand(bitshift(a, -5), 1, 'uint16');
  n12 = bitand(bitshift(a, -6), 1, 'uint16');
  n14 = bitand(bitshift(a, -7), 1, 'uint16');
  n16 = bitand(bitshift(b, -0), 1, 'uint16');
  n18 = bitand(bitshift(b, -1), 1, 'uint16');
  n20 = bitand(bitshift(b, -2), 1, 'uint16');
  n22 = bitand(bitshift(b, -3), 1, 'uint16');
  n24 = bitand(bitshift(b, -4), 1, 'uint16');
  n26 = bitand(bitshift(b, -5), 1, 'uint16');
  n28 = bitand(bitshift(b, -6), 1, 'uint16');
  n30 = bitand(bitshift(b, -7), 1, 'uint16');
  n32 = bitand(n18, n12);
  n35 = bitor(bitor(bitand(n14, n16), bitand(n16, n26)), bitand(n14, n26));
  n37 = bitand(n18, n4);
  n40 = bitcmp(bitxor(n12, n12));
  n41 = bitcmp(bitxor(n12, n12));
  n42 = bitcmp(bitand(n6, n28));
  n46 = bitand(n26, n8);
  n49 = bitcmp(bitor(bitand(n18, n14), n32));
  n51 = bitor(bitor(bitand(n41, n0), bitand(n0, n2)), bitand(n41, n2));
  n53 = bitcmp(bitand(bitor(n12, n51), n30));
  n54 = n41;
  n57 = bitor(n2, n54);
  n61 = bitcmp(bitand(n12, bitand(n28, n14)));
  n65 = n41;
  n66 = n65;
  n67 = n65;
  n68 = bitcmp(bitor(n65, n66));
  n69 = bitcmp(bitor(n65, n66));
  n73 = bitand(n57, n46);
  n76 = bitcmp(bitand(bitor(n57, n12), n51));
  n82 = bitcmp(bitor(n6, bitor(n4, n14)));
  n87 = bitor(n30, n24);
  n91 = bitcmp(bitor(n87, bitor(n28, n35)));
  n118 = bitand(n40, n20);
  n119 = bitand(n40, n20);
  n120 = bitand(n12, n118);
  n134 = n37;
  n137 = bitor(bitor(bitand(n46, n119), bitand(n119, n51)), bitand(n46, n51));
  n157 = bitcmp(bitor(bitand(n53, n82), n91));
  n167 = bitcmp(bitand(n67, n82));
  n190 = bitcmp(bitand(bitor(n69, n76), n30));
  n201 = bitcmp(bitor(n137, n134));
  n203 = bitor(bitand(n167, n40), bitand(bitcmp(n167), n2));
  n258 = bitand(n203, n28);
  n261 = bitcmp(n61);
  n301 = n69;
  n306 = bitor(n22, n20);
  n325 = bitor(n301, n42);
  n382 = bitcmp(n201);
  n386 = bitor(n6, n8);
  n420 = bitand(n26, n386);
  n460 = bitand(n10, n306);
  n476 = bitand(n12, n22);
  n481 = n41;
  n482 = bitcmp(n53);
  n484 = bitcmp(n49);
  n491 = bitand(n14, n22);
  n494 = bitcmp(bitand(n167, bitand(n16, n91)));
  n532 = bitcmp(n325);
  n553 = bitcmp(bitxor(n73, n494));
  n564 = bitand(n8, n24);
  n580 = bitand(n10, n24);
  n595 = bitand(n12, n24);
  n608 = bitand(n14, n24);
  n682 = bitand(n8, n306);
  n698 = bitand(n10, n26);
  n712 = bitand(n12, n26);
  n728 = bitand(n14, n26);
  n802 = bitand(n8, n28);
  n816 = bitand(n10, n28);
  n817 = bitand(n10, n28);
  n832 = bitand(n12, n28);
  n846 = bitand(n14, n28);
  n854 = n595;
  n891 = bitand(n4, n30);
  n906 = bitand(n6, n30);
  n920 = bitand(n8, n30);
  n921 = bitand(n8, n30);
  n934 = bitand(n10, n30);
  n950 = bitand(n12, n30);
  n965 = bitand(n14, n30);
  n1054 = n120;
  n1069 = bitand(n481, n682);
  n1107 = n491;
  n1142 = n157;
  n1143 = n157;
  n1172 = bitor(n460, n564);
  n1186 = bitxor(n476, n580);
  n1187 = bitand(n476, n580);
  n1202 = bitxor(bitxor(n1107, n854), n698);
  n1203 = bitor(bitor(bitand(n1107, n854), bitand(n854, n698)), bitand(n1107, n698));
  n1216 = bitand(n608, n712);
  n1232 = bitxor(n608, n712);
  n1307 = bitor(n157, n1054);
  n1321 = n553;
  n1334 = bitxor(bitxor(n817, n1069), n1172);
  n1335 = bitor(bitor(bitand(n817, n1069), bitand(n1069, n1172)), bitand(n817, n1172));
  n1350 = bitxor(bitxor(n891, n420), n1186);
  n1351 = bitor(bitor(bitand(n891, n420), bitand(n420, n1186)), bitand(n891, n1186));
  n1424 = bitxor(bitxor(n1187, n802), n906);
  n1425 = bitor(bitor(bitand(n1187, n802), bitand(n802, n906)), bitand(n1187, n906));
  n1438 = bitxor(bitxor(n1203, n816), n920);
  n1439 = bitor(bitor(bitand(n1203, n816), bitand(n816, n920)), bitand(n1203, n920));
  n1454 = bitxor(bitxor(n1216, n832), n934);
  n1455 = bitor(bitor(bitand(n1216, n832), bitand(n832, n934)), bitand(n1216, n934));
  n1468 = bitand(n261, n482);
  n1482 = bitxor(n846, n950);
  n1483 = bitand(n846, n950);
  n1572 = n1334;
  n1586 = bitxor(n1350, n1335);
  n1587 = bitand(n1350, n1335);
  n1602 = bitxor(bitxor(n1202, n1216), n1424);
  n1603 = bitor(bitor(bitand(n1202, n1216), bitand(n1216, n1424)), bitand(n1202, n1424));
  n1616 = bitand(n1232, n1438);
  n1632 = bitor(n1232, n1438);
  n1646 = bitand(n728, n1454);
  n1660 = bitxor(n728, n1454);
  n1678 = n1483;
  n1706 = bitxor(bitxor(n921, n68), n1321);
  n1712 = bitor(n921, n1334);
  n1720 = bitor(bitand(n1307, n190), bitand(bitcmp(n1307), n1425));
  n1734 = bitor(n1572, n484);
  n1750 = bitor(n1586, n532);
  n1764 = bitxor(bitxor(n1602, n1587), n1351);
  n1765 = bitor(bitor(bitand(n1602, n1587), bitand(n1587, n1351)), bitand(n1602, n1351));
  n1780 = bitxor(bitxor(n1632, n1603), n1425);
  n1781 = bitor(bitor(bitand(n1632, n1603), bitand(n1603, n1425)), bitand(n1632, n1425));
  n1794 = bitxor(bitxor(n1660, n1616), n1439);
  n1795 = bitor(bitor(bitand(n1660, n1616), bitand(n1616, n1439)), bitand(n1660, n1439));
  n1808 = bitxor(bitxor(n1482, n1646), n1455);
  n1809 = bitor(bitor(bitand(n1482, n1646), bitand(n1646, n1455)), bitand(n1482, n1455));
  n1824 = bitand(n41, n1468);
  n1838 = bitxor(n965, n1678);
  n1869 = bitor(n1706, n382);
  n1882 = n1720;
  n1898 = bitor(n1734, n258);
  n1912 = n1750;
  n1928 = n1764;
  n1942 = bitxor(n1780, n1765);
  n1943 = bitand(n1780, n1765);
  n1956 = bitxor(bitxor(n1794, n1781), n1943);
  n1957 = bitor(bitor(bitand(n1794, n1781), bitand(n1781, n1943)), bitand(n1794, n1943));
  n1972 = bitxor(bitxor(n1808, n1795), n1957);
  n1973 = bitor(bitor(bitand(n1808, n1795), bitand(n1795, n1957)), bitand(n1808, n1957));
  n1986 = bitxor(bitxor(n1838, n1809), n1973);
  n1987 = bitor(bitor(bitand(n1838, n1809), bitand(n1809, n1973)), bitand(n1838, n1973));
  n2016 = bitor(n1824, n1987);
  c = bitor(c, bitshift(bitand(n73, 1), 0));
  c = bitor(c, bitshift(bitand(n1142, 1), 1));
  c = bitor(c, bitshift(bitand(n1603, 1), 2));
  c = bitor(c, bitshift(bitand(n1712, 1), 3));
  c = bitor(c, bitshift(bitand(n1869, 1), 4));
  c = bitor(c, bitshift(bitand(n1882, 1), 5));
  c = bitor(c, bitshift(bitand(n1143, 1), 6));
  c = bitor(c, bitshift(bitand(n1882, 1), 7));
  c = bitor(c, bitshift(bitand(n1898, 1), 8));
  c = bitor(c, bitshift(bitand(n1912, 1), 9));
  c = bitor(c, bitshift(bitand(n1928, 1), 10));
  c = bitor(c, bitshift(bitand(n1942, 1), 11));
  c = bitor(c, bitshift(bitand(n1956, 1), 12));
  c = bitor(c, bitshift(bitand(n1972, 1), 13));
  c = bitor(c, bitshift(bitand(n1986, 1), 14));
  c = bitor(c, bitshift(bitand(n2016, 1), 15));
end