#include <math.h>

int QuadraticEquation(double a, double b, double c){
    double d, x1, x2;
    d = b * b - 4 * a * c;
    if (d > 0){
        return (-b + sqrt(d)) / (2 * a) + (-b - sqrt(d)) / (2 * a);
    }
    else if (d == 0){
        return (-b)/(2 * a);
    }
    else if (d < 0){
        x1 = (-b)/(2*a) + (sqrt(fabs(d))) / (2 * a);
        x2 = (-b)/(2*a) - (sqrt(fabs(d))) / (2 * a);
        return (int)(x1 + x2);
    }
}