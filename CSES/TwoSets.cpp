#include <bits/stdc++.h>
using namespace std;



void generateSets(int n){
  
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, half;
    cin >> n;
    if(n & 1){
      cout << "NO"<<"\n";
    }
    else{
      generateSets(n);
    }
    return 0;
}
