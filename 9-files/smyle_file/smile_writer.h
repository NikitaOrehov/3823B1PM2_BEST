#include <math.h>
#include <string.h>
#include <stdio.h>

void files(FILE* file, char word[]){
    if (strcmp(word, "smile") == 0){
        fputs("(n_n)\n", file);
    }
    else if (strcmp(word, "uh...oh") == 0){
        fputs("(._.)\n", file);
    }
    else if (strcmp(word, "sleepy, tired") == 0){
        fputs("(-_-)\n", file);
    }
    else if (strcmp(word, "tears") == 0){
        fputs("(;_;)\n", file);
    }
    else if (strcmp(word, "dizzy") == 0){
        fputs("(@_@)\n", file);
    }
    else if (strcmp(word, "amazed") == 0){
        fputs("(0_0)\n", file);
    }
    else if (strcmp(word, "astonished") == 0){
        fputs("(*^*)\n", file);
    }
    else if (strcmp(word, "ouch") == 0){
        fputs("(>_<)\n", file);
    }
    else if (strcmp(word, "happy") == 0){
        fputs("(^_^)\n", file);
    }
    else if (strcmp(word, "happier") == 0){
        fputs("*(^0^)*\n", file);
    }
    else if (strcmp(word, "glad") == 0){
        fputs("(^0^)\n", file);
    }
    else if (strcmp(word, "dead") == 0){
        fputs("(x.x)\n", file);
    }
    else if (strcmp(word, "bored") == 0){
        fputs("(=_=)\n", file);
    }
    else if (strcmp(word, "i love it") == 0){
        fputs("(*-*)\n", file);
    }
    else if (strcmp(word, "sad") == 0){
        fputs("(!_!)\n", file);
    }
    else if (strcmp(word, "incredulous") == 0){
        fputs("(o_O)\n", file);
    }
    else if (strcmp(word, "incredible") == 0){
        fputs("(*O*)\n", file);
    }
    else if (strcmp(word, "seriously?") == 0){
        fputs("(o_o)\n", file);
    }
    else if (strcmp(word, "crying bad") == 0){
        fputs("(;o;)\n", file);
    }
    else if (strcmp(word, "confused") == 0){
        fputs("(.o.')\n", file);
    }
    else if (strcmp(word, "i messed it up") == 0){
        fputs("(-_-;)\n", file);
    }
    else if (strcmp(word, "serious") == 0){
        fputs("('_')\n", file);
    }
    else if (strcmp(word, "sleepy, sad") == 0){
        fputs("(u_u)\n", file);
    }
    else if (strcmp(word, "noooo") == 0){
        fputs("(xOx)\n", file);
    }
    else if (strcmp(word, "yuck!") == 0){
        fputs("(>o<)\n", file);
    }
    else if (strcmp(word, "wink") == 0){
        fputs("(-_o)\n", file);
    }
    else if (strcmp(word, "jealous") == 0){
        fputs("8(>_<)8\n", file);
    }
    else if (strcmp(word, "didn't sleep") == 0){
        fputs("(9_9)\n", file);
    }
    else if (strcmp(word, "awry") == 0){
        fputs("(>>)\n", file);
    }
    else if (strcmp(word, "you're crazy") == 0){
        fputs("(~o~)\n", file);
    }
}


void write_smile(char filename[], char smile_names[]){
    FILE* file = fopen(filename, "w");
    int count = 0, lenght = 0;
    char word[15];
    while (smile_names[count] != '\0'){
        if (smile_names[count] == 44){
            word[lenght] = '\0';
            files(file, word);
            lenght = 0;
        }
        else if (smile_names[count] == 32){
            count++;
            continue;
        }
        else{
            word[lenght] = smile_names[count];
            lenght++;
        }
        count++;
    }
    word[lenght] = '\0';
    files(file, word);
}