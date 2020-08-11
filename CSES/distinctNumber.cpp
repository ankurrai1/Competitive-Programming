#include <bits/stdc++.h>

using namespace std;


int main(){
  long int n;
  long int ele, res = 0;
  unordered_set <long int> s;
  cin >> n;

  long int arr[n];
  for(int i = 0; i < n; i++){
    cin >> ele;
    arr[i] = ele;
  }

  for(int i = 0; i < n; i++){
    if(s.find(arr[i]) == s.end()) {
      s.insert(arr[i]);
      res++;
    }
  }
  cout << res << "\n";
  return 0;
}
