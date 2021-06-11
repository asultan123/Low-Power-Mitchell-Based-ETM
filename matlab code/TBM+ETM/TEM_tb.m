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


RED = [];

% for i = 1:max_num
%     
%     temp = rand(1,1)*127;
%     while(temp<1)
%         temp = rand(1,1)*127;
%     end
%     a = [a temp];
%     
%     temp = rand(1,1)*127;
%     while(temp<1)
%         temp = rand(1,1)*127;
%     end
%     b = [b temp];
%             
% end

for i = 1:length(a)
    i
    parfor j = 1:length(b)
        approx = TEM( a(i),b(j), F );
        exact = a(i)*b(j);
        RED = [RED abs(exact-double(approx))/exact];
    end
end

MRED = mean(RED)*100
