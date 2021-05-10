#include <bits/stdc++.h>

using namespace std;


int MazePaths(int n, int m){
    if(n == 0 && m == 0){
        return 0;
    }
    int res = 0 ;
    if(n > 0) res = MazePaths(n - 1, m) + 1;
    if(m > 0) res = MazePaths(n, m -1) + 1;
    return res;
}

int main(){
    int n = 3;
    int m = 3;
    int res = MazePaths(n, m);
    cout << res << endl;
    return 0;
}