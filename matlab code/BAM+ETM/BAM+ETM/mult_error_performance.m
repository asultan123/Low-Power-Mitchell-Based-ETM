function mult_error_performance

    a = load('test_a.mat');
    b = load('test_b.mat');
    a = a.a;
    b = b.b;
    MRED = zeros(4,5);
    ER = zeros(4,5);
    MED_mult = zeros(4,5);
    
    length_test_vector = length(a);
        
    for vbl = 4:2:8
        
        for hbl = 0:4
            
            vbl
            hbl
            
            RED = zeros(length_test_vector,length_test_vector);
            MED = zeros(length_test_vector,length_test_vector);

            correct_res = 0;
            incorrect_res = 0;

            for i = 1:length_test_vector
                for j = 1:length_test_vector
                    approx = BAM_ETM_mex(a(i),b(j),vbl,hbl);
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

            MRED(vbl/2,hbl+1) = mean(mean(RED))*100;
            ER(vbl/2,hbl+1) = incorrect_res/(correct_res+incorrect_res);
            MED_mult(vbl/2,hbl+1) = mean(mean(MED));

            save('BAM_MRED','MRED');
            save('BAM_ER','ER');
            save('BAM_MED','MED_mult');
        end
    end
end
