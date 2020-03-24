// problem link is as following
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/lift-queries/



//solution function is as following
#include <iostream>

using namespace std;

int main() {
	int t,al = 0, bl = 7;
	cin >> t;
	for(int i = 0; i < t; i++){
		int f;
		cin >> f;
		if(abs(al - f) <= abs(bl - f)){
			cout <<"A\n";
			al = f;
		}
		else{
			cout << "B\n";
			bl = f;
		}
	}
	return 0;
}
