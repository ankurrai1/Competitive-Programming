#include <bits/stdc++.h>
using  namespace std;

int maxSubarraySum(int arr[], int n){
    int sum = arr[0], maxsf=arr[0];
    for(int i = 1; i < n; i++){
        sum = max(arr[i], arr[i] + sum);
        maxsf = max(sum, maxsf);
    }
    return max(maxsf,sum);
}