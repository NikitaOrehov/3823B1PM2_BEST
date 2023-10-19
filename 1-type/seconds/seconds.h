int get_years(int seconds) {
    int p = seconds / 32140800;
    return 1970 + p;
}

int get_month(int seconds) {
    int p = seconds / 2678400;
    return p % 12;
}

int get_day(int seconds) {
    int p = seconds / 86400;
    return p % 31;
}

int get_hours(int seconds) {
    int p = seconds / 3600;
    return p % 24;
}

int get_minutes(int seconds) {
    int p = seconds / 60;
    return p % 60;
}

int get_seconds(int seconds) {
    return seconds % 60;
}


int get_magical_value(int seconds) {
    int year = get_years(seconds);
    int month = get_month(seconds);
    int day = get_day(seconds);
    int hours = get_hours(seconds);
    int minutes = get_minutes(seconds);
    int second = get_seconds(seconds);
    return ((year + month)/(1 + day + second))*((year + month)/(1 + day + second)) + (minutes + minutes/(1 + hours))/(1 + hours);
}