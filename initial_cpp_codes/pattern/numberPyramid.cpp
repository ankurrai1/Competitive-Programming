#include<bits/stdc++.h>
using namespace std;


void numberPyramid(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++ ) cout << "   "; //3 space
        for(int j = 1; j <= i; j++) cout << " " << j << "    "; // 4 spaces
        cout << endl;
    }
}

int main(){

    int n = 8;
    numberPyramid(n);
    return 0;
}
