int get_time(long long angle) {
    int hour, minute, second, p;
    second = angle % 360;
    second = second / 6;
    p = angle / 360;
    hour = p / 60;
    minute = p % 60;
    return hour * 10000 + minute * 100 + second;
}