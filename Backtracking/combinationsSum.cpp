//Problem Link :  https://leetcode.com/problems/combination-sum/


// my solution
class Solution {
private:
    void findAllCombinations(vector<vector<int>> &res,vector<int> c,int i, int t, vector<int> candi){
        if(t == 0){
            res.push_back(c);
            return;
        }
        if(i >= candi.size()) return;
        for(int j = i; j < candi.size(); j++){
            int total = 0;
            while(t >= candi[j]){
                t-= candi[j];
                c.push_back(candi[j]);
                total++;
                findAllCombinations(res, c, j+1, t, candi);
            }

            while(total--){
                t += candi[j];
                c.pop_back();
            }
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> curr;
        int idx = 0;
        findAllCombinations(result, curr, idx, target, candidates);
        return result;
    }
};


// my improved code solution
class Solution {
private:
    void findAllCombinations(vector<vector<int>> &res,vector<int> c,int i, int t, vector<int> candi){
        if(t == 0){
            res.push_back(c);
            return;
        }
        if(i >= candi.size() || t < 0) return;
        for(int j = i; j < candi.size(); j++){
            t-= candi[j];
            c.push_back(candi[j]);
            findAllCombinations(res, c, j, t, candi);
            //backtrcking part
            t += candi[j];
            c.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> curr;
        int idx = 0;
        findAllCombinations(result, curr, idx, target, candidates);
        return result;
    }
};
