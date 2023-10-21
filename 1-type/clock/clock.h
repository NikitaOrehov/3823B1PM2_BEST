int get_time(long long angle) {
    int p;
    int hours = angle / (360 * 60);
    p = angle % (360 * 60);
    int minutes = p / 360;
    int seconds = (p % 360) / 6;
    return hours * 10000 + minutes * 100 + seconds;
}