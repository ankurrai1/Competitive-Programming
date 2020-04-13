// it is the solution file for problem of sum of digits

// problem link is as following
//https://www.codechef.com/problems/FLOW006

// solution function implimented here

#include <bits/stdc++.h>

using namespace std;

int get_sum(int);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c;
	cin >> c;
	for(int i = 0; i < c; i++){
	    int num;
	    cin >> num;
	    int sum = get_sum(num);
	    cout << sum << "\n";
	}
	return 0;
}

int get_sum(int n){
    int sum = 0;
    while(n > 0){
        sum += n%10;
        n = n / 10;
    }
    return sum;
}
