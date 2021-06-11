I = imread('cameraman.tif');
figure(1);
imshow(I);
I = im2double(I);
T = dctmtx(8);


dct = @(block_struct) ApproxMatMult8x8_mex( ApproxMatMult8x8_mex( T,block_struct.data ),T' );
B = blockproc(I,[8 8],dct);

% dct = @(block_struct) T * block_struct.data*T';
% B = blockproc(I,[8 8],dct);


mask = [1   1   1   1   0   0   0   0
        1   1   1   0   0   0   0   0
        1   1   0   0   0   0   0   0
        1   0   0   0   0   0   0   0
        0   0   0   0   0   0   0   0
        0   0   0   0   0   0   0   0
        0   0   0   0   0   0   0   0
        0   0   0   0   0   0   0   0];
    
B2 = blockproc(B,[8 8],@(block_struct) mask .* block_struct.data);
invdct = @(block_struct) T' * block_struct.data * T;
I2 = blockproc(B2,[8 8],invdct);
figure(2)
imshow(I2)
A = psnr(I2,I)
save('pic_man','I2');
save('psnr_man','A');