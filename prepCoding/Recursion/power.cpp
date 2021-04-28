#include<bits/stdc++.h>

using namespace std;

long long power(int x, int n){
    if(n < 1 )  return 1;
    long long temp = power(x, n /2);
    temp *= temp;
    if(n & 1) return temp * x;
    return temp;
}

int main(){
    int n = 5;
    int x = 2;
    long long res = power(x, n);
    cout << "power is :" << res << endl;
    return 0;
}