#include <bits/stdc++.h>

// this will find the  no of ways to reach to m * n grids end;

using namespace std;

long gridTraveller(int n, int m){
    if(n == 1 && m == 1) return 1;
    if(n == 0 || m == 0) return 0;
    return gridTraveller(n -1, m) + gridTraveller(n, m - 1);
}

map<string, long> mem;

long fastGridTraveller(int n, int m){
    string key1 = to_string(n) + "," + to_string(m);
    string key2 = to_string(m) + "," + to_string(n);
    if(mem[key1]) return mem[key1];
    if(mem[key2]) return mem[key2];
    if(n == 1 && m == 1) return 1;
    if(n == 0 || m == 0) return 0;
    mem[key1] = fastGridTraveller(n -1, m) + fastGridTraveller(n, m - 1);
    return mem[key1];
}

int main()
{
    
    cout <<  "    " << gridTraveller(1, 1) << endl;
    cout <<  "    " << gridTraveller(2, 2) << endl;
    cout <<  "    " << gridTraveller(2, 3) << endl;
    cout <<  "    " << gridTraveller(3, 3) << endl;
    cout <<  "    " << fastGridTraveller(18, 18) << endl;
}
