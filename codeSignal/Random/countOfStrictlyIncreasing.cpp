// You are given two list of integers a and b of same length n. Find the count of strictly increasing sequences of integers I[0] < I[1] < ... < I[n-1] such that min(a[i], b[i]) <= I[i] <= max(a[i], b[i]) for each i.
// For e.g. for test case #1
// * a = [6, 3, 4, 4]
// * b = [1, 5, 1, 6]
// four possible solutions are possible
// * 1, 3, 4, 5
// * 1, 3, 4, 6
// * 2, 3, 4, 5
// * 2, 3, 4, 6
// Return the answer modulo 998244353.
// Length of both arrays will not exceed 100Values in both array will be between 1 and 10000.
// * [execution time limit] 1 seconds (cpp)
// * [input] array.integer aLength <= 100Values between 1 and 10000.
// * [input] array.integer bLength <= 100Values between 1 and 10000.
// * [output] integer




#include <bits/stdc++.h>

using namespace std;

void findWaysStrictArrange(int a[], int b[], int n, int &c, int i, vector<int> res){
    if(i == n){
        for(int e : res){
            cout << e << " ";
        }
        cout << endl;
        if(res.size() == n) c++;
        return;
    }
    int mn = min(a[i] , b[i]), mx = max(a[i], b[i]);
    for(mn; mn <= mx; mn++){
        if(res.size() == 0 ||  res.back() < mn){
            res.push_back(mn);
            findWaysStrictArrange(a, b, n, c, i+1, res);
            res.pop_back();
        }
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n = 0;
    int a[] = {6, 3, 4, 4};
    int b[] = {1, 5, 1, 6};
    vector<int> res;
    findWaysStrictArrange(a, b, 4, n, 0, res);
    cout << n << endl;
    return 0;
}
