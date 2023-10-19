#include <math.h>

int get_score(short score, int start, int stop, int now) {
    double scr = (double)score;
    int p = (now <= start) * scr + (now >= stop) * ceil(scr / 2) + (now > start) * (now < stop) * ceil(scr - ((now - start) * ((scr/2) / (stop - start))));
    return p;
}
