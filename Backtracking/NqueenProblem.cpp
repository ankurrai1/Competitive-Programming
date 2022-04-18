#include <bits/stdc++.h>

using namespace std;

void printBoard(std::vector<std::vector<int>> v) {
  for(std::vector<int>ele : v){
    for(int e : ele){
      cout << e << " ";
    }
    cout << endl;
  }
    cout << endl << endl;
}

bool canPlaceAt(std::vector<std::vector<int>> board, int i, int j, int n){

  //test vertical
  int k,c = i;
  while(c >= 0){
    if(board[c][j]) return false;
    c--;
  }


  c = i, k = j;
  while(c >=0 && k >=0 ){
    if(board[c][k]) return false;
    c--; k--;
  }

  c = i, k = j;
  while(c >=0 && k >=0 ){
    if(board[c][k]) return false;
    c--; k++;
  }

  return true;

}

bool placeNqueen(std::vector<std::vector<int>> board, int idx, int n){
  if(n == idx){
    printBoard(board);
    return false; // make it true if you want only one solution to print
  }
  for(int i = 0; i < n; i ++){
    if(canPlaceAt(board, idx, i, n)){
      board[idx][i] = 1;
      bool nextPlaced = placeNqueen(board, idx+1, n);
      if(nextPlaced) return true;
      board[idx][i] = 0; // backtrcking
    }
  }
  return false;

}

void  printNQueenSolutionFor(int n) {
  std::vector<std::vector<int>> board;

  for (int i = 0; i < n; i++) {
    vector<int> v1;
    for (int j = 0; j < n; j++) v1.push_back(0);
    board.push_back(v1);
  }
  placeNqueen(board, 0, n);
}

int  main() {
  int boardSize = 4 ;
  printNQueenSolutionFor(boardSize);
  return 0;
}
