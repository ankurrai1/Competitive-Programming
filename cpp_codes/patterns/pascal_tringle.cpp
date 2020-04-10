// 5
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1

// above is pascal Tringle it is printed by following code


#include <bits/stdc++.h>

using namespace std;

void pascalTringle(int n){
  int ar[n][n];
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
      if(j == 0 || j == i) ar[i][j] = 1;
       else{
         ar[i][j] = ar[i-1][j-1] + ar[i-1][j];
       }
    }
  }

  for(int i = 0; i < n; i++){
    for(int k = 0; k < n-i; k++){
        cout << " ";
    }
    for(int j = 0; j <= i; j++){
      cout << ar[i][j] << " ";
    }
    cout << "\n";
  }

}

// Optamized version of code

int pascalTringle(){
  for(int i = 1; i <= n; i++){
    int c = 1;
    for(int j = 1; j <= i; j++){
      cout << c << " ";
      c = c * (i-j)/j;
    }
    cout << "\n";
  }
}

int main(){
  int n;
  cin >> n;
  pascalTringle(n);
  return 0;
}
