#include<bits/stdc++.h>
using namespace std;


void floydsTriangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++) cout << " * ";
        for(int k = i; k < n; k++) cout << "   ";
        for(int j = 0; j < n-i; j++) cout << "   ";
        for(int k = n-i; k < n; k++) cout << " * ";
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++) cout << " * ";
        for(int k = n-i; k < n; k++) cout << "   ";
        for(int j = 0; j < i; j++) cout << "   ";
        for(int k = i; k < n; k++) cout << " * ";
        cout << endl;
    }
}

int main(){

    int n = 7;
    floydsTriangle(n);
    return 0;
}
