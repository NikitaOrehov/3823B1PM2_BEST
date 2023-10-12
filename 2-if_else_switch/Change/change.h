long long change(int a, int b, int c, int d){
    int h;
    h = 100 * a + b;
    if (h > (100 * c + d)) return -1;
    else {
        h = (100 * c + d) - (100 * a + b);
        return (h / 100) * 100 + (h % 100);
    }
}