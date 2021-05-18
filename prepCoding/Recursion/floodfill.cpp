#include <bits/stdc++.h>
using namespace std;


void floodFill(int row, int col, string pathSF, vector<vector<int>> maze, vector<vector<bool>> visited){
    if( 
        row < 0 ||                                   // to check top in -ve
        col < 0 ||                                   // to check left in -ve
        row == maze.size() ||                        // to check down over flow 
        col == maze[0].size() ||                    //  to  check right over flow
        maze[row][col] ||                           // test for obsticals 0 = false and 1 = true
        visited[row][col]                           // already visited in current path or not
    ) return;
    
    // if we reached to last node return Path SO Far
    if(row == maze.size() - 1 && col == maze[0].size() - 1){
        cout << pathSF << endl;
        return;
    }
    
    visited[row][col] = true;
    floodFill(row - 1, col , pathSF + "t", maze, visited);
    floodFill(row, col - 1 , pathSF + "l", maze, visited);
    floodFill(row, col + 1 , pathSF + "r", maze, visited);
    floodFill(row + 1, col , pathSF + "d", maze, visited);
    visited[row][col] = false;
}

int main(){
    int row = 6;
    int col = 7;
    vector<vector<int>> maze = {
        {0,1,0,0,0,0,0},
        {0,1,0,1,1,1,0},
        {0,0,0,0,0,0,0},
        {1,0,1,1,0,1,1},
        {1,0,1,1,0,1,1},
        {1,0,0,0,0,0,0}
    };
    vector<bool> v(col, false);
    vector<vector<bool>> visited(row,v);
    string pathSF = "";
    floodFill(0, 0 , "" , maze, visited);
    return 0;
}