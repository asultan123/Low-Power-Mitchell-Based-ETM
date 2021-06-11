function [outputArg] = encode(block_struct)
    outputArg = ApproxMatMult8x8( ApproxMatMult8x8( T,block_struct.data ),T' );
end

