#include <math.h>
#include <string.h>

void DelSymbol1(char *str, char sym){
    int length = strlen(str);
    for (int i = 0; i < length; i++){
        if (str[i] == sym){
            for (int j = i; j <= length; j++){
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    
}

