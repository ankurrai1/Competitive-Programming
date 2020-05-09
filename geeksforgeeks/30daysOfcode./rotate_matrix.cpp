// problem statement is as following:

// You are given an n x n 2D matrix representing an image.
//
// Rotate the image by 90 degrees (clockwise).
//
// You need to do this in place.
//
// Note that if you end up using an additional array, you will only receive partial score.


// solution function is implemented here.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int ns;
        cin >> ns;
        int i = 1, ele, n = ns*ns;
        int arr[n];
        while(i <= ns){
            for(int j  = 1; j <= ns; j++){
                 cin >> ele;
                 int it = (ns * j) - i;
                 arr[it] = ele;
            }
            i++;
        }
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
