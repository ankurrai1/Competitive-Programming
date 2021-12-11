#include <bits/stdc++.h>

using namespace std;

int countDigits(long long int number){
    int count = 0;
    while(number > 0){
        number /= 10;
        count++;
    }
    return count;
}

int main(){
    long long int num;
    cin >> num;
    cout << countDigits(num) << endl;
    return 0;
}