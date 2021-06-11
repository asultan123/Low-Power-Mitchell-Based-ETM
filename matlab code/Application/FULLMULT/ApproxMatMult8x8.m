function [ res ] = ApproxMatMult8x8( T,I )
    res = zeros(8,8);

    for i = 1:8
        for k = 1:8
            acc = 0;
            for j = 1:8
                sign = xor(I(j,k)>0,T(i,j)>0)*-1;
                if sign == 0
                    sign =1;
                end
                
                t1 = double(fi(abs(I(j,k)),0,16,13));
                t2 = double(fi(abs(T(i,j)),0,16,13));
                
                t1_int_bin = dec2bin(floor(t1),3);
                t2_int_bin = dec2bin(floor(t2),3);
                t1_frac_bin = dec2binfrac(t1-floor(t1),13);
                t2_frac_bin = dec2binfrac(t2-floor(t2),13);
                
                t1 = bin2dec([t1_int_bin t1_frac_bin]);
                t2 = bin2dec([t2_int_bin t2_frac_bin]);
                
                mult = dec2bin(t1*t2,32);
                mult_int = bin2dec(mult(1:6));
                mult_frac = binfrac2dec(mult(7:end));
                mult = mult_int + mult_frac;
                
                acc = acc + (sign*mult);
%                 error = abs((sign*mult)-I(j,k)*T(i,j));
%                 if(error>0.1)
%                     block_struct.location;
%                 end
            end
            res(i,k) = acc;
        end
    end
end

