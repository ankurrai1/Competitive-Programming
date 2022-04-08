// https://leetcode.com/problems/combination-sum-iii/



class Solution {
private:
    void fillCombinations(int n, int t, int idx, vector <int> curr, vector<vector<int>> &res){
        if(n == 0 && t == 0){
            res.push_back(curr);
            return;
        }
        for(int i = idx; i < 10; i++){
            if(i > t) break;
            curr.push_back(i);
            fillCombinations(n-1, t-i, i+1, curr, res);
            curr.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> curr;
        int idx = 1;
        fillCombinations(k, n, idx, curr, res);
        return res;
    }
};
