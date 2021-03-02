
#include <bits/stdc++.h>

using namespace std;

int lastIndex(int arr[], int n, int ele){
    if(n == -1) return -1;
    if(arr[n] == ele) return n;
    return lastIndex(arr, n - 1 , ele);
}

int main(){
    // we assumed that arry will always hava a element at least;
    int n = 7;
    int arr[7] = {1,2,-3,14,5,6,5};
    int index = lastIndex(arr, n, -3);
    cout << index << endl;
    return 0;
}