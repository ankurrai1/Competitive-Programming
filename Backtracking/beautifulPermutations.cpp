class Solution {
private:

    bool makingBeautiful(int n1, int i1){
        return (n1 % i1 == 0 || i1 % n1 == 0 );
    }

    void permute(int &res, vector<int> &nums, int idx){
        if(idx == nums.size()){
            res ++;
            return;
        }
        for(int i = idx; i < nums.size(); i++){
            if(makingBeautiful(nums[i], idx+1)){
                swap(nums[idx], nums[i]);
                permute(res, nums, idx+1);
                swap(nums[idx], nums[i]);
            }
        }
    }
public:
    int countArrangement(int n) {
        int res = 0;
        vector<int> nums;
        for(int i = 1; i <= n; i++) nums.push_back(i);
        permute(res, nums, 0);
        return res;
    }
};
