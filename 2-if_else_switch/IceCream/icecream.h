int icecream(int x){
    int a, b;
    if (x <= 0) return 0;
    for (int i = x / 3; i < x / 3 + 100; i++){
        a = -5 * i + 2 * x;
        b = 3 * i - x;
        if ((a >= 0) && (b >= 0)){
            return 1;
        }
    }
    return 0;
}