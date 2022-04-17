#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void movePositiveLeft(int arr[], int n){
    int p = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            swap(arr[p], arr[i]);
            p++;
        }
    }

}


int main() {

    #ifndef ONLINE_JUDGE
    freopen(".input.txt", "r", stdin) ;
    freopen(".output.txt", "w", stdout) ;
    #endif

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        movePositiveLeft(arr, n);
        printArray(arr, n);
    }
	return 0;
}