class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(char c : s){
            if((tolower(c) - 0) >= 97 && (tolower(c) - 0) <= 122) str += tolower(c);
            else if((c - 0) >= 48 && 57 >= (c- 0) ) str += c;
        }
        int i = 0, j = str.size() - 1;
        while(i <= j){
            if(str[i] != str[j]) return false;
            i++, j--;
        }
        return true;
        
    }
};

// isalnum is a function to test wether given char is alphanumeric or not

bool isPalindrome(string s) {
    for (int i = 0, j = s.size() - 1; i < j; i++, j--) { // Move 2 pointers from each end until they collide
        while (isalnum(s[i]) == false && i < j) i++; // skip  not alphanumeric
        while (isalnum(s[j]) == false && i < j) j--; // skip no alphanumeric
        if (toupper(s[i]) != toupper(s[j])) return false; // Exit and return error if not match
    }
    
    return true;
}