#include <bits/stdc++.h>
using namespace std;

// that is pre defined : you can take 1 2 or 3 steps only.
// otherwise we can take a array and iterate over it.


void printPermutation(string given, string result){
    if(given.size() == 0){
        cout << result << endl;
    }
    for(int i = 1; i <= given.size(); i++){
        char ch = given.at(i - 1);
        string left = given.substr(0,i-1);
        string right = given.substr(i);
        string curr = left+right;
        printPermutation(curr, result + ch);
    }
}


void permute(string str, int i){
    if(str.size() == i){
        cout << str << endl;
        return;
    }
    for(int j = i; j < str.size(); j++ ){
        swap(str[i], str[j]);
        permute(str, i+1);
        swap(str[i], str[j]);
    }
}

int main(){
    permute("ank", 0);
    cout << endl << endl;
    printPermutation("ank", "");
    return 0;
}