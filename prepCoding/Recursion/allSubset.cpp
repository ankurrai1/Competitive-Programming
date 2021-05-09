
#include <bits/stdc++.h>

using namespace std;

void getSubSequence(string str,unsigned int i, string curr, vector<string> &res){
    if(i == str.size()){
        res.push_back(curr);
        return;
    }
    getSubSequence(str, i+1, curr + str[i], res);
    getSubSequence(str, i+1, curr, res);
    
}

int main(){
    
    string str = "abc";
    vector<string> res;
    getSubSequence(str, 0,"",res);
    cout << "size : "<< res.size() << endl;
    for(string ele : res){
        cout << ele << " ";
    }
    
    return 0;
}