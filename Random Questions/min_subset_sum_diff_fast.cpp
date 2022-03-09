#include <bits/stdc++.h>

using namespace std;

int DP[1001][1001] = {0};

int get_minimum_subset_sum_diff(int n, vector<int> arr){
    int total_sum = 0;

    for(int i = 0; i < n; i++) total_sum += arr[i];
    for(int i = 1; i <= (total_sum / 2); i++) DP[0][i] = 0;
    for(int i = 0; i < n + 1; i++) DP[i][0] = 1;

    for(int i = 1; i < n + 1; i++){
      for(int j = 0; j <= (total_sum / 2); j++){
        if(j < arr[i-1]) DP[i][j] = DP[i-1][j];
        else{
          DP[i][j] = DP[i-1][j] || DP[i-1][j- arr[i-1]];
        }
      }
    }

    int min_sum_diff = total_sum;

    for(int i = 0; i <= (total_sum / 2); i++){
      if(dp[n][i]){
        int ele = DP[n][i];
        min_sum_diff = min(min_sum_diff, (total_sum - (ele *2)));
      }
    }
    return min_sum_diff;
}


int main(){
  int n = 4;

  vector<int> items = {1,6,11,5};

  int res = get_minimum_subset_sum_diff(n, items);
  cout << res << endl;

}
