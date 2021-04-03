#include<bits/stdc++.h>
using namespace std;


void ZigZagPattern(int n){
    for(int j = 1; j <= 3; j++){
        for(int i = 1 ; i <= n; i++){
            if((i + j) % 4 == 0) cout << " * ";
            else if(j == 2 && i % 4 == 0) cout << " * ";
            else cout << "   ";
        }
        cout << endl;
    }
}

int main(){

    int n = 25;
    ZigZagPattern(n);
    return 0;
}
