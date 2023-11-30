#include <math.h>

double sum_series(int n){
    if (n == -1) return -1;
    if (n == 0) return -1;
    if (n == 1) return 1;
    double sum = 0;
    sum += sum_series(n - 1) + (double)1/n;
    return sum;
}
