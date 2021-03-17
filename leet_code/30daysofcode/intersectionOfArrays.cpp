#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map<int,int> hash1, hash2;
        
        for(auto ele :nums1) hash1[ele]++;
        for(auto ele :nums2) hash2[ele]++;
        for(auto ele:hash1){
            if(hash2[ele.first]){
                int x=min(ele.second,hash2[ele.first]); // to push no of occur in both
                while(x--){
                    res.push_back(ele.first);
                }
            }
        }
        return res;
    }
};