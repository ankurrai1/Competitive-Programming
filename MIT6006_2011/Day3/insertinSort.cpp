#include <bits/stdc++.h>

using namespace std;

// we can do direct swap but we will do pairWise swap according to lecture
int insertin_sort(int arr[], int n){
  // one element is always sorted;
  for(int i = 1; i < n; i++){
      int temp = i;
      while(arr[temp - 1] > arr[temp]){
          cout<< arr[temp - 1] <<"  " << arr[temp]<< endl;
          swap(arr[temp - 1], arr[temp]);
          temp--;
      }
  }
}

int main(){
  int arr[7] = {4,5,3,9,7,1,6};
  insertin_sort(arr, 7);
  for(int i = 0; i < 7; i++){
    cout << arr[i] << "  ";
  }

  return 0;
}
