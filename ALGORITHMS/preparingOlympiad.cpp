// Codeforces problem 


// You have n problems. You have estimated the difficulty of the i-th one as integer ci. Now you want to prepare a problemset for a contest, using some of the problems you've made.

// A problemset for the contest must consist of at least two problems. You think that the total difficulty of the problems of the contest must be at least l and at most r. Also, you think that the difference between difficulties of the easiest and the hardest of the chosen problems must be at least x.

// Find the number of ways to choose a problemset for the contest.


#include<bits/stdc++.h>

using namespace std;

bool have2ORmore(int i){
    int ones = 0;
    while(i){
        ones++;
        i &=(i - 1);
    }
    return (ones >= 2);
}

bool goodTestCombination(int arr[], int i, int l, int r, int x){
    int mn = INT_MAX;
    int mx = INT_MIN;
    int sum = 0;
    int pos = 0;
    while(i){
        if(i & 1 == 1){
            sum += arr[pos];
            mn = min(mn, arr[pos]);
            mx = max(mx, arr[pos]);
        }
        i >>=1;
        pos++;
    }
    
    return ((mx - mn) >= x && sum >=l && sum <= r);
}

int prepOlyp(int arr[], int n, int l, int r, int x){
    int ans = 0;
    for(int i = 3; i < (1 << n); i++){
        if(have2ORmore(i)){
            if(goodTestCombination(arr, i, l, r, x)){
                ans++;
            }
        }
    }
    return ans;
}

int main(){
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    int prob[n];
    for(int i = 0; i < n; i++) cin >> prob[i];
    int count = prepOlyp(prob, n, l, r, x);
    cout << count << endl;
}