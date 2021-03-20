#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, short> hash;
        for(int i = 0; i < nums.size(); i++){
            if(hash[nums[i]]) return true;
            else hash[nums[i]]++;
        }
        return false;
    }
};