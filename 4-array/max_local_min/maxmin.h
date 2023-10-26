int maxmin(int input[], int size){
    int count = 0;
    for (int i = 1; i < size - 1; i++)
        if ((input[i] < input[i - 1]) && (input[i] < input[i + 1]) && (input[i] > count)){
            count = input[i];
        }
    if ((input[0] < input[1]) && input[0] > count){
        count = input[0];
    }
    if ((input[size - 1] < input[size - 2]) && input[size - 1] > count){
        count = input[0];

    }
    return count;
}