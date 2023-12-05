#include <math.h>
#include <string.h>

int calculate_expression(char expression[]){
    int number, count = 0, sum = 0, flag = 1;
    if (expression[count] == 45){
         flag = 2;
         count++;
    }
    
    while (flag){
        number = 0;
        while(expression[count] != 43 && expression[count] != 45 && expression[count] != '\0'){
            number = number * 10 + (expression[count] - 48);
            count++;
        }
        if (flag == 2) number *= -1;
        sum += number;
        if (expression[count] != '\0' && (expression[count + 1] == 45 || expression[count + 1] == 43)){
            sum = -1;
            break;
        }
        if (expression[count] == 43) flag = 1;
        else if (expression[count] == 45) flag = 2;
        else break;
        count++;
    }
    return sum;
}