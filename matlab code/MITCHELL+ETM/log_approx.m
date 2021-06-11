function [log_num, lower] = log_approx(input)
    
    if input==0
        log_num = 0;
        lower = 0;
        return
    end
    
    num_bin = dec2bin(input,8);
    lower_part = zeros(1,8);
    
    characteristic_num = 0;
    for i = 1:8
        if num_bin(i) == '1'
            characteristic_num = 8-i;
            index = 1;
            for j = i+1:8
                lower_part(index) = num_bin(j)-'0';
                index = index + 1;
            end
            lower = sum((2.^[-1:-1:-8]).*lower_part);
            break;
        else
            lower = 0;
        end
    end
    log_num = characteristic_num + lower;
    
end