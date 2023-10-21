long long change(int a, int b, int c, int d){
    long long _c = c;
    long long int h = 100 * a + b, f;
    if (h > (100 * _c + d)) return -1;
    else {
        f = (100 * _c + d) - (100 * a + b);
        return (f / 100) * 100 + (f % 100);
    }
}