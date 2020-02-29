// problem Toggle String  is about to compliment the case of each alphabet.
//link of problem is as follwing
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/


// solution function is as following


#include <bits/stdc++.h>
#include <string>

using namespace std;


int main() {
 string s, res;
 cin >> s;
 for(int i = 0; i < s.length(); i++){
    if (islower(s[i])){
       res += toupper(s[i]);
    }
    else{
        res += tolower(s[i]);
    }
 }
 cout << res;
}

// following is other solution based on ascii value change

// to execute it you have to exchange code between for block.

// if(s[i]>=65&&s[i]<=90)
//    { s[i]+=32;}
// else if(s[i]>=97 && s[i]<=122)
//     s[i]=s[i]-32;
