function [correction] = lut_correction(lower1,lower2)

ni = 0;
nf = 7;

row = 0;

if lower1 < 0.125
	row = 1;
elseif lower1 < 0.25
	row = 2;
elseif lower1 < 0.375
	row = 3;
elseif lower1 < 0.5
	row = 4;
elseif lower1 < 0.625
	row = 5;
elseif lower1 < 0.75
	row = 6;
elseif lower1 < 0.875
	row = 7;
elseif lower1 <= 1
	row = 8;
end

col = 0;

if lower2 < 0.125
	col = 1;
elseif lower2 < 0.25
	col = 2;
elseif lower2 < 0.375
	col = 3;
elseif lower2 < 0.5
	col = 4;
elseif lower2 < 0.625
	col = 5;
elseif lower2 < 0.75
	col = 6;
elseif lower2 < 0.875
	col = 7;
elseif lower2 <= 1
	col = 8;
end

lut = [...
    0.0048 , 0.0131 , 0.0198 , 0.0254 , 0.0301 , 0.0342 , 0.0377 , 0.0266;
    0.0131 , 0.0360 , 0.0548 , 0.0705 , 0.0838 , 0.0952 , 0.0910 , 0.0328;
    0.0198 , 0.0548 , 0.0837 , 0.1080 , 0.1287 , 0.1324 , 0.0611 , 0.0250;
    0.0254 , 0.0705 , 0.1080 , 0.1397 , 0.1527 , 0.1093 , 0.0601 , 0.0187;
    0.0301 , 0.0838 , 0.1287 , 0.1527 , 0.1186 , 0.0774 , 0.0428 , 0.0133;
    0.0342 , 0.0952 , 0.1324 , 0.1093 , 0.0774 , 0.0507 , 0.0282 , 0.0088;
    0.0377 , 0.0910 , 0.0811 , 0.0601 , 0.0428 , 0.0282 , 0.0157 , 0.0049;
    0.0266 , 0.0328 , 0.0250 , 0.0187 , 0.0133 , 0.0088 , 0.0049 , 0.0015
];

correction = double(fi(lut(row,col),0,(ni+nf),nf));

end