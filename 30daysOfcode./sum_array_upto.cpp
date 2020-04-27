// #Day1
// problem statement is as following
//Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

#include <bits/stdc++.h>
using namespace std;

vector<int> get_index(vector<int> &a, int s, int l){
    vector<int> res = {-1,-1};
    int i = 0, sum = 0, si = 0;
    while(si < l && i <= l){
        if(sum < s){
            sum += a[i];
            i++;
        }
        else if(sum > s){
            sum -= a[si];
            si++;
        }
        if(sum == s){
            res[0] = si+1;
            res[1] = i;
            break;
        }
    }
    return res;
}



int main() {
    int t,n,s;
    cin >> t;
    while(t--){
        cin >> n >> s;
        vector<int> a;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            a.push_back(num);
        }
        vector<int> res = get_index(a,s,n);
        if(res[0]<0 && res[1]<0) cout << res[1] << "\n";
        else cout << res[0] << " " << res[1] << "\n";
    }
	return 0;
}
