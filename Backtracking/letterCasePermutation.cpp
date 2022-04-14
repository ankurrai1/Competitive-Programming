class Solution {
public:
    void permute(vector<string> &res, string s, int idx){
        if(idx == s.size()){
            res.push_back(s);
            return ;
        }
        permute(res, s, idx+1);
        if(islower(s[idx])){
            s[idx] = toupper(s[idx]);
            permute(res, s, idx+1);
        }
        else if(isupper(s[idx])){
            s[idx] = tolower(s[idx]);
            permute(res, s, idx+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> res;
        permute(res, s, 0);
        return res;
    }
};
