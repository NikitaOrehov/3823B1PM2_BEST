long long change(int a, int b, long long int c, int d){
    long long int h = 100 * a + b, f;
    if (h > (100 * c + d)) return -1;
    else {
        f = (100 * c + d) - (100 * a + b);
        return (f / 100) * 100 + (f % 100);
    }
}