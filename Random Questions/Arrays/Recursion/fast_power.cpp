#include <bits/stdc++.h>

using namespace std;

int power(int, int);
int fast_power(int, int);

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int a, b;
  cin >> a >> b ;
  int sum = power(a, b); // recurcive function
  cout << sum << " " << fast_power(a, b) << endl;
  return 0;
}

int power(int a, int b){
  if(b == 0) return 1;
  else{
    return a * power(a , b - 1);
  }
}

int fast_power(int a, int b){
  if(b == 0) return 1;
  if(b % 2 == 0) return fast_power(a * a, b/2);
  return a * power(a , b - 1);

}
