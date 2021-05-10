class Solution {
public:
    void getParaTreeLeafs(string curr, int left, int right, vector<string> &res){
        if(left == 0 && right == 0){
            res.push_back(curr);
            return;
        }
        if(left > 0) getParaTreeLeafs(curr + "(", left - 1, right +1, res);
        if(right > 0) getParaTreeLeafs(curr + ")", left , right - 1, res);
    }
    
    
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        getParaTreeLeafs("", n, 0, res);
        return res;
    }
};