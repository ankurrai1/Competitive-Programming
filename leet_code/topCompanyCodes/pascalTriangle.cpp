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


// other version of pascal trianlge

class Solution {
public:
    vector<vector<int>> generate(int numofRows) {
        vector<vector<int>> triangle(numofRows);
        for(int i=0;i<numofRows;i++){
            triangle[i].resize(i+1);
            triangle[i][0] = triangle[i][i] = 1;
            for (int j = 1; j < i; j++)
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        return triangle;
    }
};