#include <bits/stdc++.h>

using namespace std;

int DP[7][11] = {0}; // with size of array  + 1 and targetSum + 1;

int coutn_target_subset_sum(int n, int sum, vector<int> arr){
    if(n==0 || sum==0){
      if(sum == 0) return 1;
      return 0;
    }
    if(DP[n][sum] != -1 ) return DP[n][sum];
    if(sum < arr[n - 1]) return DP[n][sum] =  coutn_target_subset_sum(n - 1, sum, arr);
    DP[n][sum] = coutn_target_subset_sum(n - 1, sum, arr) +
                 coutn_target_subset_sum(n - 1, sum - arr[n-1], arr);


    return DP[n][sum];
}

int main(){
  int n = 6,targetSum = 10;

  vector<int> items = {2,3,5,6,8,10};


  memset(DP, -1, sizeof(DP)); // to set all values as -1;

  int res = coutn_target_subset_sum(n, targetSum, items);
  cout << res << endl;

  for(int i = 0; i < n + 1; i++){
    for(int j = 0; j < targetSum + 1; j++){
      if(DP[i][j] >= 0) cout << " " << DP[i][j] << "   ";
      else cout << DP[i][j] << "   ";
    }
    cout << endl;
  }
}
