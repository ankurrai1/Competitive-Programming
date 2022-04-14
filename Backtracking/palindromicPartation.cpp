class Solution {
public:

    bool pailndrom(string str){
        int i = 0; int n = str.size() -1;
        while(i <= n){
            if(str[i] == str[n]){
                i++, n--;
            }
            else return false ;
        }
        return true;
    }

    void findPalindromes(vector<vector<string>> &res, string s, vector<string> curr, int idx){
        if(idx == s.size()){
            res.push_back(curr);
            return;
        }
        for(int i = idx; i < s.size(); i++){
            string csubStr = s.substr(idx, i - idx + 1);
            if(pailndrom(csubStr)){
                curr.push_back(csubStr);
                findPalindromes(res, s, curr, i+1);
                curr.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> curr;
        findPalindromes(res, s, curr, 0);
        return res;
    }
};
