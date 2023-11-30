#include <math.h>

double find_sum_elements_series(int k){
    k--;
    if (k == 0) return 0;
    double sum = 0, number;
    sum += find_sum_elements_series(k);//////неверно
    return sum;
}
