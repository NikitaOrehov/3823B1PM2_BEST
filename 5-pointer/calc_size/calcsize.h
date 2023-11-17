#include <math.h>

int calcsize(void* memory){
    int* p = (int*)memory;
    int count = 1;
    while ((*(p - 1) != 11) || (*p != 47)){
        p += 1;
        count += 1;
    }
    return count;
}
// 1 2 3 4 5 6