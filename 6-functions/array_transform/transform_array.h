#include <math.h>



void first_function(double* array, int size){
    for (int i = 0; i < size; i++){
        array[i] += 1;
    }
}

void second_function(double* array, int size){
    for (int i = 0; i < size; i++){
        array[i] = sqrt(fabs(array[i]));
    }
}

void third_function(double* array, int size){//что взять по модулю элементы, которые возводим или элементы, из которых считаем среднее арифметическое
    double sum = 0;
    for (int i = 0; i < size; i++){
        sum += array[i];
    }
    double average = sum / size;
    for (int i = 0; i < size; i++){
        array[i] = pow(array[i], average);
    }
}

void fouth_function(double* array, int size){
    for (int i = 0; i < size; i++){
        if ((int)array[i] % 2 == 0){
            array[i] = (int)array[i] * (-1);
        }
        else array[i] = pow((int)fabs(array[i]), -1);
    }
}

void fiveth(double* array, int size){
    for (int i = 0; i < size; i++){
        if (((int)array[i] % 2 == 0) && (i % 2 == 0)) array[i] = 0;
    }
}

void sixth_function(double* array, int size){
    for (int i = 0; i < size; i++){
        if (i % 2 == 0) array[i] = -1;
        else array[i] = 1;
    }
}



void transform(double* array, int size, int* comands, int comands_count){
    for (int i = 0; i < comands_count; i++){
        switch (comands[i]){
            case 1: first_function(array, size); break;
            case 2: second_function(array, size); break;
            case 3: third_function(array, size); break;
            case 4: fouth_function(array, size); break;
            case 6: sixth_function(array, size); break;
            default: break;
        }
    }
    return;
}
