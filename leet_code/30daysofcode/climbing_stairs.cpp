// You are climbing a stair case. It takes n steps to reach to the top.

// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?



// THE LOGIC WE CAN THINK OF AS PERMUTATION 
// EITHER WE TAKE 1 STEP OR 2 STEP
// WHICH WILL FURTHER BREAK PROBLEM INTO SMALLER PROBLEM UNTIL WE REACH 
// GIVEN N AND AT LAST IT WILL BECOME 0 + 1 OR 0 + 2 PROBLEM WHICH IS REALLY FIBONACCI SERISE
// FIBONACCI WITHOUT RECURSION WILL SOLVE THE PROBLEM IN EFFACTIVE WAY

class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        if(n == 2) return 2;
        int a = 1, b = 2, ways = 3;
        for(int i = 3; i <= n; i++){
            ways = a + b;
            a = b;
            b = ways;
        }
        return ways;
        
    }
};