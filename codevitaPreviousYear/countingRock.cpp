#include <bits/stdc++.h>

using namespace std;

int getEleCount(int arr[], int left, int right){
  int count = 0;
  for(int i = 0; i < n; i++){
    if((arr[i] >= left) && (arr[i] <= right)) count++;
  }
  return count;
}

int main(){
  int n , r;
  unordered_map<int, int> range;
  cin >> n >> r;
  int arr[n];
  int sum[r];
  for(int i = 0; i < n; i++) cin >> arr[i];
  for(int i = 0; i < r; i++){
    int r1, r2;
    cin >> r1 >> r2;
    range[r1] = r2;
  }
  int c = 0
  for(auto e : range){
    cout << getEleCount(arr, e.first, e.second) << " ";
  }
  return 0;
}
