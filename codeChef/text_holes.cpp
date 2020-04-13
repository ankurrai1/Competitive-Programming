// problem statement is from codechef and problem is Holes in the text

// problem statement link is as following
// https://www.codechef.com/problems/HOLES

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--){
        string s;
        int holes = 0;
        cin >> s;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'A'|| s[i] == 'D'|| s[i]=='O'||s[i] == 'P'|| s[i]=='Q'||       // these are text has only one hole
            s[i]=='R') holes++;
            else if(s[i] == 'B') holes += 2;
        }
        cout << holes <<"\n";
    }
	return 0;
}
