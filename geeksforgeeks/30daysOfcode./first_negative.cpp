// #Day2 30 april 2020
// problem statement si as following
//Given an array and a positive integer k, find the first negative integer for each and every,
// window(contiguous subarray) of size k.


// This problem must be solved in O(n) time complexity.

#include <bits/stdc++.h>
using namespace std;

void print_first_neg(int arr[], int k, int n){
    queue<int> neg_inds;
    for(int i = 0; i < k; i++) if(arr[i]<0) neg_inds.push(i);
    int i = 0, j = k - 1;
    for(i = 0; j < n; i++, j++){
        if(arr[j] < 0 && j > k-1) neg_inds.push(j);
        if(!neg_inds.empty() && neg_inds.front() < i) neg_inds.pop();
        if(!neg_inds.empty()){
            cout << arr[neg_inds.front()]<< " ";
        }
        else cout << 0 << " ";
    }
    cout <<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k;
    cin >> t;
    while(t--){

        cin >> n;
        int arr[n];

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        cin >> k;

        print_first_neg(arr,k,n);
    }
    return 0;
}
