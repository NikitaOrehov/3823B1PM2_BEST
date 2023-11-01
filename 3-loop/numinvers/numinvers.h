int num_invers(int num){
    if (num < 0) return 0;
    int m = num % 10;
    num /= 10;
    for (int i = 1; num >= 1; i++){
        m = m * 10 + num % 10;
        num /= 10;
    }
    return m;

}