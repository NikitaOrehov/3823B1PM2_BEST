char left_more(double input[], unsigned int size){
    int e = 0.0000001, count = 0;
    for (int i = 1; i < size; i++){
        if (((input[i] - input[i - 1]) > e && ((input[i] - input[i - 1]) > 0))){
             count += 1;
        }
    }
    return count;
}