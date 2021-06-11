function [a,b] = generate_testset(test_set_size_1,test_set_size_2,max_num,min_num)
    a = [];
    b = [];
    for i = 1:test_set_size_1

        temp = ceil(rand(1,1)*max_num);
        while(temp<min_num)
            temp = ceil(rand(1,1)*max_num);
        end
        a = [a temp];

    end
    
    for i = 1:test_set_size_2

        temp = ceil(rand(1,1)*max_num);
        while(temp<min_num)
            temp = ceil(rand(1,1)*max_num);
        end
        b = [b temp];

    end
    
    save('test_a','a');
    save('test_b','b');
end
