#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        for(int i = 1; i <= numRows; i++){
            vector<int> curr;
            int c = 1;
            for(int j = 1; j <= i; j++){ 
                curr.push_back(c);
                c = c * (i - j) /j;
            }
            triangle.push_back(curr);
        }
        return triangle;
    }
};