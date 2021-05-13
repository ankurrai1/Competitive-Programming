#include <bits/stdc++.h>

using namespace std;

void MazePaths(int n, int m, string curr, vector<string> &res){
    if(n == 1 && 1 == m){
        res.push_back(curr);
        return;
    }
    if(m > 1) MazePaths(n, m - 1, curr + "h", res);
    if(n > 1) MazePaths(n - 1, m, curr + "v", res);
    
}

vector<string> MazePaths(int srow, int scol, int erow, int ecol){
    if(srow == erow && scol == ecol){
        vector<string> res;
        res.push_back("");
        return res;
    }
    
    vector<string> hPaths;
    vector<string> vPaths;
    vector<string> res;
    
    if(scol < ecol) hPaths = MazePaths(srow, scol + 1, erow, ecol);
    if(srow < erow) vPaths = MazePaths(srow + 1, scol, erow, ecol);
    
    for(string hPath : hPaths){
        res.push_back("h" + hPath);
    }
    for(string vPath : vPaths){
        res.push_back("v" + vPath);
    }
       
    return res; 
}

int main(){
    int n = 3;
    int m = 3;
    vector<string> re = MazePaths(1, 1, n, m);
    for(string val : re){
        cout << val << endl;
    }
    cout << endl << endl;
    vector<string> res;
    MazePaths(n, m, "", res);
    for(string val : res){
        cout << val << endl;
    }
    return 0;
}