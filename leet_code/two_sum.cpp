// Given an array of integers, return indices of the two numbers such that they add up to a specific target.
// problem question link is as following
//https://leetcode.com/problems/two-sum/

// Solution is as following in this only solution function written


// high complexity solution is implimented brute force solution

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i = 0; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                     v.push_back(i);
                     v.push_back(j);
                     break;
                }
            }
        }
        return v;
    }
};


// more optamized solution with complexity O(n) only

#include <unordered_map> 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int, int> map;
        for(int i = 0; i < nums.size(); i++){
            map[nums[i]] = i;
        }
        for(int j = 0; j < nums.size(); j++){
            int diff = target - nums[j];
            if(map[diff] && map[diff]!=j){
                v.push_back(j);
                v.push_back(map[diff]);
                break;
            }
        }
        return v;
    }
};
