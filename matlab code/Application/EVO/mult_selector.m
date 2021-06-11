function [ res ] = mult_selector( a,b,sel)
    switch(sel)
        case 0
            res = mul8_433(a,b);
        case 1
            res = mul8_218(a,b);
        case 2
            res = mul8_474(a,b);
        case 3
            res = mul8_476(a,b);
        case 4
            res = mul8_478(a,b);
        case 5
            res = mul8_312(a,b);
        case 6
            res = mul8_435(a,b);
        case 7
            res = mul8_236(a,b);
        case 8
            res = mul8_198(a,b);
        case 9
            res = mul8_429(a,b);
        case 10 
            res = mul8_347(a,b);
        otherwise
            res = uint16(0);
    end
end

