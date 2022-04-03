class Solution{
    private:

    void findPossiblePaths(vector<vector<int>> m, vector<vector<int>> v, vector<string> &paths, string cPath, int r, int c, int n){
      if(r == n-1 && c == n-1){
        paths.push_back(cPath);
        return;
      }
      if(r < 0 || c < 0 || r >= n || c >= n || v[r][c] ) return;
      v[r][c] = 1;
      findPossiblePaths(m, v, paths, cPath + 'D', r + 1,  c,  n);
      findPossiblePaths(m, v, paths, cPath + 'L', r,  c - 1,  n);
      findPossiblePaths(m, v, paths, cPath + 'R', r,  c + 1,  n);
      findPossiblePaths(m, v, paths, cPath + 'U', r - 1 , c,  n);
      v[r][c] = 0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> paths;
        string currentPath = "";
        vector<int> v(n,0);
        vector<vector<int>> visited(n, v);
        int r = 0 , c = 0;
        findPossiblePaths(m, visited, paths, currentPath, r,  c,  n);
        sort(paths.begin(), paths.end());
        return paths;
    }
};
