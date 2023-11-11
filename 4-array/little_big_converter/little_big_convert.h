#include <math.h>

unsigned int little_big_convert(unsigned int input){
    unsigned char k0, k1, k2, k3;
    k0 = (unsigned char)input;
    k1 = (unsigned char)(input>>8);
    k2 = (unsigned char)(input>>16);
    k3 = (unsigned char)(input>>24);
    unsigned int res = k0;
    res = (res << 8) + k1;
    res = (res << 8) + k2;
    res = (res << 8) + k3;

    return res;
    
}
