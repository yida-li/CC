#include <stdio.h>

__global__ void open_gpu() {
printf("Running program from my NVIDIA GeForce RTX 2060 GPU!\n");
}

int main() {
printf("Running program from my INTEL Core i7-10750H CPU!\n");

open_gpu<<<1,1>>>();
cudaDeviceSynchronize();
    return 0;
}
