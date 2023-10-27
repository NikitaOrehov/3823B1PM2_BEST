#include <math.h>

char find_digit(double number, char digit){
    if (digit >= 10) return -1;
    int number2 = (int)number, i = 0;
    char k = 0, count = 0;
    while (number2 >= 1){
        i += 1;
        k = number2 % 10;
        number2 = number2 / 10;
        if (count >= 1){
            count += 1;
        }
        if (k == digit){
            count = 1;
        }
    }
    if (count > 0) return count;
    int global_count = i + 1;
    for (int i = 1; i < 20; i++){
        k = (int)(number / pow(0.1, i)) % 10;
        global_count += 1;
        if (k == digit){
            return global_count;
            break;
        }
    }
    if (global_count == 0) return -1;
    return 0;
}
