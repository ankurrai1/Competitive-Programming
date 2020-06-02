#include <bits/stdc++.h>

using namespace std;

int power(int, int);

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a, b;
  cin >> a >> b ;
  int sum = power(a, b); // recurcive function
  cout << sum << endl;
  return 0;
}

int power(int a, int b){
  if(b == 1) return a;
  else{
    return a * power(a , b - 1);
  }
}
