#include <bits/stdc++.h>

using namespace std;

bool canSum(int target, int arr[], int n){
    if(target == 0) return true;
    if(target < 0) return false;
    for(int i = 0; i < n; i++){
        if(canSum(target - arr[i], arr, n)) return true;
    }
    return false;
}

map<int, bool> mem;

bool fastCanSum(int target, int arr[], int n){
    if(mem[target]) return mem[target];
    if(target == 0) return true;
    if(target < 0) return false;
    for(int i = 0; i < n; i++){
        if(canSum(target - arr[i], arr, n)){
             mem[target] = true;
             return mem[target];
        }
    }
    mem[target] = false;
    return mem[target];
}

int main()
{
    int arr1[] = {2, 3};
    int arr2[] = {5, 3, 4, 7};
    int arr3[] = {2, 4};
    int arr4[] = {2, 3, 5};
    int arr5[] = {7, 14};
    
    cout <<  "    " << canSum(7,arr1, 2) << endl;
    cout <<  "    " << canSum(7, arr2, 4) << endl;
    cout <<  "    " << canSum(7, arr3, 2) << endl;
    cout <<  "    " << canSum(8, arr4, 3) << endl;
    // cout <<  "    " << fastCanSum(7, arr2, 4) << endl;
    cout <<  "    " << fastCanSum(300, arr5, 2) << endl;
}
