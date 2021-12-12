#include <bits/stdc++.h>

using namespace std;

void primeFactorization(int n){
    for(int i = 2; i*i <= n; i++){
        while(n % i == 0){
            cout << i << endl;
            n /= i;
        }
    }
    if(n != 0) cout << n << endl;
}

int main(){
    int num;
    cin >> num;
    primeFactorization(num);
    return 0;
}