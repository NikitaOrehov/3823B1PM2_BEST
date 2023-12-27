#include <math.h>
#include <string.h>
#include <stdio.h>

typedef struct 
{
    unsigned char day;
    unsigned char month;
    unsigned int year;
} BornDate;

typedef struct 
{
    char name[10];
    char surname[20];
    BornDate borndate;
} Person;



double calc_avg_age(Person* persons, int num_persons){
    int average = 0;
    unsigned int flag = 0, sum = 0;
    for (int i = 0; i < num_persons; i++){
        if (persons[i].borndate.month == 12 && persons[i].borndate.day >= 15){
            flag = 1;
        }
        sum += (2023 - persons[i].borndate.year - flag);
        flag = 0;
    }
    return (double)sum / num_persons;
}
