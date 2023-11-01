#include <math.h>

long long calc_row(int n, long long k){
    long long int sum = 0;
    for (int i = 1; i <= n; i++){
        if (fabs(sum) > fabs(sum + i * k)) return 0;
        sum += i * k;
    }
    return sum;
}