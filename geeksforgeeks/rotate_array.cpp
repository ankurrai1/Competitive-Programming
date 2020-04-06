// Rotate Array problem is solved here

// problem link is as following
//https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int l,d,p = 0;
        cin >>l>> d;
        int ar[l];
        for(int j = 0; j < l; j++){
            cin >> ar[(j + l -d) % l];
        }
        for(int s = 0; s < l; s++){
            cout << ar[s] <<" ";
        }
        cout << "\n";
    }
	return 0;
}
