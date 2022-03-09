#include <bits/stdc++.h>

using namespace std;


int DP[1001][1001] = {0}; // with size of array  + 1 and targetSum + 1;

bool subset_sum(int n, int sum, vector<int> arr ){

  //DP setup

  //base condition
  for(int i = 1; i < sum + 1; i++) DP[0][i] = 0; // because if ther is no element in array we can not make some grater than 0
  for(int i = 0; i < n + 1; i++) DP[i][0] = 1; // if we want sum as 0 we should not think of ele its always we can make

  // filling DP to reach the exact answer
  for(int i = 1; i < n + 1; i++){
    for(int j = 1; j < sum + 1; j++){
      if(j < arr[i-1]) DP[i][j] = DP[i-1][j];
      else{
        DP[i][j] = DP[i-1][j] || DP[i-1][j- arr[i-1]];
      }
    }
  }
  return DP[n][sum];
}

int get_minimum_subset_sum_diff(int n, vector<int> arr){
    int total_sum = 0;

    for(int i = 0; i < n; i++) total_sum += arr[i];

    vector<int> half_possible_sum;

    for(int i = (total_sum / 2); i > 0; i--){
        if(subset_sum(n, i, arr)) half_possible_sum.push_back(i);
    }
    int min_sum_diff = total_sum;

    for(int ele : half_possible_sum){
        min_sum_diff = min(min_sum_diff, (total_sum - (ele *2)));
    }
    return min_sum_diff;
}


int main(){
  int n = 4;

  vector<int> items = {1,6,11,5};

  int res = get_minimum_subset_sum_diff(n, items);
  cout << res << endl;

}
