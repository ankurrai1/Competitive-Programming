class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int lc = 1 << nums.size();
        vector<int> curr;
        for(int i = 0; i < lc; i++){
            for(int j = 0; j < nums.size(); j++){
                if(i & (1<<j)) curr.push_back(nums[j]);
            }
            res.push_back(curr);
            curr.clear();
        }
        return res;
    }
};

class Solution {
private:
    void makeSubsets(vector<vector<int>> &res, vector<int> &nums, vector<int> curr, int idx){
        res.push_back(curr);
        for(int i = idx; i < nums.size(); i++){
            curr.push_back(nums[i]);
            makeSubsets(res, nums, curr, i+1);
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        makeSubsets(res, nums, curr, 0);
        return res;
    }
};
