#include <bits/stdc++.h>

using namespace std;

//this is linear complexity function 
void getFactorslinear(int n){
    for(int i = 1; i <= n / 2; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
    cout << n << endl;
}

// Root n complexity function
void getFactorsSQRT(int n){
    int i;
    for(i = 1; i*i < n; i++){
        if(n % i  == 0){
            cout << i << " ";
            cout << n/i << " ";
        }
    }
    if(i * i == n) cout << i << " ";
    cout << endl;
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
        getFactorslinear(n);
        getFactorsSQRT(n);
    }
	return 0;
}