// problem statement is as following

// Given a number x and two positions (from right side) in binary representation of x,
// write a program that swaps n bits at given two positions and returns the result.


//solution function is of above problem using bits magic

#include <bits/stdc++.h>
using namespace std;

int get_swaped(int x, int p1, int p2, int n){
    unsigned int set1 = (x >> p1) & ((1U << n) - 1); // to get last p1 bits p1th index
    unsigned int set2 = (x >> p2) & ((1U << n) - 1); // to get last p2 bits p2th index
    unsigned int Xor = (set1 ^ set2);
    Xor = (Xor << p1) | (Xor << p2);
    unsigned int result = x ^ Xor;
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int num, p1, p2, n;
        cin >> num >> p1 >> p2 >> n;
        int res = get_swaped(num, p1, p2, n);
        cout << res << "\n";
    }
	return 0;
}
