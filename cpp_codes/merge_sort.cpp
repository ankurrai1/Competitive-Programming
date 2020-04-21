#include <bits/stdc++.h>
using namespace std;

// =============================================================================
// recursive merge sort function implementation here and array is passed by reference.
void merge_sort(int &arr[], int l, int r){
  if(l != r){
    int mid = (l + r)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);
    merge(arr,l,mid,mid+1,r);
  }
}

// =================================================================
// runner function is as following.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++){
      cin >> arr[i];
    }
    merge_sort(arr,0,n-1);

    for(i = 0; i < n; i++){
      cout << arr[i];
    }
    return 0;
}
