#include <bits/stdc++.h>

using namespace std;

void weiredAlgorithm(int);

int main(){
    int n;
    cin >> n;
  weiredAlgorithm(n);
  return 0;
}

void weiredAlgorithm(int n){
  cout << n << " ";
  if(n == 1) return;
  else if(n % 2 == 0){
    int t = n / 2;
    return weiredAlgorithm(t);
  }
  else weiredAlgorithm(n*3+1);
}
