// problem statement is as following for problem Count the triplets.

// Given an array of distinct integers.
// The task is to count all the triplets such that sum of two elements equals the third element.


#include <bits/stdc++.h>
using namespace std;



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int count = 0;

        for(int i = n - 1; i >= 0; i--){
            int j = 0,
            k = i - 1;
            while(j < k){
                if(arr[j] + arr[k] == arr[i]){
                    count ++;
                    // changing whole pair
                    k--;
                    j++;
                }
                else if(arr[j] + arr[k] < arr[i]) j++;
                else k--;
            }
        }
        if(count > 0) cout << count << "\n";
        else cout << -1 << "\n";
    }

	return 0;
}
