#include <math.h>
#include <string.h>
#include <stdio.h>

char* tree_writer(int height){//входные данные
    FILE* file = fopen("treee.txt", "w");
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
    int podstavka = (height - 1) - (height - 3);
    for (int i = 0; i < podstavka; i++){
        fputs("_", file);
    }
    fputs(" ", file);
    for (int i = 0; i < podstavka; i++){
        fputs("_", file);
    }
    return file;//Что возвращать?
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