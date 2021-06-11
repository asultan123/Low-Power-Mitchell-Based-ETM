function [res] = antilog_approx(log_num)

    anti_log_num_bin = dec2bin(0,16);
    characteristic_num = floor(log_num);
    
    
    characteristic_num_pos = 16-characteristic_num;
    anti_log_num_bin(characteristic_num_pos) = '1';
    
    lower_part = log_num - floor(log_num);
    lower_part = dec2bin(double(floor(bitshift(fi(lower_part,0,16,8),8))),8);
    
    if characteristic_num_pos+9 <= 16
        for i = characteristic_num_pos+1:characteristic_num_pos+8
            anti_log_num_bin(i) = lower_part(i-characteristic_num_pos);
        end
    else
        for i = characteristic_num_pos+1:16
            anti_log_num_bin(i) = lower_part(i-characteristic_num_pos);
        end
    end
    
    res = uint16(bin2dec(anti_log_num_bin));
    
end