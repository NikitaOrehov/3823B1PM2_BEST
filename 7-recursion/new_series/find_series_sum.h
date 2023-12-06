#include <math.h>
#include <stdlib.h>

double array_f(double* array, int k){
    if (k == 0){
        array[0] = 0;
        return 0;
    }
    double number = (array_f(array, k - 1) + 1) / k;
    array[k] = number;
    return array[k];
}

double find_sum_elements_series(int k){
    double* array = malloc(sizeof(double) * k);
    if (k == 0) return 0;
    if (k == -1) return -1;
    double sum = array_f(array, k - 1);
    for (int i = 0; i < k - 1; i++){
        sum += array[i];
    }
    return sum;
}
