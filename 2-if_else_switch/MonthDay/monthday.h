int monthday(int month, int year){
    switch (month){
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31; break;
        case 2: if ((year % 4 == 0) || ((year % 100 == 0) && (year % 400 == 0))){
             return 29; break;
             }
             else{
                return 28;
                break;
             }
        default: return 30; break;
    } 
}