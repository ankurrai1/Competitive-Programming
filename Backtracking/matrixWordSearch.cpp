class Solution {
private:
    bool findWord(vector<vector<char>> &board, string &word, int r, int c, int idx){
        if(idx == word.size()) return true;
        int n = board.size(); int m = board[0].size();
        if(r < 0 || c < 0 || r >= n || c >= m || board[r][c] != word[idx]) return false;
        board[r][c] = '_';
        if(findWord(board,word, r+1,  c, idx + 1) ||  findWord(board,word, r-1,  c, idx + 1) || findWord(board,word, r,  c+1, idx + 1) || findWord(board,word, r,  c-1, idx + 1)) return true;
        board[r][c] = word[idx];
        return false;
   }
public:
    bool exist(vector<vector<char>>& board, string word) {
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] == word[0] && findWord(board, word, i, j, 0) )return true;
            }
        }
        return false;
    }
};
