#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, maxdiff = 0, last, curr;
  cin >> n;
  cin >> last;
  n--;
  while(n--){
    cin >> curr;
    if(last - curr > 0) maxdiff += last - curr;
    last = curr;
  }
  cout << maxdiff << "\n";
  return 0;
}
