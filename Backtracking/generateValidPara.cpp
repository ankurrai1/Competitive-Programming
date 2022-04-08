class Solution {
private:
    void gen(vector<string> &res, int o, int c, string curr){
        if(o < 0 || c < 0) return;
        if(o == 0 && c == 0){
            res.push_back(curr);
            return;
        }
        gen(res, o-1, c, curr + "(");
        if(c > o) gen(res, o, c-1, curr + ")");
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        gen(res, n, n, "");
        return res;
    }
};
