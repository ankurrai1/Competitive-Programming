#include <bits/stdc++.h>

using namespace std;


int main(){
  int n;
  unsigned long long int ele, res = 0;
  unordered_set <unsigned long long int> s;
  cin >> n;
  unsigned long long int arr[n];
  for(int i = 0; i < n; i++){
    cin >> ele;
    arr[i] = ele;
  }
  for(int i = 0; i < n; i++){
    if (s.find(arr[i]) == s.end()) {
      s.insert(arr[i]);
      res++;
    }
  }
  cout << res << "\n";
  return 0;
}
