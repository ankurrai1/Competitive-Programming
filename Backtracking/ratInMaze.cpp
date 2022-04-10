



class Solution{
    void findPossiblePaths(vector<vector<int>> m, vector<vector<int>> v, vector<string> &paths, string cPath, int r, int c, int n){
      if(r == n-1 && c == n-1){
        paths.push_back(cPath);
        return;
      }
      if(r < 0 || c < 0 || r >= n || c >= n || v[r][c] || m[r][c] == 0 ) return;
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
        if(m[r][c] == 0 || m[n-1][n-1] == 0) return paths;
        findPossiblePaths(m, visited, paths, currentPath, r,  c,  n);
        sort(paths.begin(), paths.end());
        return paths;
    }
};

// Over Simplified solution
class Solution{
    private:
    void findPaths(vector<vector<int>> m, vector<string> &res, vector<vector<int>> v, string curr, int i, int j, int n){
        //Base
        if(i == n-1 && j == n-1){
            res.push_back(curr);
            return;
        }

        // -1 = visited, 0 = blocked, 1 = free to move
        v[i][j] = 1;

        //Down
        if(i+1 < n && m[i+1][j] && !v[i+1][j]){
            findPaths(m , res, v, curr + 'D', i + 1, j, n);
        }

        //Left
        if(j-1 >= 0 && m[i][j-1]&& !v[i][j-1]){
            findPaths(m , res, v, curr + 'L', i, j - 1, n);
        }

        //Right
        if(j+1 < n && m[i][j+1] && !v[i][j+1]){
            findPaths(m , res, v, curr + 'R', i, j + 1, n);
        }

        //UP
        if(i-1 >= 0 && m[i-1][j] && !v[i-1][j]){
            findPaths(m , res, v, curr + 'U', i - 1, j, n);
        }
        v[i][j] = 0;

    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<string> res;
        int i = 0, j = 0;
        string curr = "";
        vector<vector<int>> v(n, vector<int> (n,0));
        if(m[i][j] == 0 || m[n-1][n-1] == 0) return res;
        findPaths(m , res, v, curr, i, j, n);
        return res;
    }
};
