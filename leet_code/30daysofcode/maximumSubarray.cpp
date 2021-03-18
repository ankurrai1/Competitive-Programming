#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSF = nums[0], Cmax = nums[0];
        int n = nums.size();
        for(int i = 1; i < n; i++){
            Cmax = max(nums[i], Cmax+nums[i]);
            maxSF = max(maxSF, Cmax);
        }
        return max(maxSF, Cmax);
    }
};