#include <bits/stdc++.h>
using namespace std;

int count = 0;

void show(vector<vector<int>> board){
    for(vector<int> row : board){
        for(int ele : row){
            cout << ele << " ";
        }
        cout << endl;
    }
}

void placeKnight(vector<vector<int>> board, int row, int col, int move = 1){
    if(row < 0 || col < 0 || row >= board.size() || col >= board.size() || board[row][col] > 0) return;
    if(move == board.size() * board.size()){
        board[row][col] = move;
        show(board);
        cout<< endl;
        return;
    }
    
    board[row][col] = move;
    
    placeKnight(board, row - 2, col + 1, move + 1);
    placeKnight(board, row - 1, col + 2, move + 1);
    placeKnight(board, row + 1, col + 2, move + 1);
    placeKnight(board, row + 2, col + 1, move + 1);
    placeKnight(board, row + 2, col - 1, move + 1);
    placeKnight(board, row + 1, col - 2, move + 1);
    placeKnight(board, row - 1, col - 2, move + 1);
    placeKnight(board, row - 2, col - 1, move + 1);
    
    
    board[row][col] = 0;
}

int main(){
    
    int n = 5;
    vector<int> row(n, 0);
    vector<vector<int>> board(n, row);
    // you will be given a random place in board and you have to find whether it is possible or not to put nights to every place
    // without putting more then 1 at one place,
    // you have to start from given random place and again from all the places from there;
    placeKnight(board, 2 , 0 );
    
    return 0;
}