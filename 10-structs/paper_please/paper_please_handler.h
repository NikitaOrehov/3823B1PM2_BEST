#include <math.h>
#include <string.h>
#include <stdio.h>

struct BornDate {
    unsigned char day;
    unsigned char month;
    unsigned int year;
};

struct Pasport{
    char* name;
    char* surname;
    char gender; //M or F
    struct BornDate bornDate;
    char* country;
};

struct Person
{
    char driver_license;
    struct Pasport pasport;
    char* working_specialty;
};



unsigned char paper_please_game(struct Person* persons, unsigned char size){
    int count = 0;
    for (int i = 0; i < size; i++){
        if (persons[i].driver_license != 'B') continue;
        if (persons[i].pasport.bornDate.year < 1983) continue;
        if (strcmp(persons[i].pasport.country, "Arstocka") != 0 && strcmp(persons[i].pasport.country, "Arcanistan") != 0) continue;
        if (strcmp(persons[i].working_specialty, "programmist") != 0 && strcmp(persons[i].working_specialty, "major") != 0 && strcmp(persons[i].working_specialty, "collective farmer") != 0) continue;
        count++;
    }
    return count;
}


// 1) Возраст меньше 40 лет
// 2) Государство "Arstocka" или "Arcanistan"
// 3) Рабочая специальность: programmist, major, collective farmer
// 4) Водительские права категории B