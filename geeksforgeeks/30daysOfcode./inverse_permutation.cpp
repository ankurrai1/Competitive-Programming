// problem statement is as following
// Suppose we found element 4 at position 3 in an array, then in reverse permutation,
//  we insert 3 (position of element 4 in the array) in position 4 (element value)


// solution function implementation here:


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k = 1;
    cin >> t;
    while(t--){
       cin >> n;
       int arr[n];
       int res[n];
       for(int i = 0; i < n; i++) cin >> arr[i];
       for(int i = 0; i < n; i++){
           res[arr[i]-1] = i+1;
       }
       for(int i = 0; i < n; i++) cout << res[i] << " ";
       cout << "\n";
    }
    return 0;
}
