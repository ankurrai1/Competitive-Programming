// taks is to print no from n to 1

#include <bits/stdc++.h>

using namespace std;

void printNums(int n){
    if(n < 1) return 0;
    cout << n << endl;
    printNums(n -1);
}

int main(){
    int n = 7;
    printNums(n);
    reuturn 0;
}