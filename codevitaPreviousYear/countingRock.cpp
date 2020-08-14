#include <bits/stdc++.h>

using namespace std;

int main(){
  int n , r;
  unordered_map<int, int> range;
  cin >> n >> r;
  int arr[n];
  int 
  for(int i = 0; i < n; i++) cin >> arr[i];
  for(int i = 0; i < r; i++){
    int r1, r2;
    cin >> r1 >> r2;
    range[r1] = r2;
  }

  return 0;
}
