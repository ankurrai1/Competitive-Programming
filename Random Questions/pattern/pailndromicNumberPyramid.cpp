#include<bits/stdc++.h>
using namespace std;


void pailndromicNumberPyramid(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++ ) cout << "   ";
        for(int j = 1; j <= i; j++) cout << " " << i-j +1 << " ";
        for(int j = 2; j <= i ; j++ ) cout << " " << j << " ";
        cout << endl;
    }
}

int main(){

    int n = 8;
    pailndromicNumberPyramid(n);
    return 0;
}
