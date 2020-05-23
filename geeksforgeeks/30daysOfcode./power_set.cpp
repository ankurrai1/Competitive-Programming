// problem statement is as following
// Given a string of length n, print all the possible subsets of the string in a lexiographically-sorted order.

// solution function is as following

#include <bits/stdc++.h>
using namespace std;

void print_sub_set(string s, int n){
    vector<string> subs;

    unsigned int pow_set_size = pow(2, n);
    int counter;
    for(counter = 0; counter < pow_set_size; counter++){
        string sub = "";
        for(int j = 0; j < n; j++){
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
