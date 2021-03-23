#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int n = digits.size();
        vector<int> res;
        for(int i = n - 1; i >= 0; i--){
            res.push_back((digits[i] + carry) % 10);
            carry = (digits[i] + carry > 9)? 1 : 0;
         }
        if(carry) res.push_back(carry);
        reverse(res.begin(), res.end());
        return res;
        
    }
};


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size();
        for (int i = n - 1; i >= 0; --i){
            if (digits[i] == 9){
                digits[i] = 0;
            }
            else{
                digits[i]++;
                return digits;
            }
        }
        digits[0] =1;
		digits.push_back(0);
        return digits;
    }
};