#include<bits/stdc++.h>
using namespace std;


void HalfPyramid(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < (n-i-1); j++) cout << " ";
        for(int k = (n-i-1); k < n; k++) cout << "*";
        cout << endl;
    }
}

int main(){

    int n = 5;
    HalfPyramid(n);
    return 0;
}
