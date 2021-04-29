#include <bits/stdc++.h>

using namespace std;

long long int fibo(int n){
    if(n <= 2) return 1;
    return fibo(n - 1) + fibo(n - 2);
}



long long fastFibo(int n, unordered_map<int, long long> mem){
    if(mem[n]) return mem[n];
    if(n <= 2) return 1;
    mem[n] = fastFibo(n -1, mem) + fastFibo(n - 2, mem);
    return mem[n];
}

int main()
{
    unordered_map<int, long long> mem;
    cout <<  "    " << fibo(6) << endl;
    cout <<  "    " << fastFibo(50, mem) << endl;
}
