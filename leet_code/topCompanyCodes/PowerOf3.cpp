#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        int maxNumber = pow(3,19);
         if(n <= 0) return false;
         return maxNumber % n == 0 ? true: false; //  Divide into three
    }
};