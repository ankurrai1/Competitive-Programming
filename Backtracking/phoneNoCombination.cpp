// to the place of hash map an Array can be used as 0 and 1 index = "";

class Solution {
private:
    void makeCombinations(vector<string> &res, unordered_map<char, string> hash, string digit, string curr, int idx){
        if(curr.size() == digit.size()){
            res.push_back(curr);
            return;
        }
        for(int j = 0; j<hash[digit[idx]].size(); j++){
            makeCombinations(res, hash, digit, curr + hash[digit[idx]][j], idx+1);
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        unordered_map<char, string> hash;
        hash['2'] = "abc";
        hash['3'] = "def";
        hash['4'] = "ghi";
        hash['5'] = "jkl";
        hash['6'] = "mno";
        hash['7'] = "pqrs";
        hash['8'] = "tuv";
        hash['9'] = "wxyz";
        if(digits.size() > 0) makeCombinations(res, hash, digits, "", 0);
        return res;
    }
};
