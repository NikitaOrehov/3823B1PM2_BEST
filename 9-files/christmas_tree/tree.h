#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char* tree_writer(int height){//входные данные
    FILE* file = fopen("p.txt", "wb");
    char* answer = malloc(100);
    answer[0] = 'p';
    answer[1] = '.';
    answer[2] = 't';
    answer[3] = 'x';
    answer[4] = 't';
    answer[5] = '\0';
    int galochka = 0;
    for (int i = 0; i < height - 1; i++){
        fputs(" ", file);
    }
    fputs("*\n", file);
    for (int i = 0; i < height - 1; i++){
        fputs(" ", file);
    }
    fputs("^\n", file);
    for (int i = height - 2; i >= 0; i--){
        for (int j = i; j > 0; j--){
            fputs(" ", file);
        }
        galochka = (height - 1) - i;
        for (int i = 0; i < galochka; i++){
            fputs("^", file);
        }
        fputs("|", file);
        for (int i = 0; i < galochka; i++){
            fputs("^", file);
        }
        fputs("\n", file);
    }

    for (int i = 0; i < height - 3; i++){
        fputs(" ", file);
    }
    fputs("_", file);
    fputs("_", file);
    fputs(" ", file);
    fputs("_", file);
    fputs("_", file);
    fclose(file);
    return answer; //Что возвращать?
}


//        *
//        ^
//       ^|^
//      ^^|^^
//     ^^^|^^^
//    ^^^^|^^^^
//   ^^^^^|^^^^^
//  ^^^^^^|^^^^^^
// ^^^^^^^|^^^^^^^
//      __ __