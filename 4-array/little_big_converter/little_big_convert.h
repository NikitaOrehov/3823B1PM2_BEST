#include <math.h>

unsigned int little_big_convert(unsigned int input){
    int k0, k1, k2, k3;
    k3 = input >> 24;
    k2 = (char)(input >> 16);
    k1 = (char)(input >> 8);
    k0 = (char)(input);
    return k3 | k2 | k1 | k0;
    
}
