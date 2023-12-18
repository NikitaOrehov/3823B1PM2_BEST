#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void check(char word[]){
    if (word[0] >= 65 && word[0] <= 90){
        word[0] = word[0] + 32;
    }
    int length = strlen(word);
    for (int i = 0; i < length; i++){
        if (((word[i] >= 32) && (word[i] <= 47)) || ((word[i] >= 58) && (word[i] <= 64))){
            word[i] = '\0';
            return;
        }
    }

}


void check_array(char** words, char word[], int array[], int* len){
    int length = strlen(word);
    for (int i = 0; i < *len; i++){
        if (strcmp(words[i], word) == 0 || strstr(word, words[i]) != NULL || strstr(words[i], word) != NULL){
            int lenght2 = strlen(words[i]);
            if (abs(lenght2 - length) > 1 && i == 46){
                continue;
            }
            if (word[0] == '\0'){
                continue;
            }
            array[i]++;
            return;
        }
    }
    words[*len] = malloc(50);
    strcpy(words[*len], word);
    array[*len] = 1;
    *len += 1;
}



char* get_word(char filename[], unsigned int how_many_times){
    char* word = malloc(100);// что если char word[50] Почему не удаляется?
    char** dictionary = malloc(sizeof(char*) * 1000);
    int array[1000], len = 0;
    FILE* p_file = fopen(filename, "r");
    while (feof(p_file) == 0){
        fscanf(p_file, "%s", word);
        check(word);
        if (strcmp(word, "of") == 0 || strcmp(word, "the") == 0 || strcmp(word, "a") == 0 || strcmp(word, "to") == 0 || strcmp(word, "at") == 0) continue;
        check_array(dictionary, word, array, &len);
    }
    char* answer = malloc(100);
    for (int i = 0; i < len; i++){
        if (array[i] == how_many_times){
            strcpy(answer, dictionary[i]);
            break;
        }
    }
    for (int i = 0; i < len; i++){
        free(dictionary[i]);
    }
    free(dictionary);
    fclose(p_file);
    free(word);
    return answer;
}