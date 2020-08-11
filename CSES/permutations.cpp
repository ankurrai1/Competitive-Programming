#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, j = 0;
  cin >> n;
  int arr[n+1];

  for(int i = 1; i <=n; i += 2, j++){
    arr[j] = i;
  }

  for(int i = 2; i <=n; i += 2, j++){
    arr[j] = i;
  }

  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  return 0;
}
