#include <bits/stdc++.h>
using namespace std;

vector<string> mazePathsWithJumps(int srow, int scol, int erow, int ecol){
    if(srow == erow && scol == ecol){
        vector<string> res;
        res.push_back("");
        return res;
    }
    
    vector<string> res;
    
    for(int hm = 1; hm <= ecol - scol; hm++){
        vector<string> hPaths = mazePathsWithJumps(srow, scol + hm, erow, ecol);
        for(string hPath : hPaths){
            string form = "h" + to_string(hm) + hPath;
            res.push_back(form);
        }
    }
    
    for(int hm = 1; hm <= erow - srow; hm++){
        vector<string> vPaths = mazePathsWithJumps(srow + hm, scol, erow, ecol);
        for(string vPath : vPaths){
             string form = "v" + to_string(hm) + vPath;
            res.push_back(form);
        }
    }
    
     for(int hm = 1; hm <= erow - srow && hm <= erow - srow; hm++){
        vector<string> dPaths = mazePathsWithJumps(srow + hm, scol + hm, erow, ecol);
        for(string dPath : dPaths){
            string form = "d" + to_string(hm) + dPath;
            res.push_back(form);
        }
    }

    return res; 
}

int main(){
    int n = 3;
    int m = 3;
    vector<string> re = mazePathsWithJumps(1, 1, n, m);
    cout << "response size : " << re.size() << endl;
    for(string val : re){
        cout << val << endl;
    }
    return 0;
}