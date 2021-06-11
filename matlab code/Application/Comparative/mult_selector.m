function [ res ] = mult_selector( a,b,sel)
    switch(sel)
        case 0
            res = AMA4ArrayMultiplier_8X8(a,b);
        case 1
            res = Comp_E_AMA5_8X8_Multiplier(a,b);
        case 2
            res = AMA5ArrayMultiplier_8X8(a,b);
        case 3
            res = InXA2ArrayMultiplier_8X8(a,b);
        case 4
            res = InXA1ArrayMultiplier_8X8(a,b);
        otherwise
            res = double(0);
    end
end

