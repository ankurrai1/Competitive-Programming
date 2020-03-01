// Longest Substring problem is here solved
// problem statement link is as following
//https://leetcode.com/problems/longest-substring-without-repeating-characters/


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int pa = 0;
        int pb = 0;
        int max = 0;
        set<char> alph;
        while(pb < s.size()){
            if(!alph.count(s[pb])){
                alph.insert(s[pb]);
                pb++;
                if((pb - pa) > max)
                    max = (pb - pa);
            }
            else{
                alph.erase(s[pa]);
                pa++;
            }
        }
        return max;
    }
};
