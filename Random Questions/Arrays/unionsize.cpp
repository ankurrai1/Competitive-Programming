#include <bits/stdc++.h>

using namespace std;

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n1, n2;
        unordered_map<int, int> hash;
        cin >> n1 >> n2;
        vector<int> arr1(n1,0), arr2(n2,0);
        for(int i = 0; i < n1; i++) cin >> arr1[i];
        for(int i = 0; i < n2; i++) cin >> arr2[i];
        for(int i = 0; i < n1; i++) hash[arr1[i]]++;
        for(int i = 0; i < n2; i++) hash[arr2[i]]++;
        cout << hash.size() <<endl;
    }
    return 0;
}