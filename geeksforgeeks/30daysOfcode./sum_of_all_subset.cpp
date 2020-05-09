// problem statement is as following:
// Given a number as integer s, find the sum of all the elements present in all possible subsequences of s.

// solution function is implemented here:

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        int freq, sum = 0, l = s.size();
        freq = pow(2,l-1);
        for(int i = 0; i < l; i++){
            sum += ((s[i] - '0') * freq);
        }
       cout << sum << "\n";
    }
    return 0;
}
