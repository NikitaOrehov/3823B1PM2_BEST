#include <math.h>

int calc_percent(int matrix[], int size){
    int max = 0, min = 1000, p, count = 0;
    for (int i = 0; i < size; i++){
        if (matrix[i] > max) max = matrix[i];
        if (matrix[i] < min) min = matrix[i];
    }
    p  = (max - min) / 2;
    for (int i = 0; i < size; i++){
        if (matrix[i] > p) count += 1;
    }
    return ((double)count / size) * 100;
}