#include <math.h>
#include <stddef.h>

int find_element(int* A, int* B, int row, int col, int length_A, int length_B){
    int sum = 0, first = 0, second = 0, t = 0;
    for (int i = 0; i < length_A; i++)
    {
        first = *(A + length_A * row + i);
        second = *(B + length_B * i + col);
        sum += first * second;
        t = 0;
    }
    return sum;
}



int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    int matrix[100];
    int* p_matrix = matrix;
    int row = aM, col = bN;
    if (aN != bM){
        return NULL;
    }
    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            matrix[i * col + j] = find_element(A, B, i, j, aN, col);
        }
    }
    return p_matrix;
}