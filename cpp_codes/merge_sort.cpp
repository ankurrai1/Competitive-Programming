#include <bits/stdc++.h>
using namespace std;





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
