#include<bits/stdc++.h>
using namespace std;


void starPattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++ ) cout << " ";
        for(int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n - i ; j++ ) cout << " ";
        for(int j = 1; j <= i; j++) cout << "* ";
        cout << endl;
    }
}

int main(){

    int n = 5;
    starPattern(n);
    return 0;
}
