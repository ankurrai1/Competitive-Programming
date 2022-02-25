#include <bits/stdc++.h>

using namespace std;

int DP[6][12] = {0}; // with size of array  + 1 and targetSum + 1;

bool getElementsCombinationsForSum(int n, int sum, vector<int> arr){
    if(n==0 || sum==0){
      if(sum == 0) return true;
      else if(sum > 0 && n == 0) return false;
    }
    if(DP[n][sum] != -1 ) return DP[n][sum];
    if(sum < arr[n - 1]) return getElementsCombinationsForSum(n - 1, sum, arr);
    DP[n][sum] = getElementsCombinationsForSum(n - 1, sum, arr) ||
                 getElementsCombinationsForSum(n - 1, sum - arr[n-1], arr);


    return DP[n][sum];
}

int main(){
  int n = 5,targetSum = 11;

  vector<int> items = {2,3,7,8,10};

  for(int i = 0; i < n + 1; i++){
    for(int j = 0; j < targetSum + 1; j++){
      DP[i][j] = -1;
    }
    cout << endl;
  }

  if (getElementsCombinationsForSum(n, targetSum, items)) cout << "YES " << endl;
  else cout << "NO" << endl;

  for(int i = 0; i < n + 1; i++){
    for(int j = 0; j < targetSum + 1; j++){
      cout << DP[i][j] << "   ";
    }
    cout << endl;
  }
}
