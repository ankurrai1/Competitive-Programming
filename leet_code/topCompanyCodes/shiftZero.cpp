
// Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = 0, e = 0;
        while(e < nums.size()){
            if(nums[e] != 0){
                swap(nums[s], nums[e]);
                s++;
            }
            e++;
        }
        
    }
};