#include <bits/stdc++.h>

using namespace std;

void weiredAlgorithm(unsigned long);

int main(){
    unsigned long n;
    cin >> n;
  weiredAlgorithm(n);
  return 0;
}

void weiredAlgorithm(unsigned long n){
  cout << n << " ";
  if(n == 1) return;
  else if(n % 2 == 0){
    unsigned long t = n / 2;
    return weiredAlgorithm(t);
  }
  else weiredAlgorithm(n*3+1);
}
