// problem statement is as following

//Given an array arr of N integers. Find the contiguous sub-array with maximum sum.


// solution is implemented here

#include <bits/stdc++.h>
using namespace std;

int getMaximumSum(int arr[],int n){
    int maxSF=arr[0], cMax = arr[0];
    for(int i = 1; i < n; i++){
        cMax += arr[i];
        cMax = max(cMax, arr[i]);
        maxSF = max(maxSF, cMax);
    }
    return maxSF;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++)
        cin >> arr[i];
        int res = getMaximumSum(arr, n);
        cout << res << "\n";
    }
	return 0;
}
