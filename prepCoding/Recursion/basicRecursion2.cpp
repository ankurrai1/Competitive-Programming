// taks is to print no from 1 to n

#include <bits/stdc++.h>

using namespace std;

void printNums(int n){
    if(n < 1) return;
    printNums(n -1);
    cout << n << endl;
}

int main(){
    int n = 7;
    printNums(n);
    return 0;
}