#include <math.h>
#include <string.h>
#include <stdio.h>

unsigned int get_fileinfo(char filename[], unsigned int* abzac_num, unsigned int* num_word){
    int a;
    int b;
    int c;
    int d;
    FILE* p_file = fopen(filename, "r");
    unsigned int count = 0;
    char sym;
    while (feof(p_file) == 0){
        sym = fgetc(p_file);
        if ((int)sym == 32){
            *num_word += 1;
        }
        count++;
    }
    *num_word += 1;
    a = 10;
    for (int i = 0; i < 2; i++){
        a = i;
    }
    return count - 1;
}


