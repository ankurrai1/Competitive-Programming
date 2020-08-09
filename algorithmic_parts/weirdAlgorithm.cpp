#include <bits/stdc++.h>

using namespace std;

void weiredAlgorithm(int);

int main(){
  weiredAlgorithm(3);
  return 0;
}

void weiredAlgorithm(int n){
  cout << n << " ";
  if(n == 1) return;
  else if(n % 2 == 0){
    in t = n / 2;
    return weiredAlgorithm(t);
  }
  else weiredAlgorithm(n*3+1);
}
