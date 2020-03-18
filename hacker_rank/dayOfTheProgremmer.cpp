// problem lint is as following
//https://www.hackerrank.com/challenges/day-of-the-programmer/problem
// only solution functon is there;

int getDate(int year){
    int date = 13;
    if(year <= 1917 && year % 4 == 0){
        date = 12;
    }
    else if (year > 1918){
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
            date = 12;
        }
    }
    return date;
}

string dayOfProgrammer(int year) {
    if(year == 1918){
        return "26.09.1918";
    }
    int date = getDate(year);
    return to_string(date)+ ".09." + to_string(year);
}
