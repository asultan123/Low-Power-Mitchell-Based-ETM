function [ output ] = uint32_to_fi_16_8( input )
    
    upper_mask = bin2dec('11111111111111110000000000000000');
    lower_mask = bin2dec('00000000000000001111111111111111');
    
    upper= double(uint16(bitshift(bitand(input,upper_mask),-16)));
    lower = sum((2.^[-1:-1:-16]).*double(dec2bin(uint16(bitand(input,lower_mask)),16)-'0'));
        
    output = upper+lower;
    
end

