// Selection sort is implimented here

#include <bits/stdc++.h>

using namespace std;

// input pattern should be like This
//5 no of int to sort
// 3 3 46 7 32  space saperated interger values

int main(){
  int n,sind, i ,j;
  cin >> n;
  int arr[n];

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  for(i = 0; i < n; i++){
    sind = i;
    for(j = i; j < n; j++){ // find smallest no loop
      if(arr[sind] > arr[j]){
        sind = j;
      }
    }
    if (sind != i){    // swap smallest with current no
      int temp = arr[i];
      arr[i] = arr[sind];
      arr[sind] = temp;
    }
  }
  for(i = 0; i < n; i++){
    cout << arr[i] << "  ";
  }

  return 0;
}
