#include <bits/stdc++.h>
using namespace  std;

unsigned long getMissing(unsigned long, unsigned long);

int main(){
  unsigned long n, xr = 0;
  cin >> n;
  for (unsigned long i = 0; i < n; ++i){
    int no;
    cin >> no;
    xr ^= no;
  }
  cout << (getMissing(xr, n)) << "\n";
  return 0;
}

unsigned long getMissing(unsigned long xr, unsigned long n){
  unsigned long valxor = 0;
  for (unsigned long i = 1; i <= n; i++) valxor ^= i;
  return (valxor ^ xr) ;
}
