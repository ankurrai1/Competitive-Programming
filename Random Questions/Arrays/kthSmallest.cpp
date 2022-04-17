#include <bits/stdc++.h>

using namespace std;

// in this problem we are going to use quick Select algo to get result 

// void swap(int* a, int* b)  
// {  
//     int t = *a;  
//     *a = *b;  
//     *b = t;  
// }  

// simple functon to print array of length n;
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// function to part array 
int partation(int arr[],int s, int e, int k){

    // following line of code is used to genrate random no in between s and e 
    // and then we replace them with last elemetn
    srand(time(NULL));
    int random = s + rand() % (e-s);
    swap(arr[random], arr[e]);

    // After swapping last with random element simpl partition as quick sort;
    int ele = arr[e];
    int j = s - 1;
    for(int i = s; i <= e - 1; i++){
        if(arr[i] < ele){
            j++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j+1], arr[e]);
    return (j + 1);
}

int getSmallest(int arr[], int s, int e, int k, int n){
    if(s < e){
        int pos = partation(arr, s, e, k);
        if((pos) ==  k) return arr[pos];
        else if(pos < n && pos > k ) return getSmallest(arr, s, pos-1, k, n);
        else if(pos >= 0 && pos < k) return getSmallest(arr, pos+1, e, k, n);
    }
    // to handle the case when array is already sorted
    return arr[k];
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
        cout << (getSmallest(arr, 0, n - 1, k - 1, n)) << endl;
    }
	return 0;
}