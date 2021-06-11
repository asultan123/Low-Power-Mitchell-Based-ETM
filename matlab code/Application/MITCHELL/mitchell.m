function [result] = mitchell(a,b)
    
    F = fimath('RoundingMethod', 'Nearest', ...
     'OverflowAction', 'Wrap', ...
     'SumMode', 'SpecifyPrecision', ...
     'SumWordLength', 11, ...
     'SumFractionLength', 7, ...
     'CastBeforeSum', true); 
 
    if a<1 || b<1
        result = uint16(0);
        return
    end
    
    [a, lower_a] = log_approx(a);
    
    [b, lower_b] = log_approx(b);
    
    correction_term = lut_correction(lower_a,lower_b);
    
    log_addition = fi(a,0,11,7,F)+fi(b,0,11,7,F)+fi(correction_term,0,11,7,F);
    
    result = antilog_approx(double(log_addition));

end