#include <math.h>

double integral(double a, double b, double c, double left, double right){
    double first = (a/3) * (left * left * left) + (b / 2) * (left * left) + c * left, second = (a/3) * (right * right * right) + (b / 2) * (right * right) + c * right;
    return second - first;
}
