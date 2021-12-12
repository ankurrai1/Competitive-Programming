#include <bits/stdc++.h>

using namespace std;

int countDigits(int number){
    int count = 0;
    while(number > 0){
        number /= 10;
        count++;
    }
    return count;
}

int rotateNo(int number, int k){
    int digits = countDigits(number);
    int rotatedNo = 0;
    if(k < 0){
        k = abs(k);
        int left = number % (int)pow(10, digits - k);
        int right = number / (int)pow(10, digits -k);
        rotatedNo = left  * pow(10, k) + right;
    }
    else{
        int right = number / (int)pow(10, k);
        int left = (number % (int)pow(10, k))  * pow(10, digits-k);
        rotatedNo = left  + right;
    }
   return rotatedNo;
}

int main(){
    int num, k;
    cin >> num >> k;
    cout << rotateNo(num, k) << endl;
    return 0;
}