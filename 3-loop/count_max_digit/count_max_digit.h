#include <math.h>

char count_max_digit(long long int number){
    int p, count = 0, max = 0;
    number = fabs(number);
    while (number >= 1){
        p = number % 10;
        if (p > max){
            count = 1;
            max = p;
        }
        else if (max == p) count += 1;
        number /= 10;
    }
    return count;
}