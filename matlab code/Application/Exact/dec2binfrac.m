function [ res ] = dec2binfrac( input , bits)

    res = zeros(1,bits);
    for i = 1:1:bits
        if input>2^-i
            res(i) = 1;
            input = input - 2^-i;
        end
    end
    res = char(res + '0');
    
end