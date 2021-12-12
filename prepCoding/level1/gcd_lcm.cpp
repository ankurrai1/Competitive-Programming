// using division method
#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(a == 0) return b;
    return gcd(b%a, a);
}

int lcm(int a, int b){
    return (a*b) / gcd(a,b);
}

int main(){
    int a, b;
    a = 461952;
    b = 116298;
    cout << gcd(a, b) << endl; // exp = 18 
    return 0;
}