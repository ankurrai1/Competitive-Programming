

//Solutions with DP Fast and all test case passed

class Solution {

private:
    int findAllCombinations(vector<int> &DP, int target, vector<int> nums){
        if(DP[target] != -1) return DP[target];
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] <= target)
            ans += findAllCombinations(DP, target - nums[i], nums);
        }
        DP[target] = ans;
        return ans;
    }

public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<int> DP(target+ 1 , -1);
        DP[0] = 1;
        int res = findAllCombinations(DP, target, nums);
        return res;
    }
};


// solve the problem but timeLimit will crossed
class Solution {
private:
    void findAllCombinations(int &res, int target, vector<int> nums){
        if(target == 0){
            res++;
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(target < nums[i]) continue;
            findAllCombinations(res, target - nums[i], nums);
        }
    }
public:
    int combinationSum4(vector<int>& nums, int target) {
        int result = 0;
        findAllCombinations(result, target, nums);
        return result;
    }
};
