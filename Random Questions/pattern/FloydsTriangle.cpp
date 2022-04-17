#include<bits/stdc++.h>
using namespace std;


void floydsTriangle(int n){
    int count = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++) cout << count++ << " ";
        cout << endl;
    }
}

int main(){

    int n = 7;
    floydsTriangle(n);
    return 0;
}
