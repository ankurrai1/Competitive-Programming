// problem statement is as following
//You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).


#include <bits/stdc++.h>
using namespace std;

int getSetBitsFromOneToN(int N){
    int two = 2,ans = 0;
    int n = N;
    while(n){
        ans += (N/two)*(two>>1);
        if((N&(two-1)) > (two>>1)-1) ans += (N&(two-1)) - (two>>1)+1;
        two <<= 1;
        n >>= 1;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << getSetBitsFromOneToN(n) << "\n";
    }
	return 0;
}
