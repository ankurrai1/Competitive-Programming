#include <bits/stdc++.h>
using namespace std;

void generateSets(int n){

  cout << "YES" << "\n";

  vector<int> set2;
  unordered_map<int, int> set1;
  int tepm  = n;

  int half = (n * (n + 1)) / 2;
  if(half % n == 0){
    int sum = 0;
    set1[n]++;
    for (int i = 1; sum < half; i++){
      set[n - i]++;
      set[i]++;
      sum += n;
    }
  }
  else{
    int sum = 0;
    for (int i = 2; sum < half; i+=2){
      set[n - i]++;
      set[i]++;
      sum += (n + 1);
    }
  }
  cout << set1.size() << "\n";
  for (int i = 1; i <= n; i++){
    if(set1[i]) cout << i << " ";
    else set2.push_back(i);
  }
  cout << "\n";
  cout << set2.size() << "\n";
  for (int i = 1; i <set2.size(); i++){
    cout <<set2[i]<< " ";
  }
}


int main()
{
  // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, half;
    cin >> n;

    // no is odd then its not possible to half it
    if(n & 1) cout << "NO"<<"\n";
    else generateSets(n);

    return 0;
}
