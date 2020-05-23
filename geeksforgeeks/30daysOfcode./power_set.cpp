// problem statement is as following
// Given a string of length n, print all the possible subsets of the string in a lexiographically-sorted order.

// solution function is as following

#include <bits/stdc++.h>
using namespace std;


// logic behind this is to use binary like
//                         a   b   c
// for abc n == 3     j == 0   1   2     counter & (1 << j)
// 000 counter == 0        0   0   0        000  & 001  = 0
// 001 counter == 1        1   0   0        001  & 010  = 0
// 010 counter == 2        1   0   0        010  & 100  = 0
// 011 counter == 3
// 100 counter == 4
// 101 counter == 5
// 110 counter == 6
// 111 counter == 7

void print_sub_set(string s, int n){
    vector<string> subs;

    unsigned int pow_set_size = pow(2, n);
    int counter;
    for(counter = 0; counter < pow_set_size; counter++){
        string sub = ""; // coutnter == 1;
        for(int j = 0; j < n; j++){ // j will be 0 1 2 3 4 5 6 7........ n;
            if(counter & (1 << j)) sub += s[j];
        }
        subs.push_back(sub);
    }

    sort(subs.begin(), subs.end());
    for(int j = 1; j < pow_set_size; j++){
        cout << subs[j] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        print_sub_set(s, n);
    }
	return 0;
}
