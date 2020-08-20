#include<bits/stdc++.h>

using namespace std;

// boolean arrays which consume less size then original boolean array and cont start form right side
// only n bits where boolean is itself 1 byte which makes it N * 1byte
// let board will be of 1000 max;

bitset<1000> column, digonal1, digonal2;

bool isSafePlace(int i, int j){
  //                                          because we can't store -ve index
  return ( !column[j] && !digonal1[i + j] && !digonal2[i - j + n -1 ])
}

void solveNQueenProblem(int i, int n, int &count){
  if(i == n){
    count++;
    return ;
  }
  for(int j = 0; j < n; j++){
    if(isSafePlace(i, j)){
      // set every place not avaliable for next row
      column[j] = digonal1[i + j] = digonal2[i - j + n - 1] = 1;
      solveNQueenProblem(i+1, n, count) // check for next row

      // if reached to following line it means that place is not appropriate
      column[j] = digonal1[i + j] = digonal2[i - j + n - 1] = 0;  // Backtracking
    }
  }
}

int main(){

  // no of queens;
  int n;
  cin >> n;
  int count = 0;
  solveNQueenProblem(start = 0,n, count = 0);

  cout << count << "\n";
  return 0;
}
