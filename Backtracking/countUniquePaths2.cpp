// https://leetcode.com/problems/unique-paths-ii/


// DP Iterative Solution Fast

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        // DP introduced
        int dp[101][101] = {0};


        //DP init
        for(int i = 0; i < m; i++ ){
            if(grid[i][0] != 1 ) dp[i][0] = 1;
            else break; // let it be zero no path to go
        }
        for(int i = 0; i < n; i++ ){
            if(grid[0][i] != 1 ) dp[0][i] = 1;
            else break; // let it be zero not path to go further
        }

        // Fill DP
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(grid[i][j] != 1){
                    // Replacment of recursive call
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                }
                else dp[i][j] = 0;
            }
        }

        //get Result

        return dp[m-1][n-1];
    }
};


// recursive Solutions SLOW

class Solution {
private:
    int dp[102][102] = {0};
    int countPaths(vector<vector<int>> grid, int m, int n){
        if(m < 0 || n < 0 || grid[m][n] == 1) return 0;
        if(dp[m][n] != 0) return dp[m][n];
        if(m == 0 && n == 0) return 1;
        dp[m][n] = countPaths(grid,m - 1, n) + countPaths(grid, m, n-1);
        return dp[m][n];

    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        return countPaths(obstacleGrid, obstacleGrid.size()-1,obstacleGrid[0].size()-1);
    }
};
