#include <bits/stdc++.h>

using namespace std;


int count_subset_sum_topdown(int n, int sum, vector<int> arr ){

  //DP setup
  int DP[n+1][sum+1]; // with size of array  + 1 and targetSum + 1;

  //base condition
  for(int i = 1; i < sum + 1; i++) DP[0][i] = 0; // because if ther is no element in array we can not make some grater than 0
  for(int i = 0; i < n + 1; i++) DP[i][0] = 1; // if we want sum as 0 we should not think of ele its always we can make

  // filling DP to reach the exact answer
  for(int i = 1; i < n + 1; i++){
    for(int j = 1; j < sum + 1; j++){
      if(j < arr[i-1]) DP[i][j] = DP[i-1][j];
      else{
        DP[i][j] = DP[i-1][j] + DP[i-1][j- arr[i-1]];
      }
    }
  }

  // To print the DP for varification
  for(int i = 0; i < n + 1; i++){
    for(int j = 0; j < sum + 1; j++){
      cout << DP[i][j] << "   ";
    }
    cout << endl;
  }

  // actual return
  return DP[n][sum];
}

int main(){
  int n = 6,targetSum = 10;

  vector<int> items = {2,3,5,6,8,10};

  int res = count_subset_sum_topdown(n, targetSum, items);
  cout << res << endl;

}
