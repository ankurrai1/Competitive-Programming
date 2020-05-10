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
