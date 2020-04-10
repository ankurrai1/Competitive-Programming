// I nsertion sort is implimented here

#include <bits/stdc++.h>

using namespace std;

// input pattern should be like This
//5 no of int to sort
// 3 3 46 7 32  space saperated interger values

int main(){
  int n, i;
  cin >> n;
  int arr[n];

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  for(i = 0; i < n; i++){
    int curr = arr[i];
    for (int j = 0; j < i; j++) {
      if(curr >= arr[j]) continue;
      else{
        curr = arr[j];
        arr[j] = arr[i];
        arr[i] = curr;
      }
    }
  }

  for(i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  return 0;
}
