#include <bits/stdc++.h>
using namespace std;

// that is pre defined : you can take 1 2 or 3 steps only.
// otherwise we can take a array and iterate over it.


void printStairPaths(int n, string str){
    if(n < 0) return;
    if(n == 0){
        cout << str << endl;
        return;
    }
    printStairPaths(n - 1, str + "1");
    printStairPaths(n - 2, str + "2");
    printStairPaths(n - 3, str + "3");
    
}

int main(){
    int n = 5;
    printStairPaths(n,"");
    return 0;
}