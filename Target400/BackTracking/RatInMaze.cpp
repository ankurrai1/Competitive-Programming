class Solution{
    private:
    void fillPaths(vector<string> &res, vector<vector<int>> &m, string currPath, int r, int c, int n){
        if(r == n-1 && c == n-1){
            res.push_back(currPath);
            return;
        }
        if(r < 0 || r >= n || c < 0 || c >= n || m[r][c] == 0) return;
        string dir = "DLRU";
        vector<pair<int, int>> moves = {{1, 0},{0,-1},{0, 1},{-1, 0}};
        m[r][c] = 0;
        for(int i = 0; i < 4; i++){
            int ci = r + moves[i].first;
            int cj = c + moves[i].second;
            fillPaths(res, m, currPath + dir[i], ci, cj, n);
        }
        m[r][c] = 1;
    }

    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        // vector<vector<int>> visited(n, vector<int >(n, 0));
        string currPath = "";
        if(m[0][0] == 0 || m[n-1][n-1] == 0) return res;
        fillPaths(res, m, currPath, 0, 0, n);
        return res;
    }
};
