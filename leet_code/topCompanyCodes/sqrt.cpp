class Solution {
    public:
    int mySqrt(int n){
        int res = 0;
        for(int mask = 1 << 15; mask != 0; mask >>= 1){
            int setbit = res | mask;
            if(setbit <= n / setbit) res = setbit;
        }
        return res;
    }
};

// this will only deal with integer values in result;