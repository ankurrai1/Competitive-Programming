# include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int, int> hash;
        int n = candyType.size();
        for(int i = 0; i < n; i++){
            hash[candyType[i]]++;
        }
        n /= 2;
        if(hash.size() >= n) return n;
        return hash.size();
        
    }
};