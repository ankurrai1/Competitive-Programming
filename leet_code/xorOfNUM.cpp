// you have to find the non paired no in given list of

#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xr = 0;
        for(int i = 0; i < n; i++){
            xr ^= nums[i];
        }
        return xr;
        
    }
};