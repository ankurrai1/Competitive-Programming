 // day5
 // problem statement is as:
 // Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.


// solution function is implemented here.

class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> f;
        for(char c : s) f[c]++;
        for(int i = 0; i < s.size(); i++){
            if(f[s[i]] <= 1) return i;
        }
        return -1;
    }
};
