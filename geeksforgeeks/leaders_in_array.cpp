// Leaders in an array solution file
// problem link is as following
// https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0/


#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--){
    int n,i;
    cin >> n;
    int ar[n];

    for(i=0;i<n;i++){
      cin >> ar[i];
    }
    int max = ar[n-1];
    for(i=n-2;i>=0;i--){
      if(max <= ar[i]){
          max = ar[i];
      }
      else ar[i] = -1;
    }

    for(i=0;i<n;i++){
      if(ar[i] != -1){
        cout << ar[i] << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
