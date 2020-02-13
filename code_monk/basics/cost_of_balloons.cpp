// following is solution for Cost of balloons problem , link is in next palindrome
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/description/

#include <iostream>

using namespace std;

int main() {
	int i,t;
	cin >> t;
	for( i = 0; i < t; i++ ){
	    int j, gbp, pbp, n, gfp = 0, pfp = 0;
	    cin >> gbp >> pbp;
	    cin >> n;
	    for( j = 0; j < n; j++ ){
	        int f,s;
	        cin >> f >> s;
	        if(f){
	            gfp += gbp;
	            pfp += pbp;
	        }
	        if(s){
	            gfp += pbp;
	            pfp += gbp;
	        }
	    }
	    if(gfp > pfp) cout << pfp;
	    else cout << gfp;
	    cout <<"\n";
	}
	return 0;
}
