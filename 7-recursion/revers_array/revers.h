#include <math.h>

void reverse(int* array, int size, int count){
    if (size == 0) return;
    count++;
    size--;
    int temp;
    if (count >= size) return;
    temp = array[size];
    array[size] = array[count];
    array[count] = temp;
    reverse(array, size, count);
}

void reverse_array(int* array, int array_size){
    int count = -1;
    reverse(array, array_size, count);
}
//решено