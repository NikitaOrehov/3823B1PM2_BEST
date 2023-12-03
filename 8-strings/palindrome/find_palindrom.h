#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int is_palindrom(char text[]){
    char* texting = malloc(40);
    int count = 0, count2 = 0;
    int number = 0;
    while (text[count] != '\0'){
        if (isalpha(text[count]) != 0){
            if (text[count] > 64 && text[count] < 91){
                texting[count2] = text[count] + 32;
                count2++;

            }
            else {
                texting[count2] = text[count];
                count2++;
            }
        }
        count++;
    }
    count = 100;
    count2--;
    for (int i = 0; i < sqrt(count2); i++){
        if (texting[i] != texting[count2 - i]){
            count = -1;
            break;
        }
    }
    free(texting);
    if (count == -1) return 0;
    return 1;
}


