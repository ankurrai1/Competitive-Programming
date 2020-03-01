// Find Product link is as following
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/description/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t,n;
	cin >> t;
	long prod = 1;
	for(int i = 0; i < t; i++){
	    cin >> n;
	    prod = (prod*n)%(int)(pow(10,9)+7);
	}
	cout << prod;
	return 0;
};
