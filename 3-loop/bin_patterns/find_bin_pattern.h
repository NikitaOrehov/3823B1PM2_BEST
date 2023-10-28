#include <math.h>

char find_bin_pattern(int number){
    int count = 0, array[10000];
    while (number >= 2){
        array[count] = number % 2;
        number /= 2;
        count +=1;
    }
    array[count] = number;
    int k = 0;
    for (int i = 1; i < count; i++){
        if ((array[i] == 0) && (array[i - 1] == 1) && (array[i + 1] == 1)){
            k += 1;
        }
    }
    return k;
}