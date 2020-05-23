// problem statement is as following

//Provided a String of length N, your task is to find out whether or not the given string is a prime string.
// A prime string is a string in which the sum of the ASCII value of all the characters is prime.


// solution function is as following


#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i*i < n; i++){
        if(n % i == 0 ) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n , x, sum = 0;
        string s;
        cin >> n;
        cin >> s;
        for(int i = 0; i < n; i++){
            sum += (int)(s[i]);
        }
        if(isPrime(sum)) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
	return 0;
}
