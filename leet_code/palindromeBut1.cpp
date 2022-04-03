// https://leetcode.com/problems/valid-palindrome-ii/submissions/


class Solution {
public:
    bool isPalindrome(string s, int l, int r){
        while(l < r){
            if(s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int l = 0, r = s.length()-1;
        while(l < r){
            if(s[l] != s[r]){ // give one chance
                return isPalindrome(s, l+1, r) || isPalindrome(s, l, r-1);
            }
            l++;
            r--;
        }
        return 1;
    }
};
