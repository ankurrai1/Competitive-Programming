#include<bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    unsigned long long int x, y;
    cin >> x >> y;
    if(x <= y){
      if(y % 2 != 0) cout << (y*y - x +1) << "\n";
      else cout << ((y-1)* (y-1) + x) << "\n";
    }
    else{
      if(x % 2 != 0) cout << ((x-1)* (x-1) + y) << "\n";
      else cout << (x*x - y +1) << "\n";
    }
  }
}
