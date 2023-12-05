#include <math.h>
#include <string.h>

void lower(char* str){
    int count = 0;
    while(str[count] != '\0'){
        if (str[count] > 64 && str[count] < 91){
            str[count] += 32;
        }
        count++;
    }
    
}
