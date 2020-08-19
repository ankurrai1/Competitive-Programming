#include<bits/stdc++.h>

using namespace std;

int main(){

  // this is for fast input output basically detaching C libraries
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int BoardSize, NoOfQueens;
  cin >> BoardSize >> NoOfQueens;


  // first basic condition if no of queues is greater than BoardSize it means
  // we have to put atleast to queens in same row which is not POSSIBLE

  if(NoOfQueens > BoardSize){
    cout << "NO COMBINATIONS POSSIBLE" <<endl;
    return 0;
  }

    

}
