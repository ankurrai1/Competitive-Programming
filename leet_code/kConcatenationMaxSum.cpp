// Given an integer array arr and an integer k, modify the array by repeating it k times.For example, if arr = [1, 2] and k = 3 then the modified array will be [1, 2, 1, 2, 1, 2]

//solution function implimented here

#include <bits/stdc++.h>

using namespace std;

#define ll long
class Solution {
public:
     ll max(ll a ,ll b){
         if(a > b) return a;
         return b;
     }
    
     ll getMaxSum(vector<int> arr, ll n){
        int
            mSof = arr[0],
            mx = arr[0];
        for(int i = 1; i<n; i++){
            mSof = max(arr[i] , arr[i]+mSof);
            mx = max(mx, mSof);
        }
        return max(mx, 0);
    }
    
    ll kConcatenationMaxSum(vector<int>& arr, ll k) {
        ll sum = 0, n = arr.size();
        for(int i=0; i<n; i++) sum += arr[i];
        if(k == 1){
            return (getMaxSum(arr, n) % 1000000007);
        }
        vector<int> arr2(2*n);
        for(int i = 0; i < 2*n; i++){
            arr2[i] = arr[i % n];
        }
        ll mSum = getMaxSum(arr2, 2 * n);
        if(sum > 0) mSum += (k-2)* sum;
        return (mSum % 1000000007);
    }
};