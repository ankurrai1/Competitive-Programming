
// Given a number (greater than 1 and less than 1e12), return the sum of its prime factors
// for e.g.
// 9 = 3 * 3, so answer is (3 + 3) = 6
// 6 = 3 * 2, so answer is (3 + 2) = 5
// * [execution time limit] 1 seconds (cpp)
// * [input] integer64 num
// Number ranges from 2 to 10^12
// * [output] integer64
//sum of all the prime factors of the given number.


#include <bits/stdc++.h>

using namespace std;

void primeFactors(long long n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }
 
    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        cout << n << " ";
}

// fastCalculation of factors
long long getPrimeFactorSum(long long n){

    long long sum = 0;

    while((n & 1)  == 0){
        sum += 2;
        n>>=1;
    }
    while(n % 3  == 0){
        sum += 3;
        n /= 3;
    }
    for(int i = 5; i * i <= n; i += 6){
        while(n%i == 0){
            sum += i;
            n /= i;
        }
        while(n%(i+2) == 0){
            sum += (i + 2);
            n /= (i+2);
        }
    }
    if(n > 3) sum += n;

    return sum;

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        primeFactors(n); cout << " : ";
        cout << getPrimeFactorSum(n) << endl;
    }
    return 0;
}
