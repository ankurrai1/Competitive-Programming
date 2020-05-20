// problem statement is as following
// Given a positive integer N, print count of set bits in it. For example,
// if the given number is 6(binary: 110), output should be 2 as there are two set bits in it.


#include <iostream>
using namespace std;


unsigned int get_count(unsigned int n){
    unsigned int count = 0;
    while(n){
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        unsigned int a;
        cin >> a;
        cout << get_count(a) << "\n";
    }
	return 0;
}
