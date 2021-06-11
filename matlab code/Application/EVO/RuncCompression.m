psnr_out = [];
pics_out = [];
for i = 0:10
    i
    [psnr_res, pic_res] = JpegCompression(i);
    psnr_out = [psnr_out psnr_res];
    pics_out = [pics_out pic_res]; 
end
save('psnr_camerman','psnr_out');
save('pics_camerman','pics_out');