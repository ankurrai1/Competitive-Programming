
class Solution {

private:
    int claculateGold(vector<vector<int>> &grid, int r, int c){
        if(r >= grid.size() || r < 0 || c >= grid[r].size() || c < 0 || grid[r][c] <= 0)
            return 0;
        int holder = grid[r][c];
        grid[r][c] = -1;
        int d  = claculateGold(grid, r+1, c);
        int l  = claculateGold(grid, r, c-1);
        int ri = claculateGold(grid, r, c+1);
        int u  = claculateGold(grid, r-1, c );
        grid[r][c] = holder;
        return (holder + max({d, l, ri, u}));
    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int maxGold = 0;
        for(int i = 0; i< grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] != 0){
                    maxGold = max(maxGold, claculateGold(grid, i, j));
                }
            }
        }
        return maxGold;

    }
};

class Solution {

private:
    int claculateGold(vector<vector<int>> &visited, vector<vector<int>> &grid, int r, int c,int collected){
        if(r >= grid.size() || r < 0 || c >= grid[r].size() || c < 0 || grid[r][c] == 0 || visited[r][c] == 1)
            return collected;
        visited[r][c] = 1;
        int d = claculateGold(visited, grid, r+1, c, collected + grid[r][c]);
        int l = claculateGold(visited, grid, r, c-1, collected + grid[r][c]);
        int ri = claculateGold(visited, grid, r, c+1, collected + grid[r][c]);
        int u = claculateGold(visited, grid, r-1, c, collected + grid[r][c]);
        collected = max(d, max(l, max(ri, u)));
        visited[r][c] = 0;
        return collected;
    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int maxGold = 0;
        vector<vector<int>> visited(grid.size(), vector<int> (grid[0].size(), 0));
        for(int i = 0; i< grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] != 0){
                    maxGold = max(maxGold, claculateGold(visited, grid, i, j, 0));
                }
            }
        }
        return maxGold;

    }
};
