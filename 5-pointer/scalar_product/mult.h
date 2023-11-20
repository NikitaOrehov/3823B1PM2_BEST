#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    int up = 0, down1 = 0, down2 = 0;
    double answer = 0;
    for (int i = 0; i < size; i++){
        up += vec1[i] * vec2[i];
        down1 += pow(vec1[i], 2);
        down2 += pow(vec2[i], 2);
    }
    double down = sqrt(down1) * sqrt(down2);
    if ((int)(up / down) == 1) return 0;
    if ((int)(up / down) == -1) return 180;
    answer = acos(up / down) * 180 / 3.14;
    return (int)answer;
}
