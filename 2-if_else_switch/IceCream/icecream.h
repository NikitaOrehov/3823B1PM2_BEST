int icecream(int x){
    if (x == 8) return 1;
    if (x == 0) return 0;
    if ((x % 5 == 0) || (x % 3) == 0) return 1;
    else return 0;
}