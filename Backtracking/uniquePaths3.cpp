class Solution {
private:

    void print(vector<vector<int>> &v){
        for(int i = 0; i < v.size(); i++){
            for(int j = 0; j < v[i].size(); j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }

    }

    bool isAllVisited(vector<vector<int>> &v){
        for(int i = 0; i < v.size(); i++){
            for(int j = 0; j < v[i].size(); j++){
                if(v[i][j] == 0) {
                    return false;
                }
            }
        }
        return true;
    }

    void findpaths(vector<vector<int>> &visited, vector<vector<int>> &grid, int &res, int r, int c){

        if(r >= grid.size() || r < 0 || c >= grid[r].size() || c < 0 || visited[r][c] || grid[r][c] == -1 ) return;

        if(grid[r][c] == 2){
            visited[r][c] = 1;
            if(isAllVisited(visited)) res++;
        }

        visited[r][c] = 1;
        findpaths(visited, grid, res, r+1, c);
        findpaths(visited, grid, res, r, c-1);
        findpaths(visited, grid, res, r, c+1);
        findpaths(visited, grid, res, r-1, c);
        visited[r][c] = 0;
    }

public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int res = 0, r, c;
        vector<vector<int>> visited(grid.size(), vector<int> (grid[0].size(), 0));
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == -1) visited[i][j] = -1;
                if(grid[i][j] == 1) {
                    r = i; c = j;
                }
            }
        }
        findpaths(visited, grid, res, r, c);
        return res;
    }
};



// Other Inplace solution

class Solution {
private:
    void findpaths(int empty, vector<vector<int>> &grid, int &res, int r, int c){

        if(r == grid.size() || r < 0 || c == grid[r].size() || c < 0 || grid[r][c] == -1 || grid[r][c] == -2 ) return;

        if(grid[r][c] == 2){
            if(empty < 0 ) res++;
            return;
        }

        grid[r][c] = -2;
        findpaths(empty -1, grid, res, r+1, c);
        findpaths(empty -1, grid, res, r, c-1);
        findpaths(empty -1, grid, res, r, c+1);
        findpaths(empty -1, grid, res, r-1, c);
        grid[r][c] = 0;
    }

public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int res = 0, r, c, count = 0;
        vector<vector<int>> visited(grid.size(), vector<int> (grid[0].size(), 0));
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(grid[i][j] == 0) count++;
                if(grid[i][j] == 1) {
                    r = i; c = j;
                }
            }
        }
        findpaths(count, grid, res, r, c);
        return res;
    }
};
