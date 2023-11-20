#include <math.h>

int calcsize(void* memory){
    char* p = (char*)memory;
    int i = 0, count = 0, kk = 0, ll = 0;
    char number = 0;
    while(kk == 0){
        number = *(p + i);
        if ((number == 11) && (count == 0)){
            count = 1;
        }
        else if ((number == 47) && (count == 1)){
            kk = 1;
        }
        else if ((number != 0) && (count == 1)) count = 0;
        else if (number == 0 && count == 1) ll ++;
        i++;
    }
    return i + ll;
}
