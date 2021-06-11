function mult_error_performance

    a = load('test_a.mat');
    b = load('test_b.mat');
    a = a.a;
    b = b.b;
    MRED = 0;
    ER = 0;
    MED_mult = 0;
    
    length_test_vector = length(a);
            
    RED = zeros(length_test_vector,length_test_vector);
    MED = zeros(length_test_vector,length_test_vector);

    correct_res = 0;
    incorrect_res = 0;

    for i = 1:length(a)
        for j = 1:length(b)
            approx = EXACT_ETM_mex(a(i),b(j));
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

    MRED = mean(mean(RED))*100;
    ER = incorrect_res/(correct_res+incorrect_res);
    MED_mult = mean(mean(MED));

    save('EXACT_MRED','MRED');
    save('EXACT_ER','ER');
    save('EXACT_MED','MED_mult');
        
    
end
