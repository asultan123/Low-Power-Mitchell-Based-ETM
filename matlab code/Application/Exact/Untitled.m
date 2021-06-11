test_set_size = 100;

temp1 = rand(1,test_set_size)*255;
temp2 = rand(1,test_set_size)*255;

RED = zeros(test_set_size,test_set_size);

for i = 1:test_set_size
    for j = 1:test_set_size
        display(i);
        t1 = fi(temp1(i),0,16,8); t1=uint16(bin2dec(t1.bin));
        t2 = fi(temp2(j),0,16,8); t2=uint16(bin2dec(t2.bin));
        
        RED(i,j) = abs(uint32_to_fi_16_8(EXACT_ETM(t1,t2))-temp1(i)*temp2(j))/(temp1(i)*temp2(j));
        
        
    end
end

MRED = mean(RED)*100;


