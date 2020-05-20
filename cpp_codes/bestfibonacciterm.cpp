// In this method we directly implement the formula for nth term in the fibonacci series. it is supposed to be the best solution
// Fn = {[(√5 + 1)/2] ^ n} / √5


#include<iostream>
#include<cmath>

int fib(int n) {
  double phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}

// Driver Code
int main ()
{
  int n = 9;
  std::cout << fib(n) << std::endl;
  return 0;
}



// another solution is it is needed to more then 100 time we can store data in memory as following

#include <iostream>
#define ll unsigned int
using namespace std;

void set_fibo(ll arr[],ll n){
    arr[0] = 0;
    arr[1] = 1;
    for(int i = 2; i < n; i++){
        arr[i] = (arr[i-2] + arr[i-1]) % 1000000007;
    }
}

int main() {
    int t;
    ll arr[1001];
    set_fibo(arr, 1001);
    cin >> t;
    while(t--){
        ll ele;
        cin >> ele;
        cout << arr[ele] << "\n";

    }
	return 0;
}
