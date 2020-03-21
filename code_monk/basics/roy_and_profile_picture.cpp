// problem statement Roy and Profile Picture is solved here

// codemonk problem Roy and Profile Picture's link is as following
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/

// solution

#include <iostream>

using namespace std;

int main() {
	int size,t;
	cin >> size;
	cin >> t;
	while(t > 0){
		int a, b;
		cin >> a >> b;
		if(a < size || b < size){
			cout << "UPLOAD ANOTHER";
		}
		else if(a == b){
			cout << "ACCEPTED";
		}
		else{
			cout << "CROP IT";
		}
		cout << "\n";
		t--;
	}
	return 0;
}
