// problem statement is as following

// Given an array A comprising of N non-zero, positive integers and an integer X,
// find the logical OR of all such elements in the array that are a multiple of X.
// The result of OR operation should be printed in decimal form.
// If there is only one multiple of X in A, print the element in decimal form. If no multiple of X is found, print 0.

// solution function is implimented there

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n , x;
        cin >> n >> x;
        int arr[n];
        int res = 0;
        for(int i = 0; i<n; i++) cin >> arr[i];
        for(int i = 0; i < n; i++){
            if(arr[i] % x != 0) arr[i] = -1;
        }
        for(int i = 0; i < n; i++){
            if(arr[i] != -1){
                res |= arr[i];
            }
        }
        cout << res << "\n";
    }
	return 0;
}
