// Given a string columnTitle that represents the column title as appear in an Excel sheet, return its corresponding column number

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int res = 0;
        for(int i = 0; i < n; i++){
            res = (res * 26) + ((int)columnTitle[i] - 64);
        }
        return res;
    }
};