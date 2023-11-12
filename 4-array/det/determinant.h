#include <math.h>

int determinant(int matrix[], int size){
    int leng = sqrt(size), k = 0, sum = 0, index = 0;
    if (leng * leng != size) return -404;
    for (int i = 0; i < leng; i++){
        k = matrix[i];
        for (int j = 1; j < leng; j++){
            index = i + j * leng + j;
            if (index > leng * j + (leng - 1)){
                index -= leng;
            }
            k *= matrix[index];
        }
        sum += k;
    }
    int sum2 = 0;
    for (int i = leng - 1; i >= 0; i--){
        k = matrix[i];
        for (int j = 1; j < leng; j++){
            index = i + j * leng - j;
            if (index < leng * j){
                index += leng;
            }
            k *= matrix[index];
        }
        sum2 += k;
    }
    return sum - sum2;
}