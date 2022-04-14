class Solution {
public:

    bool isPalindrome(string &str){
        int i = 0; int n = str.size() -1;
        while(i <= n){
            if(str[i++] != str[n--]) return false ;
        }
        return true;
    }

    void findPartitions(vector<vector<string>> &res, string &s, vector<string> &curr, int idx){
        int n = s.size();
        if(idx == n){
            res.push_back(curr);
            return;
        }
        for(int i = idx; i < n; i++){
            string partStr = s.substr(idx, i - idx + 1);
            if(isPalindrome(partStr)){
                curr.push_back(partStr);
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
