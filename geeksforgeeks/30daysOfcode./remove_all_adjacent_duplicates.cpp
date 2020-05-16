// problem statement is as following
// Given a string s, recursively remove adjacent duplicate characters from the string s.
// The output string should not have any adjacent duplicates.


// solution function is  implemented here.


#include <bits/stdc++.h>
using namespace std;

string recurcive_remove(string s, int n, bool changes){
    if(n <= 1 || !changes) return s;
    changes = false;
    stack<char> st;
    string res = "";
    char last = ' ';
    for(int i = 0; i < n; i++)
       st.push(s[i]);
    char cr = st.top();
    st.pop();
    while (!st.empty()){
        if(st.top() != cr && cr != last){
            res = cr + res;
        }
        else changes = true;
        last = cr;
        cr = st.top();
        st.pop();
    }
    if(cr != last){
        res = cr + res;
    }
    int resl = res.length();
    return recurcive_remove(res, resl, changes);
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--){
	    string str, result;
	    cin >> str;
	    int n = str.length();
	    bool changed = true;
	    result = recurcive_remove(str, n, changed);
	    cout << result << "\n";
	}
	return 0;
}
