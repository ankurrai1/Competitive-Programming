
#include <bits/stdc++.h>

using namespace std;

int firstIndex(int arr[], int n, int ele){
    if(n == -1) return -1;
    int index = firstIndex(arr, n - 1 , ele);
    if(arr[n] == ele && index == -1) return n;
    return index;
}

int firstIndex(int arr[], int n, int ele, int i){
    if(i == n) return -1;
    if(arr[i] == ele) return i;
    return firstIndex(arr, n, ele, i + 1);
}

int main(){
    // we assumed that arry will always hava a element at least;
    int n = 7;
    int arr[7] = {1,2,-3,14,5,6,5};
    int index = firstIndex(arr, n, 5);
    cout << index << endl;
    
    index = firstIndex(arr, n, 1, 0);
    cout << index << endl;
    return 0;
}