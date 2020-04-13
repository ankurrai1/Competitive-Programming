// problem is Little Elephant and Candies in coding

//link of problem is following
//https://www.codechef.com/problems/LECANDY

// solution for problem is as following in c++


#include <iostream>
using namespace std;

int main() {
    int t,n,d;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n >> d;
        for(int j = 0; j < n; j++){
            int m;
            cin >> m;
            d -= m;
        }
        if(d>=0) cout << "Yes\n";
        else cout << "No\n";
    }
	return 0;
}
