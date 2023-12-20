#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int get_fileinfo(char filename[], unsigned int* abzac_num, unsigned int* num_word){
    FILE* p_file = fopen(filename, "r");
    unsigned int count = 0;
    char sym;
    *abzac_num = 0;
    *num_word = 0;
    while (feof(p_file) == 0){
        sym = fgetc(p_file);
        if (sym == '\n'){//нахождение абзацев
            sym = fgetc(p_file);
            if (sym == '\n'){
                count++;
                *abzac_num += 1;
                count++;
            }
            else{
                *abzac_num += 1;
                count++;
            }
        }
        count++;
    }
    fclose(p_file);
    FILE* file = fopen(filename, "r");
    char* word = (char*)malloc(100);
    while (feof(file) == 0){
        fscanf(file, "%s", word);
        if (strstr("1234567890", word) != NULL){
             continue;
        }
        *num_word += 1;
    }       
    *abzac_num += 1;
    fclose(file);
    return count - 1;
}