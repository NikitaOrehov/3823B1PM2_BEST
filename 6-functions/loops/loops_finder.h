#include <math.h>
#include <stdlib.h>


int** matrix(int* pic, int size, int* p){
    size = (int)sqrt(size);
    int** array = malloc(sizeof(int*) * sqrt(size));
    for (int i = 0; i < sqrt(size); i++){
        for (int j = 0; j < sqrt(size); j++){
            array[i][j] = pic[i * size + j];
        }
    }
    return array;
}

void start(int** array, int size, int* start_row, int* start_col){
    for (int i = 0; i < sqrt(size); i++){
        if (array[i][0] == 1){
            *start_row = i;
            *start_col = 0;
            break;
        }
    }
}

void search(int** array, int* now_row, int* now_col){
    
}

void find_loops(int* pic, int size, int* num_loop, int* start_row, int* start_col, int* finish_row, int* finish_col){
    int* p = malloc(sizeof(int) * size);
    matrix(pic, size, p);
    typedef struct coordinates{
        int row;
        int col;
    }coordinates;
    coordinates array[40];
    for (int i = 0; i < 40; i++){
        array[i].row = -1;
        array[i].col = -1;
    }
    array[0].row = *start_row;
    array[0].col = *start_col;
    int* now_row, now_col;
    *now_row = *start_row;
    // *now_col = *start_col;
    size = sqrt(size);
    int flag = 1;
    while (flag != 0){
        
    }


    free(p);
    //free(array);
    return;
}
