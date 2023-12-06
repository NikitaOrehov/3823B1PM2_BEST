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










//     int punction(int x){
//     if (((x >= 32) && (x <= 47)) || ((x >= 58) && (x <= 64)) || ((x >= 91) && (x <= 96)) || ((x >= 123) && (x <= 126))){
//         return 1;
//     }
//     return 0;
// }


// int is_palindrom(char text[]){
//     int length = strlen(text) - 1, right  = 0, left = 0, flag = 1;
//     while (left < length - right){
//         if (punction(text[left]) == 1){
//             left++;
//             continue;
//         }
//         if (punction(text[length - right]) == 1){
//             right++;
//             continue;
//         }

//         if (text[left] == text[length - right]){
//             left++;
//             right++;
//         }
//         else{
//             flag = -1;
//             break;
//         }
//     }
//     if (flag == -1) return 0;
//     return 1;
// }