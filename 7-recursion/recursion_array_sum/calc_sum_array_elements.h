#include <math.h>

double calc_sum_elements(int* array, int array_size){
    if (array_size == -1) return -1;
    if (array_size == 0){
         return 0;
    }
    double sum = 0, number = array[array_size - 1];
    sum = calc_sum_elements(array, array_size - 1) + number;
    return sum;
}
