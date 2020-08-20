#include<bits/stdc++.h>

using namespace std;

// storing BoardSize globally will help us to pass matrix by given user input
const int BoardSize = 10;

void printBoard(int board[][BoardSize],int  n){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if(board[i][j] == 0) cout << " - ";
      else cout << " Q ";
    }
     cout << endl;
  }
}

bool isSafePlace(int board[][BoardSize],int i, int j, int n){

  // maxing local copy of axis
  int x, y;

  // Checking direct upwards
  x = i, y = j;
  while(x >= 0){
    if(board[x][y] == 1) return false;
    x--;
  }

  // Checking right corner upwards
  x = i, y = j;
  while(x >= 0 && y <= n -1){
    if(board[x][y] == 1) return false;
    x--, y++;
  }

  // Checking Left corner upwards
  x = i, y = j;
  while(x >= 0 && y <= n -1){
    if(board[x][y] == 1) return false;
    x--, y--;
  }

  // when none of the above is true then we can place queen at this placed
  return true;
}

bool solveNQueenProblem(int board[][BoardSize], int i, int n){

  // Base condition
  if(i == n){
    // reached end of of our board and all Queen's are already placed
    printBoard(board, n);
    return true;
  }

  for(int j = 0; j < n; j++){
    if(isSafePlace(board, i, j ,n)){
      // setting on board queen is placed on this placed;
      board[i][j] = 1;
      bool nextQueenIsPlaced = solveNQueenProblem(board, i + 1, n);
      if(nextQueenIsPlaced) return nextQueenIsPlaced; // stating that the current position is perfect for for Queen;

      board[i][j] = 0; // backtracking the current stablishment of queen
    }
  }
  return false; // we didn't find find any suitable place in this row please back - track the queen;

}

int main(){

  // this is for fast input output basically detaching C libraries
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int NoOfQueens;
  cin >> NoOfQueens;


  // first basic condition if no of queues is greater than BoardSize it means
  // we have to put atleast to queens in same row which is not POSSIBLE

  if(NoOfQueens > BoardSize){
    cout << "NO COMBINATIONS POSSIBLE" <<endl;
    return 0;
  }

  // creation square board of give size;
  int board[BoardSize][BoardSize] = {0};

  solveNQueenProblem(board, 0, NoOfQueens);  // main problem solving function
  return 0;
}
