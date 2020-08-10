#include <bits/stdc++.h>

using namespace std;

int main(){
  unsigned long n, ele;
  unordered_map <unsigned long, int> hash;
  cin >> n;
  while(n--){
    cin >> ele;
    hash[ele]++;
  }
  cout << hash.size() << "\n";
  return 0;
}
