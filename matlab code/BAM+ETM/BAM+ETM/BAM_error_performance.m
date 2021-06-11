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
 
MRED = [];

orientation = ['v','h'];
 
for orientation_selector = 1:2
 
 
    orientation(orientation_selector)
    
    for BL = 2:2:8
        BL
        RED = [];
        for i = 1:length(a)
            i
            parfor j = 1:length(b)
                approx = BAM_ETM(a(i),b(j),orientation(orientation_selector),BL);
                exact = a(i)*b(j);
                RED = [RED abs(exact-double(approx))/exact];
            end
        end
        MRED = [MRED mean(RED)*100];
        save(strcat('MRED_BAM_',char(BL+'0'),orientation(orientation_selector)),'MRED');
    end
    
end
 
save('MRED_BAM','MRED');
