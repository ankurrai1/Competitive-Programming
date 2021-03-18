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


// interesting solution


    // use hashmap to check whether n is repeated or not
    // since the maximum integer is 2147483647, the maximum output in divde_square function is 730, created by 1999999999

int divde_square(int n){
    int s = 0;
    int mod;
    while(n>0){
        mod = n%10;
        n=n/10;
        s += (mod*mod);
    }
    return s;
}

bool isHappy(int n){
    
    int hashmap[731] = {};
    
    if(n==1)
        return true;
    while(true){
        n = divde_square(n);
        if(n==1)
            return true;
        if(hashmap[n]==-1)
            return false;
        hashmap[n]=-1;
    }
}
