#include <math.h>
#include <string.h>
#include <stdio.h>

unsigned int parse_xml(char filename[], char company_name[]){
    FILE* file = fopen(filename, "r");
    char teg[60];
    int sym = 0, lenght = 0, count = 0;
    while (feof(file) == 0){
        sym = getc(file);
        if (sym == 60){//начало тега
            while (1){//запишем тег
                sym = getc(file);
                if (sym == 62){
                    teg[lenght] = '\0';
                    break;
                }
                teg[lenght] = sym;
                lenght++;
            }
            if (strstr(teg, "Customer") != NULL){
                if (strstr(teg, company_name) != NULL){
                    count++;
                }
            }
            lenght = 0;
        }
    }
    return count;
}
//60 - 62
//Customer