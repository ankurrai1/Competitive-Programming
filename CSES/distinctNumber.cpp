#include <bits/stdc++.h>

using namespace std;


int main(){
  long int n;
  long int ele, res = 0, last;
  cin >> n;

  long int arr[n];
  for(int i = 0; i < n; i++){
    cin >> ele;
    arr[i] = ele;
  }
  sort(arr, arr + n);
  last = 1;
  res++;

  for(long int i = 0; i < n; i++){
    if(arr[i] != last){
      res++;
      last = arr[i];
    }
  }
  cout << res << "\n";
  return 0;
}
