#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, j = 0;
  cin >> n;
  if(n == 3 || n == 2){
    cout << "NO SOLUTION" << "\n";
    return 0;
  }

  int arr[n];

  for(int i = 2; i <= n; i += 2, j++){
    arr[j] = i;
  }

  for(int i = 1; i <=n; i += 2, j++){
    arr[j] = i;
  }

  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  return 0;
}
