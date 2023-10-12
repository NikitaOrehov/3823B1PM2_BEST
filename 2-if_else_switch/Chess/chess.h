int chess_rook(char a, int b, char c, int d){
    if (((65 <= (int)a) && ((int)a <= 72)) && ((65 <= (int)c) && ((int)c <= 72))) 
        if (((a == c) && (b != d)) || ((b == d) && (a != c)))
            if (((1 <= b) && (b <= 8)) && ((1 <= d) && (d <= 8))) return 1;
            else return 0;
        else return 0;
    else return 0;
}