class Solution {
public:
    
    void generateAllSubset(vector<int>nums,vector<int>curr,int i,vector<vector<int>> &res){
        if(i == nums.size()){
            res.push_back(curr);
            return;
        }
        generateAllSubset(nums,curr,i+1,res);
        curr.push_back(nums[i]);
        generateAllSubset(nums, curr, i + 1, res);
    }

    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        generateAllSubset(nums,curr,0,res);
        return res;
    }
};