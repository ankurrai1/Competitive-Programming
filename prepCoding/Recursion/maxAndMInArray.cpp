
#include <bits/stdc++.h>

using namespace std;

pair<int, int> maxAndMinArray(int arr[], int n, pair<int, int> maxmin, int i){
    if(i == n) return maxmin;
    maxmin.first = max(maxmin.first, arr[i]);
    maxmin.second = min(maxmin.second, arr[i]);
    return maxAndMinArray(arr, n, maxmin, i + 1);
 }

int main(){
    // we assumed that arry will always hava a element at least;
    int n = 7;
    int arr[7] = {1,2,-3,14,5,6,7};
    pair<int,int> res = maxAndMinArray(arr, n, make_pair(arr[0], arr[0]), 1);
    cout << "max : " << res.first << endl;
    cout << "min : " << res.second << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

pair<int, int> maxAndMinArray(int arr[], int n, pair<int, int> maxmin){
    if(n == -1) return maxmin;
    maxmin.first = max(maxmin.first, arr[n]);
    maxmin.second = min(maxmin.second, arr[n]);
    return maxAndMinArray(arr, n - 1, maxmin);
 }

int main(){
    // we assumed that arry will always hava a element at least;
    int n = 7;
    int arr[7] = {-11,2,-3,14,5,6,17};
    pair<int,int> res = maxAndMinArray(arr, n - 1, make_pair(arr[n-1], arr[n-1]));
    cout << "max : " << res.first << endl;
    cout << "min : " << res.second << endl;
    return 0;
}