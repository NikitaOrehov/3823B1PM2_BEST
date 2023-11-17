#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    unsigned long long int number = 0, count  = 0;
    if (size > 8) return 0;
    for (int i = 0; i < size; i++){
        number |= ((unsigned long long)(arr[i])) << (i * 8);
        count += 1;
    }
    return number;
}

unsigned char unpack_ull(unsigned long long input){
    unsigned char number;
    number = (input) >> 32;
    return number;
}
