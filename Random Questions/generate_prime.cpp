#include <bits/stdc++.h>
#define ll unsigned long long
#define MAX 1000001
using namespace std;

vector<int> sieve(){
  int is_prime[MAX] = {0};
  is_prime[2] = true;

  for(ll i = 3; i < MAX; i+=2){
      is_prime[i] = true;
  }

  for(ll i = 3; i*i < MAX; i+=2){
      if(is_prime[i]){
          for(ll j = i*2; j < MAX; j+=i){
              is_prime[j] = false;
          }
      }
  }

  vector<int> primes;

  for(ll m = 0; m < MAX; m++){
      if (is_prime[m]) primes.push_back(m);
  }

  return primes;
}

void print_prime(ll s, ll e, vector<int> a){
    int n = (e - s) + 1;
    bool is_prime[n] = {0};

    //set all segmented value to true;

    for(int i = 0; i <= n; i++){
        is_prime[i] =  true;
    }

  for(int i = 0; (a.at(i) * a.at(i)) <= e; i++){
      ll cp = a.at(i);

      ll base = (s / cp) * cp;
      if (base < cp) base += cp;

      for(ll j = base; j <= e; j+=cp){
          is_prime[j-s] = false;
      }

      if(base == cp) is_prime[base-s] = true;

  }

  for(ll t = 0; t < n ; t++){
      ll no = s + t;
      if(is_prime[t] && no > 1)
          cout << no << "\n";
  }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    vector<int> primes = sieve();
    cin >> n;
    while(n--){
        ll s, e;
        cin >> s >> e;
        print_prime(s, e, primes);
        cout << "\n";
    }
    return 0;
}
