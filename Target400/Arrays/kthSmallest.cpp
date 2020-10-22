#include <bits/stdc++.h>

int partation(int arr[],int s, int e, int k){
    
}

int getSmallest(int arr[], int s, int e, int k){
    if(s < e){
        int pos = partation(arr, s, e, k);
        if((pos + 1) ==  k) return arr[pos];

    }
    
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        getSmallest(arr, 0, n - 1, k);
    }
	return 0;
}