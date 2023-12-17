#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void correct_word(char word[]){
    int lenght = strlen(word);
    if (word[0] == 34){
        for (int i = 0; i <= lenght; i++){
            word[i] = word[i + 1];
        }
    }
    lenght--;
    if (word[lenght - 1] == 44){
        if (word[lenght - 2] == 34){
            word[lenght - 2] = '\0';
        }
        else word[lenght - 1] = '\0';
    }
}

char* object(FILE* file, char word[], char name[]){
    int flag = 0;
    while(1){
        fscanf(file, "%s", word);
        if ((strstr(word, "firstName") != NULL) || (strstr(word, "lastName") != NULL)){
            fscanf(file, "%s", word);
            correct_word(word);
            if (strcmp(word, name) == 0){
                flag = 1;
            }
        }     
        if ((strstr(word, "age") != NULL) && (flag == 1)){
            fscanf(file, "%s", word);//как считать только число
            return word;

        }    
        if (strcmp(word, "}") == 0){
            return NULL;
        }
    }
}

unsigned int parse_json(char filename[], char name[]){
    FILE* file = fopen(filename, "r");
    char word[100];
    char* answer = malloc(100);
    unsigned int age = 0;
    fscanf(file, "%s", word);
    while(feof(file) == 0){
        fscanf(file, "%s", word);
        if (strcmp(word, "{") == 0){
            answer = object(file, word, name);
            if (answer != NULL){
                int lenght = strlen(answer);
                if (answer[lenght - 1] == 44){
                    answer[lenght - 1] == '\0';
                    lenght--;
                }
                for (int i = 0; i < lenght; i++){
                    age = age * 10 + (answer[i] - 48);
                }
                return age;
            }
        }
    }
}