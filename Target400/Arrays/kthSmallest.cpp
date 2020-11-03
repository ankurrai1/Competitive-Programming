#include <bits/stdc++.h>

using namespace std;

// in this problem we are going to use quick Select algo to get result 

void swap(int* a, int* b)  
{  
    int t = *a;  
    *a = *b;  
    *b = t;  
}  

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partation(int arr[],int s, int e, int k){
    int ele = arr[e];
    // cout << "P : " << p << endl;
    int j = s - 1;
    for(int i = s; i <= e - 1; i++){
        if(arr[i] < ele){
            j++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[j+1], &arr[e]);
    return (j + 1);
}

void getSmallest(int arr[], int s, int e, int k, int n){
    if(s < e){
        int pos = partation(arr, s, e, k);
        if((pos + 1) ==  k) cout << arr[pos] << endl;
        else if(pos + 1 > k ) return getSmallest(arr, s, pos - 1, k, n);
        else if(pos + 1 < k) return getSmallest(arr, pos + 1, e, k, n);
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
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        getSmallest(arr, 0, n - 1, k, n);
    }
	return 0;
}