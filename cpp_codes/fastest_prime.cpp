// this solution is good until no of prime is less then 10^8 after it will fail size of array

#include <bits/stdc++.h>
#define ll unsigned long long
ll LIMIT = 1000000
using namespace std;

void prime_sieve(int *a){
  a[0] = a[1] = 0;
  a[2] = 1;
  for(ll i = 3; i < LIMIT; i+=2){
    a[i] = 1;
  }
  for(ll i =3; i < LIMIT; i+=2){
    if(a[i]==1){
      for(ll j = i*i ; j < LIMIT; j += i){
        a[i] = 0;
    }
  }
}

}

void print_prime(int *a, ll s, ll e){
  for(ll i = 0 ; i <=e; i++){
    cout << a[i]<< "\n";
  }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    int d[LIMIT]  = {0};
    prime_sieve(d);
    cin >> n;
    while(n--){
        ll s, e;
        cin >> s >> e;
        print_prime(d,s,e);
        cout << "\n";
    }
    return 0;
}
