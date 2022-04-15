class Solution {
private:
    void fillSubset(vector<vector<int>> &res, vector<int> &nums, vector<int> curr, int idx){
        res.push_back(curr);
        if(idx == nums.size()) return;
        for(int i = idx; i < nums.size(); i++ ){
            if(i != idx && nums[i] == nums[i-1] ) continue;
            curr.push_back(nums[i]);
            fillSubset(res, nums, curr, i+1);
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> curr;
        fillSubset(res, nums, curr, 0);
        return res;
    }
};
