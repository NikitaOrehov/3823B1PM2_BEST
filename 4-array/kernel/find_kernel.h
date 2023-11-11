#include <math.h>

int find_matrix_kernel(int matrix[], int kernel[], int matrix_row, int matrix_col, int kernel_row, int kernel_col){
    
    // int leng1 = sqrt(matrix_size), leng2 = sqrt(kernel_size);
    // int raznoct = leng1 - leng2 + 1;
    // int array[100];
    // while (raznoct >= 1){
    //     int leng1 = sqrt(matrix_size), leng2 = sqrt(kernel_size);
    //     int raznoct = leng1 - leng2 + 1;   
    //     int sum, count = 0;
    //     for (int i = 0; i < raznoct; i ++){
    //         for (int j = 0; j < raznoct; j++){
    //             for (int k = 0; k < leng2; k++){
    //                 for (int h = 0; h < leng2; h++){
    //                     sum += kernel[k * leng2 + h] * matrix[(i * leng1 + j) + leng1 * k + h];
    //                 }
    //             }
    //             array[count] = sum;
    //             count += 1;
    //         }
    //     }
    //     leng1 = sqrt(matrix_size), leng2 = sqrt(kernel_size);
    //     raznoct = leng1 - leng2 + 1;
    // }
    // int otvet = 0;
    // if (raznoct < 1){
    //     for (int i = 0; i < leng1; i++){
    //         otvet += array[i];
    //     }
    // }
    // return otvet;

}