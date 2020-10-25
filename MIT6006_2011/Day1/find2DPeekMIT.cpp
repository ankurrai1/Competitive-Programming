#include <bits/stdc++.h>

// this is solution to find any peek
// it assumes there exists at least one peek


using namespace std;

int n = 4, m = 4; // array size

int arr[][4] = { { 10, 8, 10, 10 },
                 { 14, 13, 12,11 },
                 { 15, 9, 11, 21 },
                 { 16, 17, 19,20 }
                };

int findpeak(int cs, int ce){
    int mid = (cs + ce) / 2;  // find mid column;

    // find global maximum of that column maximum element in that column;
    int mi, mx = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i][mid] >= mx){
            mx = arr[i][mid];
            mi = i;
        }
    }
    // assume the matrix as fixed mi  arrary

    if(mid > 0 && arr[mi][mid] < arr[mi][mid - 1]) return findpeak(cs, mid - 1);
    if(mid < n - 1 && arr[mi][mid] < arr[mi][mid + 1]) return findpeak(mid + 1, ce);
    else return arr[mi][mid];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << findpeak(0, m - 1) <<"\n";
    return 0;
}
