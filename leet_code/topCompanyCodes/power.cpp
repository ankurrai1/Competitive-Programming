
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
