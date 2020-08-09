#include <bits/stdc++.h>

using namespace std;
#define MOD 1000000007

int main(){
  long n;
  cin >> n;
  unsigned long long int res = 1;
  while(n--){
      res = (res * 2) % MOD;
  }
  cout << res << "\n";
  return 0;
}
