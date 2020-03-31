// This is solution for first and last digits problem of code at codechef

// problem question link is as follwing
//https://www.codechef.com/problems/FLOW004

// solution function is as following

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,i;
    cin >> n;
    for(i = 0; i < n; i++){
        int num,l,f;
        cin >> num;
        l = num % 10;
        while(num >= 10){
            num = num / 10;
        }
    cout << (num + l ) << "\n";
    }
    return 0;
}
