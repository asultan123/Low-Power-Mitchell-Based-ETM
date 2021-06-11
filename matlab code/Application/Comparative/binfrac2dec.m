function [res] = binfrac2dec(input)
    res = sum(2.^[-1:-1:-1*length(input)].*(input-'0'));
end

