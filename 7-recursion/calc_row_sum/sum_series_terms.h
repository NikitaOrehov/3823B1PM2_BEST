#include <math.h>


double sum(int start, int finish){
    if (finish == start) return 0;
    double summa = 0;
    summa += sum(start, finish - 1) + (double)1/finish;
    return summa;
}

//n = 12.000
// sum = 1 - 10000;
// sum += 10000 - 12000;

double sum_series(int n){
    double summa = 0;
    int start = 1, finish = 10000, flag = 0;
    if (n == 0) return -1;
    if (n == -1) return -1;
    if (n <= 10000){
        return sum(1, n) + 1;
        
    }
    while (flag == 0){
        if (n >= 10000){
            summa += sum(start, finish);
        }
        if (finish == n) break;
        start = finish;
        if (finish + 10000 > n){
            finish = n;
        }
        else finish += 10000;

    }
    return summa + 1;
}




