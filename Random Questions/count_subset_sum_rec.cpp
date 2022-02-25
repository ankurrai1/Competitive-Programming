#include <bits/stdc++.h>

using namespace std;

int coutn_target_subset_sum(int n, int sum, vector<int> arr){
    if(n == 0 || sum == 0){
        if(sum == 0) return 1;
        return 0;
    }
    if(sum < arr[n - 1]) return coutn_target_subset_sum(n - 1, sum, arr);
    return coutn_target_subset_sum(n - 1, sum, arr)
        +coutn_target_subset_sum(n - 1, sum - arr[n-1], arr);
}


int main(){
  int n = 5,targetSum = 11;
  int res = 0;

  vector<int> items = {2,3,5,6,8,10}; // 2,8  10  5,3,2 

  res = coutn_target_subset_sum(n, targetSum, items);
  cout << res << endl;
}
