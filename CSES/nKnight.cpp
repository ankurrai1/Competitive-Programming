#include<bits/stdc++.h>

using namespace std;

#define ll long long


ll solveNKnightProblem(ll n){
  ll total  = n * n *(n * n - 1); // total possible position if knights are of same teams;
  ll case1 = 4 * 2 ;// all corners
  ll case2 = 8 * 3; // all corners + 1
  ll case3 = (n - 4) * 4  * 4;  // (other then all corners) *  (atttack place) * (no of sides)
  ll case4 = 4 * 4; // (1, 1 like posintion invalid) * (no of 1,1 like posintion)
  ll case5 = (n - 4) * 6 * 4; // (second line posintion) *  (atttack place) * (no of sides)
  ll case6 = (n - 4)*(n - 4) * 8;  // all central part * (atttack place)
  ll div = 2 ;  // Because every place is counted 2 times

  return (total - (case1 + case2 + case3 + case4 + case5 + case6)) / div;
}
int main(){
  // in this problem no of queen is fixed upto two;
  // n will be no form o to 1000 max;

  // we have to find no of ways in which 2 knights can be placed for each n starting form 0 to n
  ll n;
  cin >> n;
  for(ll i = 1; i <= n; i++)
  {
    cout << solveNKnightProblem(i) << "\n";
  }
  return 0;
}
