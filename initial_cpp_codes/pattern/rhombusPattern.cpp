#include<bits/stdc++.h>
using namespace std;


void rhombusPattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++ ) cout << "   ";
        for(int j = 1; j <= n; j++) cout << " * ";
        cout << endl;
    }
}

int main(){

    int n = 8;
    rhombusPattern(n);
    return 0;
}
