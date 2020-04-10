// Bubble Sort is implimented as following;

#include <bits/stdc++.h>
using namespace std;

// input pattern should be like This
//5 no of int to sort
// 3 3 46 7 32  space saperated interger values

int main(){
  int n, i, j;
  cin >> n;
  int arr[n];
  bool isSwaped = false;

  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

   for (i = 0; i < n-1; i++)
   {
     isSwaped = false;
     for (j = 0; j < n-i-1; j++)
     {
        if (arr[j] > arr[j+1])
        {
          int temp = arr[j+1];
          arr[j+1] = arr[j];
          arr[j] = temp;
           isSwaped = true;
        }
     }
     if (isSwaped == false)
        break;
   }

  for(i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  return 0;
}
