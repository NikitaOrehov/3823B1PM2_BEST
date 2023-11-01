long fib(int m){
    int sum = 1, k1 = 0, k2 = 1, k3 = 1;
    if (m < 0) return -1;
    while (k3 <= m){
        sum += k3;
        k1 = k2;
        k2 = k3;
        k3 = k1 + k2;
    }
    return sum;

}