#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t; 
	while(t--){
	    string str;
	    cin >> str;
	    for(int i = str.size() - 1; i >=0; i--){
	        cout << str[i];
	    }
	    cout << endl;
	}
	return 0;
}