#include <bits/stdc++.h>

using namespace std;


// this code will deal with all ascii characters

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> hash(256,0);
        for(int i = 0; i<s.size(); i++){
            hash[int(s[i])] += 1;
        }
        for(int i = 0; i < t.size(); i++){
            hash[int(t[i])] -= 1;
        }
        for(int i = 0; i < 256; i++){
            if(hash[i] != 0) return false;
        }
        return true;
    }
};