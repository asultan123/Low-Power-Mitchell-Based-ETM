function res = BAM_incorrect(a,b,orientation,index)

    x = uint8(a);
    y = uint8(b);
    x_bin_temp = dec2bin(x,8);
    y_bin_temp = dec2bin(y,8);
    x_bin = zeros(1,8);
    y_bin = zeros(1,8);
    
    for i = 1:8
        x_bin(i) = x_bin_temp(i)-'0';
        y_bin(i) = y_bin_temp(i)-'0';
    end
    pp = zeros(8,15);
    
    for i = 1:8
        for j = i:8+i-1
            pp(i,j) = x_bin(i) & y_bin(j-i+1);
        end
    end
       
    pp = flipud(pp);
    
    if orientation == 'v'
        for j = 1:8
            pp(j,16-index) = 0;
        end
        
        %omit cells to the right of and including index 
        powers_of_2_left = 2.^([14-index:-1:0]'*ones(1,8))';
        pp_left = pp(:,1:16-(index+1)).*powers_of_2_left;

        powers_of_2_right = 2.^([index-2:-1:0]'*ones(1,8))';
        pp_right = pp(:,16-(index-1):15).*powers_of_2_right;
        
        %shift the left part of the result up 
        pp_left = bitshift(uint16(sum(sum(pp_left,2),1)),index);
        
        %keep the right part as it is
        pp_right = uint16(sum(sum(pp_right,2),1));

        res = pp_left + pp_right;

    elseif orientation == 'h'
        for j = 1:15
            for i = 1:index
                pp(index,j) = 0;
            end
        end
        
        powers_of_2 = 2.^([14:-1:0]'*ones(1,8))';
        pp = pp.*powers_of_2;
        res = uint16(sum(sum(pp,2),1));
        
    else 
        error('orientation is either v or h');
    end
        


   
end