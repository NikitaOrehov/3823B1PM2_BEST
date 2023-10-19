#include <stdbool.h>


bool is_digit(char x) {
    if (((int)x >= 48) && ((int)x <= 57)) return true;
    else return false;
}

bool is_letter(char x) {
    if ((((int)x >= 65) && ((int)x <= 90)) || (((int)x >= 97) && ((int)x <= 122))) return true;
    else return false;
}

bool is_punctuation(char x) {
    if ((((int)x >= 33) && ((int)x <= 47)) || (((int)x >= 58) && ((int)x <= 64)) || (((int)x >= 91) && ((int)x <= 96)) || (((int)x >= 123) && ((int)x <= 126))) return true;
    else return false;
}

int get_ascii_code(char first, char second, char third) {
    return (int)first * 1000000 + (int)second * 1000 + (int)third;
}

