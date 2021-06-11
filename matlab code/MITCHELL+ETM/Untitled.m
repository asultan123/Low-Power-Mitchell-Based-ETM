res = [];
for i = 1:255
    res = [res log_approx(i)];
end

inv_res = [];
for i = 1:255
    inv_res = [inv_res antilog_approx(res(i))];
end

