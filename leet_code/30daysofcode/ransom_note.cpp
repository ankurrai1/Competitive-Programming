// Problem statement is as following

// Given an arbitrary ransom note string and another string containing letters from all the magazines,
//  write a function that will return true if
//  the ransom note can be constructed from the magazines ; otherwise, it will return false.


// solution function is as following

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> ransomData;

        for(char e : magazine) ransomData[e]++;
        for(char e: ransomNote){
            if(ransomData[e]&& ransomData[e] > 0) ransomData[e]--;
            else return false;
        }
        return true;
    }
};
