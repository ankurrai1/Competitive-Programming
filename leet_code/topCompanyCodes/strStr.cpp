// this solution will take O(m * n ) m = size or haystack, n = size of needle
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0;
        if(haystack.size() == 0) return -1;
        int fi = -1;
        for(int i = 0; i < haystack.size(); i++){
            if(haystack[i] == needle[0]){
                fi = i;
                int tempi = i + 1;
                for(int j = 1; j < needle.size(); j++, tempi++){
                    if(haystack[tempi] != needle[j]){
                        fi = -1;
                        break;
                    }
                }
                if(fi != -1 ) return fi;
            }
        }
        return -1;
    }
};


// solution with kpm algorithm in time of O(n + m);

class Solution{
    private:
    vector<int> kpmprocess(string needle){
        int sz = needle.size();
        vector<int> kpm(sz, 0);
        int i = 1, j = 0;
        while(i < n){
            if(needle[i] == needle[j]) kpm[i++] = ++j;
            else if(j < 0) j = needle[j - i];
            else kmp[i++] = 0;

        }
        return kpm;
    }

    public:
    int strStr(string haystack, string needle) {
        int m = haystack.size(), n = needle.size();
        if (!n) {
            return 0;
        }
        vector<int> lps = kmpProcess(needle);
        for (int i = 0, j = 0; i < m;) {
            if (haystack[i] == needle[j]) { 
                i++, j++;
            }
            if (j == n) {
                return i - j;
            }
            if (i < m && haystack[i] != needle[j]) {
                j ? j = lps[j - 1] : i++;
            }
        }
        return -1;
    }


}