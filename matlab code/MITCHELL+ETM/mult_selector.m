function [ res ] = mult_selector(a,b,sel)
    switch(sel)
        case 0
            res = mul8_433(a,b);
        case 1
            res = mul8_218(a,b);
        otherwise
            res = uint16(0);
    end
end

