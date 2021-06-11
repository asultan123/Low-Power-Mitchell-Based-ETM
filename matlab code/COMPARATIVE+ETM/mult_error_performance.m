function result_MRED = mult_error_performance
    a = load('test_a.mat');
    b = load('test_b.mat');
    a = a.a;
    b = b.b;
    MRED = zeros(1,2);
    ER = zeros(1,2);
    MED_mult = zeros(1,2);
    
    length_test_vector = length(a);
    
    for mult_selector = 0:1

        RED = zeros(length_test_vector,length_test_vector);
        MED = zeros(length_test_vector,length_test_vector);
                
        correct_res = 0;
        incorrect_res = 0;
        
        for i = 1:length(a)
            for j = 1:length(b)
                approx = COMPARATIVE_ETM_mex(a(i),b(j),mult_selector);
                exact = a(i)*b(j);
                
                if(abs(exact-double(approx)) < 0.1)
                    correct_res = correct_res + 1;
                else
                    incorrect_res = incorrect_res + 1;
                end
                
                MED(i,j)= abs(exact-double(approx));
                RED(i,j)= abs(exact-double(approx))/exact;
            end
                        
            if(rem(i,10)==0)
                disp(i);
            end
        end

        MRED(mult_selector+1) = mean(mean(RED))*100;
        ER(mult_selector+1) = incorrect_res/(correct_res+incorrect_res);
        MED_mult(mult_selector+1) = mean(mean(MED));
        
        save('COMP_MRED','MRED');
        save('COMP_ER','ER');
        save('COMP_MED','MED_mult');
    end
   result_MRED = MRED; 
end
