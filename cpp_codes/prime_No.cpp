// how to check a no is prime or not


#include<bits/stdc++.h>

using namespace std;

int main(){
  int i,n;
  cin >> n;
  if(n%2 == 0) cout << "not prime No.";
  else{
    for(i = 3; i < n/2; i+=2){
      if(n%i == 0){
        cout << "not prime No.";
        break;
      }
    }
    cout << "No is a Prime ."
  }
  for(i = ; i < n/2; i+=2)
  return 0;
}
