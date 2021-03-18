#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        if(n==1 || n==7 )return true;
        if(n<10)return false;
        int num = 0;
        while(n){
            int mod = n % 10;
            num += (mod * mod);
            n /= 10;
        }
        return isHappy(num);
    }
};