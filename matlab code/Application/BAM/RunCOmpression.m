vbl_list = [4,6];
hbl_list = [0,1,3];

psnr_out = [];
pics_out = [];
for i = 1:length(vbl_list)
    i
    for j = 1:length(hbl_list)
        [psnr_res, pic_res] = JpegCompression(vbl_list(i), hbl_list(j));
        psnr_out = [psnr_out psnr_res];
        pics_out = [pics_out pic_res]; 
    end
end
save('psnr_man','psnr_out');
save('pics_man','pics_out');