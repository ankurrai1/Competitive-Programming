// how to check a no is prime or not


#include<bits/stdc++.h>

using namespace std;

int main(){
  int i,n;
  cin >> n;
  if(n%2 == 0) i = 0;
  else{
    for(i = 3; i < n/2; i+=2){
      if(n%i == 0){
        isPrime = false;
        break;
      }
    }
  }
  if(i == n) cout << "No is a Prime .";
  else cout << "not prime No.";
  return 0;
}
