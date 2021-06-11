function res = MITCHELL_ETM(a,b)

    a = uint16(a);
    b = uint16(b);
    
    upper_a = uint8(bitshift(uint16(bitand(a,65280)),-8));
    upper_b = uint8(bitshift(uint16(bitand(b,65280)),-8));
    lower_a = uint8(bitand(a,255));
    lower_b = uint8(bitand(b,255));
    
    if(upper_a == 0 || upper_b == 0)
        res = uint32(mitchell(lower_a,lower_b));
%         res = bitor(bitshift(uint32(upper_a),16),res);
%         res = bitor(bitshift(uint32(upper_b),16),res);
        return
    end
    
    upper_mult = uint32(mitchell(upper_a,upper_b))*2^16;
    
    lower_approx = uint8(bitor(lower_a,lower_b));
       
    first_one = 0;
    
    for i = 7:-1:0
        if(lower_approx >= 2^i)
            first_one = i;
            break;
        end
    end
    
    lower_approx_bin = zeros(1,16);
    
    for i = 7-first_one+1:16
        lower_approx_bin(i) = 1;
    end
    
    lower_approx = uint32(bi2de(fliplr(lower_approx_bin)));
    
    res = bitor(upper_mult,lower_approx);
    
end