#include <bits/stdc++.h>

using namespace std;

// Time complexity will be O(nlogn)  T(n) = 2T(n / 2) + Cn
// Space complexity will be O(n) it is required to store the temp array at max will be full array


void merge(int arr[], int s, int m, int e){
  // created pointers p1 and p2 and a counter to keep track of temp array
    int p1 = s, p2 = m + 1, c = 0;

    // Temporary array of size of current block from s to e
    int res[e - s + 1];

    // storing in res array by finding minimum element
    while(p1 <= m && p2 <= e){
        if(arr[p1] <= arr[p2]) res[c++] = arr[p1++];
        else res[c++] = arr[p2++];
    }

    // flushing up if someting left upto m in case when right part is larger then left
    while(p1 <= m) res[c++] = arr[p1++];

    // flushing up if someting left upto e in case when left part is larger then right part
    while(p2 <= e) res[c++] = arr[p2++];

    // finally replacing all in range from s to e with new sorted values from res
   for(int i = s; i <= e; i++) arr[i] = res[i - s];
}

int mergeSort(int arr[], int s, int e){
  if(s < e){

    // finding mid pointof current array to make part
    int mid = (s + e) / 2;

    // left half of current array
    mergeSort(arr, s, mid );

    // right half of current array
    mergeSort(arr, mid + 1, e);

    // after partition merge routine
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
