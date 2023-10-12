int icecream(int x){
    while ((x % 3 == 0) || (x % 5 == 0)){
        if (x % 3 == 0) x = x / 3;
        else x = x / 5;
    }
    if (x == 0) return 1;
    else return 0;
}