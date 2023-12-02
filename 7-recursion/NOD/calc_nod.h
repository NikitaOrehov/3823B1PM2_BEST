#include <math.h>

int nod(int first, int second){
    if ((first == 0 || second == 0)) return -1;
    if (first % second == 0) return second;
    else (second = nod(second, first % second));
    return second;
}
//решено