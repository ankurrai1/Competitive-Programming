


// Bit wise Solution

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


// regular solution
class Solution {
private:
    void makeSubsets(vector<vector<int>> &res, vector<int> &nums, vector<int> curr, int idx){
        if(idx == nums.size()){
            res.push_back(curr);
            return;
        }
        makeSubsets(res, nums, curr, idx +1);
        curr.push_back(nums[idx]);
        makeSubsets(res, nums, curr, idx +1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        makeSubsets(res, nums, curr, 0);
        return res;
    }
};
