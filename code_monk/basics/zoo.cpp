// link of Question
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/is-zoo-f6f309e7/

#include<bits/stdc++.h>

// solution is as following

using namespace std;

int main() {
    string is;
    bool flag = true;
    int z=0,o=0;
	cin >> is;
	while(flag){
	    if((int)is[z]==122) z++;
	    else flag = false;
	}
	o = is.size() - z;
	if(z*2 == o) cout<<"Yes";
	else cout<<"No";
	return 0;
}
