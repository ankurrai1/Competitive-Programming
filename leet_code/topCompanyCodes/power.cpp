
// this power solution will handel the negative power and points as well

class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0) return 1;
        double temp = myPow(x, n /2);
        temp *= temp;
        if(n &1) return n < 0 ? temp / x : temp * x;
        return temp;
    }
};

// iterative solution

cclass Solution {
public:
    double myPow(double x, long long int n) {
        if(n == 0) return 1;
        double ans = 1;
        if(n < 0){
            n = -n;
            x = 1/x;
        }
        while(n){
            if(n & 1) ans *= x;
            x *= x;
            n>>=1;
        }
        return ans;
    }
};