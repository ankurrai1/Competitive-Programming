class Solution {
public:
    bool isPerfectSquare(int num) {
        long int max = 100000, low = 1, mid, square;
        while(low <= max){
            mid = low + (max - low)/2;
            if (mid * mid == num) return true;
            else if (mid*mid > num ) {
                max = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        return false;
    }
};



class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long i = 1; i * i <= num; i++){
            if((i*i) == num) return true;
        }
        return false;
    }
};
