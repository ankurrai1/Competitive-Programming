#include <bits/stdc++.h>

using namespace std;

//
void getFactors(int n){
    for(int i = 1; i <= n / 2; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    cout << n << endl;
}

int main() {

    #ifndef ONLINE_JUDGE
    freopen(".input.txt", "r", stdin) ;
    freopen(".output.txt", "w", stdout) ;
    #endif

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        getFactors(n);
    }
	return 0;
}