// problem Question link is as following
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/


#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	bool flag = true;
	int s = str.size();
	int l = s/2;
	for(int i = 0; i < l; i++){
	    if(str[i] != str[s-1-i]){
	        flag = false;
	        break;
	    }
	}
	if (flag) cout << "YES";
	else cout << "NO";
	return 0;
}
