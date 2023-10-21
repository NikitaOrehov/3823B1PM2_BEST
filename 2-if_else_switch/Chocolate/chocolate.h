int chocolate(int n, int m, int k){
    if ((k == 1) && (m != 1) && (n != 1)) return 0;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j <= m; j++){
            if (i * j == k) return 1;
        }
    }
    return 0;
}