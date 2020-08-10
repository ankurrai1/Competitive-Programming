#include <bits/stdc++.h>

using namespace std;


int main(){
  unsigned long n, ele, res = 0;
  unordered_set <unsigned long> s;
  cin >> n;
  unsigned long arr[n];
  for(int i = 0; i < n; i++){
    cin >> ele;
    arr[i] = ele;
  }
  for(int i = 0; i < n; i++){
    if (s.find(arr[i]) == s.end()) {
      s.insert(arr[i])
      res++;
    }
  }
  cout << res << "\n";
  return 0;
}
