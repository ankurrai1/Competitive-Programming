#include <bits/stdc++.h>

using namespace std;

int get_sum_upto(int);

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int n;
  cin >> n;
  int sum = get_sum_upto(n); // recurcive function
  cout << sum << endl;
  return 0;
}

int get_sum_upto(int n){
  if(n <= 1) return 1;
  else return n +  get_sum_upto(n-1);
}
