
#include <bits/stdc++.h>

using namespace std;

vector<int> allIndex(int arr[], int n, int ele, int count){
    if(n == -1){
        vector<int> res(count);
        return res;
    };
    vector<int> res;
    if(arr[n] == ele){
        res = allIndex(arr, n - 1, ele, count + 1);
        res[count] = n;
    }
    else{
        res = allIndex(arr, n - 1, ele, count);
    }
    
    return res;
        
}

int main(){
    // we assumed that arry will always hava a element at least;
    int n = 9;
    int arr[9] = {1,2,-3,2,5,6,2,5,2};
    vector<int> res = allIndex(arr, n - 1, -3, 0);
    for(int ele : res){
        cout << ele << " ";
    }
    return 0;
}