class Solution {
private:
    void findAllCombinations(vector<vector<int>> &res,vector<int> c,int idx, int t, vector<int> candi){
        if(t == 0){
            res.push_back(c);
            return;
        }
        for(int i = idx; i < candi.size(); i++){
          
          // the following if will protact in case when
          // going to create new pattern but used last element at i = 0 (may be solution found or not but if we take i = 1)
          // and i = 1 is same as i =0 element sure it will create same pattern so we should avoid it
          // it will eat uniqueness of new combination so avoiding as continue
          // as idx is passed it will not change but if loop moved i will increase taking advantage of it

            if((i > idx && candi[i] == candi[i-1]) || t < candi[i]) continue;
            t -= candi[i];
            c.push_back(candi[i]);
            findAllCombinations(res, c, i+1, t, candi);
            t += candi[i];
            c.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> curr;
        int idx = 0;
        findAllCombinations(result, curr, idx, target, candidates);
        return result;
    }
};
