// https://leetcode.com/problems/unique-paths/


// Problem can be solved with recursion only but Time Limit Exceeded.
// Then DP will help .


class Solution {
private:
    int dp[102][102] = {0};
public:
    int uniquePaths(int m, int n) {
        if(dp[m][n] != 0) return dp[m][n];
        if(m < 1 || n < 1) return 0;
        if(m == 1 && n == 1) return 1;
        dp[m][n] = uniquePaths(m - 1, n) + uniquePaths(m, n-1);
        return dp[m][n];
    }
};
