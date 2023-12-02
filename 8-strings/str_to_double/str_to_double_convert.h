#include <math.h>
#include <string.h>

double convert(char num[]){
    double number = 0;
    int count = 0, minus = 0;
    if (num[count] == 45){
         minus = 1;
         count++;
    }
    while (num[count] != 46){
        number = number * 10 + (num[count] - 48);
        count++;
    }
    count++;
    int flag = 1;
    while (num[count] != '\0'){
        number = number + (pow(0.1, flag) * (num[count] - 48));
        flag++;
        count++;
    }
    if (minus == 1) number *= -1;
    return number;
}
//46