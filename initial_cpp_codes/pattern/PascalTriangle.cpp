#include<bits/stdc++.h>
using namespace std;


void PascalTriangle(int n){
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i; j++) cout << "  ";
        int coff = 1;
        for(int j = 0 ; j <= i; j++){
            if(i == 0 || j == 0) coff = 1;
            else coff = coff * (i - j + 1)/j;
            cout << coff << "   ";
        }
        cout << endl;
    }
}

int main(){

    int n = 5;
    PascalTriangle(n);
    return 0;
}
