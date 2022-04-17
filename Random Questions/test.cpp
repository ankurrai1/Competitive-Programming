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
      ll n, r, b;
      cin >> n >> r >> b;
      ll a = r / (b+1);
      ll c = 0;
      ll d = 0;
      ll e = r % (b +1);
      string final = "";
      while(c < r){
        for(int i = 0; i < a; i++) final += "R";
        c += a;
        if(e){
          final += "R";
          a+=1;
          e-=1;
        }
        if(d < b){
          final += "B";
          d+=1;
        }
      }
      cout << final << endl;
    }

    return 0 ;

}
