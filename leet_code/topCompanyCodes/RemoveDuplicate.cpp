//task is to remove duplicates from sorted array

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int p1 = 0, p2 = 0, n = nums.size();
        while(p2 < n){
            if(nums[p1] != nums[p2]){
                p1++;
                swap(nums[p1],nums[p2]);
            }
            p2++;
        }
        return (n >= 1 ? p1 + 1 : 0);
    }
};