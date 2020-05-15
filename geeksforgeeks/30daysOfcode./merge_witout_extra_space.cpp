// problem statement is as following
// given two sorted arrays of size n and m;
// your task is to merge them without using any extra space or memory
// time complexity not more than O(n + mlog n+m);

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n ,m;
        cin >> m >> n;
        int len = m + n;
        int arr[len];
        for(int i = 0; i < len; i++){
            cin >> arr[i];
        }
        int p = 0, p1 = m;
        for(int i = 0; i < len; i++){
            if(arr[p] <= arr[p1] && p < m) {
                cout << arr[p] << " ";
                p++;
            }
            else if(p1 < len){
                cout << arr[p1] << " ";
                p1++;
            }
            else{
                cout << arr[p] << " ";
                p++;
            }
        }

        cout << "\n";
    }
	return 0;
}
