#include <math.h>

int hole_finder(int matrix[], int length, int width){
    int min = 1000, res;
    for (int i = 0; i < width; i++){
        for (int j = 0; j < length; j ++){
            if (matrix[j + (length * i)] < min){
                min = matrix[j + (length * i)];
                res = i * 100 + j;
            }
        }
    }
    return res;
}