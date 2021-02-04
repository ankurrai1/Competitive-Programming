// print sub sequence usnig bit masking

#include<bits/stdc++.h>

using namespace std;

void printCurrentPattern(string str, int i){
    string res = "";
    int pos = 0;
    while(i){
        if((i & 1) == 1){
            cout << str[pos];
        }
        pos++;
        i >>= 1;
    }
    cout << endl;
}

void printSubSequence(string str, int len){
    for(int i = 0; i < (1 << len); i++){
        printCurrentPattern(str,i);
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        int len = str.size();
        printSubSequence(str, len);
        cout << "\n ------------------------------------------------------------- \n";
    }
}