
#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n, int i){
    if(i == n) return;

    cout << arr[i] << " ";
    printArray(arr, n, i+1);
    cout << endl;
    cout << arr[i];
}

int main(){
    int n = 7;
    int arr[7] = {1,2,3,4,5,6,7};
    printArray(arr, n, 0);
    return 0;
}