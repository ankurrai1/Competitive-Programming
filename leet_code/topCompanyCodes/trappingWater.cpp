
#include <bits/stdc++.h>

using namespace std;


// trapping rain water solution;

// my old solution

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n == 0) return 0;
        vector<int> lmax(n,0), rmax(n,0);
        int totalWater = 0;
        lmax[0] = height[0]; 
        for(int i = 1; i < n; i++) lmax[i] = max(lmax[i - 1], height[i]);
        rmax[n-1] = height[n-1];
        for(int i = n-2; i >= 0; i--) rmax[i] = max(rmax[i + 1], height[i]);
        
        for(int i = 0; i < n; i++){
            totalWater += min(lmax[i],rmax[i]) - height[i];
        }
        return totalWater;
    }
};

// better solution

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> lmax(n,0), rmax(n,0);
        int totalWater = 0;
        lmax[0] = height[0]; 
        for(int i = 1; i < n; i++) lmax[i] = max(lmax[i - 1], height[i]);
        rmax[n-1] = height[n-1];
        for(int i = n-2; i >= 0; i--) rmax[i] = max(rmax[i + 1], height[i]);
        
        for(int i = 0; i < n; i++){
            totalWater += min(lmax[i],rmax[i]) - height[i];
        }
        return totalWater;
    }
};