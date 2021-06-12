#include <bits/stdc++.h> 
#define pb push_back
#define mp make_pair 
#define fr first
#define sc second
#define MOD 1000000007
#define len(x) x.size()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define all(v) v.begin(), v.end()
#define alla(a,n) a, a + n
  
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<string> vs;

int32_t main() {
    // for reading input and output file we are routing it to std IO;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin) ;
    freopen("output.txt", "w", stdout) ;
    #endif

    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL) ; cout.tie(NULL) ;

    int t ;
    cin >> t ;

    while( t-- ) {
        
        //Code Here

    }

    return 0 ;

}

#include <bits/stdc++.h>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){

    }
    return 0;
}










void sortByFreq2(vector<int>& v){
    unordered_map<int, int> count;
    for (int i : v) count[i]++;
    sort(v.begin(), v.end(),
        [&count](int const& a, int const& b) {
        if (a == b) return false;
        if (count[a] > count[b]) return true;
        else if (count[a] < count[b]) return false;
        return a < b;
    });
}

vector<vector<int>> sortMatrixByOccurrences(vector<vector<int>> m) {
    vector<int> temp;
    for(vector<int> row: m){
        for(int ele :row){
            temp.push_back(ele);
        }
    }

}
