function res = BAM(a,b,vbl,hbl)

    x = uint8(a);
    y = uint8(b);
    x_bin_temp = dec2bin(x,8);
    y_bin_temp = dec2bin(y,8);
    x_bin = zeros(1,8);
    y_bin = zeros(1,8);
    
    for i = 1:8
        x_bin(i) = x_bin_temp(i)-'0';
        y_bin(i) = y_bin_temp(i)-'0';
    end
    pp = zeros(8,15);
    
    for i = 1:8
        for j = i:8+i-1
            pp(i,j) = x_bin(i) & y_bin(j-i+1);
        end
    end
       
    pp = flipud(pp);
    
    if(hbl>0)
        for i = 1:hbl
            pp(i,:) = zeros(1,15);
        end
    end
    
    if(vbl>0)
        for j = 15-(vbl-1):15
            pp(:,j) = zeros(8,1);
        end
    end
    
    powers_of_2 = 2.^([14:-1:0]'*ones(1,8))';
    pp = pp.*powers_of_2;
    res = uint16(sum(sum(pp,2),1));


   
end