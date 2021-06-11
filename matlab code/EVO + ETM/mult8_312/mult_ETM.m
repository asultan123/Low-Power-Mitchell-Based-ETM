function [result] = mult_ETM(a,b,selector)
    
ni = 8;
nf = 8;

    F = fimath('RoundingMethod', 'Nearest', ...
     'OverflowAction', 'Wrap', ...
     'ProductMode', 'SpecifyPrecision', ...
     'ProductWordLength', 2*(ni+nf), ...
     'ProductFractionLength', 2*nf, ...
     'SumMode', 'SpecifyPrecision', ...
     'SumWordLength', 2*(ni+nf), ...
     'SumFractionLength', 2*nf, ...
     'CastBeforeSum', true); 

    upper_bit_count = 8;

    %   segment operands into upper and lower bits
    operand1 = fi(a,0,ni+nf,nf);
    operand1_upper_bits = fi(0,0,8,0);
    operand1_lower_bits = fi(0,0,8,0);

    operand2 = fi(b,0,ni+nf,nf);
    operand2_upper_bits = fi(0,0,8,0);
    operand2_lower_bits = fi(0,0,8,0);

    operand1_upper_bits.bin = operand1.bin(1:upper_bit_count);
    operand1_lower_bits.bin = operand1.bin(upper_bit_count+1:length(operand1.bin));

    operand2_upper_bits.bin = operand2.bin(1:upper_bit_count);
    operand2_lower_bits.bin = operand2.bin(upper_bit_count+1:length(operand2.bin));
    
    %   evaluate upper bits
    result_upper_bits_multiplication = ...
        mult_selector(double(operand1_upper_bits),double(operand2_upper_bits),selector);
    result_upper_bits_multiplication = fi(result_upper_bits_multiplication,0,16,0,F);

    %   evaluate lower bits
    result_lower_bits_multiplication = fi(0,0,2*(ni+nf-upper_bit_count),0);
    temp = bitor(operand1_lower_bits,operand2_lower_bits);
    
    ones_index = strfind(temp.bin,'1');

    if size(ones_index,1) ~= 0
        for i = ones_index(1):length(result_lower_bits_multiplication.bin)
            result_lower_bits_multiplication.bin(i) = '1';
        end
    end

    etm_result = fi(0,0,2*(ni+nf),2*nf);

    etm_result.bin = strcat(result_upper_bits_multiplication.bin,result_lower_bits_multiplication.bin);
    
    result = etm_result;
    result.fimath = F; 

end