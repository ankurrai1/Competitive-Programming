// #Day4
// problem statement
//Given a number n, check if it is divisible by 8.

// solution function is implimented as following


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int ans = -1;
        string num;
        cin >> num;
        int sub_part,s = num.size();
        if(s <= 3) sub_part = stoi(num);
        else sub_part = stoi(num.substr(s-3, 3));
        if(sub_part % 8 == 0) ans = 1;
        cout << ans <<"\n";
    }
    return 0;
}
