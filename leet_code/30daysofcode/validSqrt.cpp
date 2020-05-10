// problem statement is as following

//Given a positive integer num, write a function which returns True if num is a perfect square else False.

// Note: Do not use any built-in library function such as sqrt.


// solution function is as follows:

class Solution {
public:
    bool isPerfectSquare(int num) {
        unsigned long long int i = 1;
        while(i*i < num) i++;
        if(i*i == num) return true;
        return false;
    }
};


// the above solution is of complexity O(root(n)) but not optimal.
// optimal solution is is following with time complexity of O( log( root(n) ) )


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
