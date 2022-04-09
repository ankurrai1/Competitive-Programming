// Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

// https://leetcode.com/problems/permutations-ii/


class Solution {
private:
    void permute(vector<vector<int>> &res, vector<int> nums, int idx){
        if(idx == nums.size()){
            res.push_back(nums);
            return;
        }
        for(int i = idx; i < nums.size(); i++){
            if(i > idx && nums[i] == nums[idx]) continue; // put to avoid duplicates
            swap(nums[idx], nums[i]);
            permute(res, nums, idx+1);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end()); // to help avoiding duplicaticy
        permute(res, nums, 0);
        return res;
    }
};
