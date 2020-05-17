// problem statement is as following
// Ugly numbers are numbers whose only prime factors are 2, 3 or 5.
// The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers.
// By convention, 1 is included. Write a program to find Nth Ugly Number.


#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

void set_ugly(ll arr[]){
    arr[0] = 1;
    ll i2 = 0, i3 = 0, i5 = 0;
    ll nexti2 = arr[i2]*2;
    ll nexti3 = arr[i3]*3;
    ll nexti5 = arr[i5]*5;
    ll next = 1;
    for(ll i = 1; i < 10000; i++){
        next = min(min(nexti2,nexti3),nexti5);
        arr[i] = next;
        if(next == nexti2){
            i2++;
            nexti2 = arr[i2] * 2;
        }
        if(next == nexti3){
            i3++;
            nexti3 = arr[i3] * 3;
        }
        if(next == nexti5){
            i5++;
            nexti5 = arr[i5] * 5;
        }
    }
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    ll arr[10000];
    set_ugly(arr);
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << arr[n-1] << " \n";
    }
    return 0;
}
