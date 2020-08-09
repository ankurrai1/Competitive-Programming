#include <bits/stdc++.h>

using namespace std;

int main(){
  long long n, maxdiff = 0, last, curr;
  cin >> n;
  cin >> last;
  n--;
  while(n--){
    cin >> curr;
    long long diff = last - curr;
    if(diff > 0){
        maxdiff += diff;
        last = curr + diff;
    }
    else last = curr;
  }
  cout << maxdiff << "\n";
  return 0;
}
