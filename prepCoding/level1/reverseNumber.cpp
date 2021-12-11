#include <bits/stdc++.h>

using namespace std;

int reverseNo(long long int number){
    long long int reversedNo = 0;
    while(number > 0){
        reversedNo = (reversedNo *10) + (number % 10);
        number /= 10;
    }
    return reversedNo;
}

int main(){
    long long int num;
    cin >> num;
    cout << reverseNo(num) << endl;
    return 0;
}