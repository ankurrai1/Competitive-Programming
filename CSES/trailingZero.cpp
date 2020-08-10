#include <bits/stdc++.h>

using namespace std;

int getCount(int n, int countOf){
  int count = 0;
  while(n % countOf == 0){
    count++;
    n %= countOf;
  }
  return count;
}

int main(){
  long n;
  cin >> n;
  int count5 = 0, count2 = 0;
  while(n){
    if(n % 5 == 0) count5 += getCount(n, 5);
    if(n % 2 == 0) count2 += getCount(n, 2);
    n--;
  }
  cout << min(count5, count2) << "\n";
  return 0;
}
