#include <math.h>

int reverse(int number) {
    int a, b, c, d;
    a = number % 10;
    b = (number / 10) % 10;
    c = (number / 100) % 10;
    d = (number / 1000);
    return a * 1000 + b * 100 + c * 10 + d;
}

double decomposition(int number) {
    double a, b, c, d;
    a = 1 / ((double)((number / 1000) * 1000));
    b = 1 / ((double)((number / 100) % 10) * 100);
    c = 1 / ((double)((number / 10) % 10) * 10);
    d = 1 / ((double)(number % 10));
    return 4/(a + b + c + d);

}

int append(int number, int start, int end) {
    int b;
    b = (start * 100000 + number * 10 + end) * (start > 0) + (start * 100000 - number * 10 - end) * (start < 0);
    return b;
}
