#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int a = left;
    int i = 0; //Счётчик итераций
    int middle;
    while (left < right){
        i += 1;
        middle = (left + right) / 2;
        if (number > middle){
            left = middle + 1;
        }
        else if (number == middle){
            return ((number - a) * i);
        }
        else{
            right = middle - 1;
        }

    }

    return i; //НЕ МЕНЯТЬ!
}