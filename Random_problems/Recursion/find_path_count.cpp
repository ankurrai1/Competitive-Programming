#include <bits/stdc++.h>

using namespace std;

// problem statement is as following
// you have to find total no of paths in m * n matrix form (0, 0) to (m , n)

int get_path_count(int, int);

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int m, n;
  cin >> m >> n;
  int path = get_path_count(m, n); // recurcive function
  cout << path << endl;
  return 0;
}

int get_path_count(int m, int n){
  if(m == 0 || n == 0) return 1;
  else return get_path_count(m -1, n) + get_path_count(m, n -1);
}
