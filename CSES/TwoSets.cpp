#include <bits/stdc++.h>
using namespace std;
#define ll long long

void generateSets(ll n){

  vector<ll> set1;

  ll half = (n * (n + 1)) / 4, sum , i, temp;

  if(half % n == 0){
      set1.push_back(n);
      sum  = temp = n;
      i = 1;
  }
  else{
    sum = 0 , i = 2, temp = n +1;
  }
  while(sum < half){
      set1.push_back(i);
      set1.push_back(temp - i);
      sum += (temp+1);
      i++;
  }

  cout  << "YES" << "\n" << set1.size() << "\n";
  sort(set1.begin(), set1.end());

  string str = "";
  ll px = 0;
  for (ll i = 1; i <= n; i++){
    if(set1[px] == i){
        cout << i << " ";
        px++;
    }
    else str += to_string(i) + " ";
  }
  cout << "\n";
  cout << (n - set1.size()) << "\n" << str << "\n";

}

int main()
{
  // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    // no is odd then its not possible to half it
    int total =  (n * (n + 1)) / 2;
    if(total & 1) cout << "NO"<<"\n";
    else generateSets(n);

    return 0;
}
