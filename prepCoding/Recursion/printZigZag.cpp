#include<bits/stdc++.h>

// Basically this functionis for understand the flow of recursion
// it will help to  understand how to create tree and go through it and find the stack trace
// basically you have to go through euler path and or bottem top rooted tree.

using namespace std;

void PrintZigZag(int n){
    if(n == 0) return ;
    cout << "Pre : " << n << endl;
    PrintZigZag(n - 1);
    cout << "In : " << n << endl;
    PrintZigZag(n - 1);
    cout << "Post : " << n << endl;
    
}

int main(){
    int n = 5;
    PrintZigZag(n);
    return 0;
}