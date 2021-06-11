function [res] = EXACT_ETM(a,b)
    
    a = uint16(a);
    b = uint16(b);
    upper_a = uint32(bitshift(uint16(bitand(a,65280)),-8));
    upper_b = uint32(bitshift(uint16(bitand(b,65280)),-8));
    lower_a = uint32(bitand(a,255));
    lower_b = uint32(bitand(b,255));
    
    if(upper_a == 0 || upper_b == 0)
        res = uint32(lower_a*lower_b);
%         res = bitor(bitshift(uint32(upper_a),16),res);
%         res = bitor(bitshift(uint32(upper_b),16),res);
        return
    end
%     elseif(upper_a == 0)
%         res = bitshift(uint32(bitshift(lower_a,16)*upper_b),-16);
%         return
%     elseif(upper_b == 0)
%         res = bitshift(uint32(bitshift(lower_b,16)*upper_a),-16);
%         return
%     end
    
    upper_mult = bitshift(uint32(upper_a*upper_b),16);
    
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
    
    res = upper_mult + lower_approx;
 
end
