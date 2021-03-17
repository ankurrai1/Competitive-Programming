// Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000

// For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> keys;
        keys['I'] = 1;
        keys['V'] = 5;
        keys['X'] = 10;
        keys['L'] = 50;
        keys['C'] = 100;
        keys['D'] = 500;
        keys['M'] = 1000;
        int n = s.size();
        int num = keys[s[n-1]] ;
        for(int i = n-2; i >= 0; i--){
            if(keys[s[i]] < keys[s[i + 1]]){
                num -= keys[s[i]];
            }
            else num += keys[s[i]];
        }
        return num;
        
    }
};