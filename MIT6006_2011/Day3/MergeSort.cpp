#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int s, int m, int e){
    int p1 = s, p2 = m + 1, c = 0;
    int res[e - s + 1];

    while(p1 <= m && p2 <= e){
        if(arr[p1] <= arr[p2]) res[c++] = arr[p1++];
        else res[c++] = arr[p2++];
    }

    while(p1 <= m) res[c++] = arr[p1++];
    while(p2 <= e) res[c++] = arr[p2++];

   for(int i = s; i <= e; i++) arr[i] = res[i - s];
}

int mergeSort(int arr[], int s, int e){
  if(s < e){
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid );
    mergeSort(arr, mid + 1, e);
    merge(arr, s, mid, e);
  }

}

int main(){
  int n = 7;
  int arr[n] = {4,5,3,3,7,1,6};
  mergeSort(arr, 0, n-1);
  for(int i = 0; i < n; i++){
    cout << arr[i] << "  ";
  }

  return 0;
}
