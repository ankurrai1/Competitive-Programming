#include <bits/stdc++.h>

using namespace std;

int main(){
  string str;
  cin >> str;
  char last;
  unsigned long mx = 0, cmax = 0;
  if(str.size() >= 1){
    last = str[0];
    cmax++;
  }
  for (unsigned long i = 1; i < str.size(); i++){
    if(str[i] == last) cmax++;
    else{
      mx = max(mx, cmax);
      cmax = 1;
    }
    last = str[i];
  }

  cout << mx << "\n";
  return 0;
}
