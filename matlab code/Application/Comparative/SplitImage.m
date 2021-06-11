image_name = 'man_';
mult_type = 'COMP_';

num_of_pics = (size(pics_out,2)/size(pics_out,1))-1;

for i = 0:num_of_pics
    image = pics_out(:,i*size(pics_out,1)+1:i*size(pics_out,1)+size(pics_out,1));
    fig = figure(i+1);
    imshow(image);
    saveas(fig,strcat(image_name,mult_type,char(i+'0')),'png');
end