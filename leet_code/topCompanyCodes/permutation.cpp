class Solution {
public:
    void getPermute(vector<int> nums, int i, vector<vector<int>> &res){
        if(i == nums.size() - 1){
            res.push_back(nums);
            return;
        }
        for(int j = i; j < nums.size(); j++){
            swap(nums[i], nums[j]);
            getPermute(nums, i + 1, res);
            swap(nums[i], nums[j]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        getPermute(nums, 0 , res);
        return res;
    }
};