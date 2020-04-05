// two ways of taking input is demonestrated here

#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int a;
  string S, T;

  cin >> a;
  cin.ignore(256, '\n'); // remaining input characters up to the next newline character are ignored

  getline(cin, S);

  stringstream X(S);

  while (getline(X, T, ' ')) {
      cout << T << endl;
  }

  return 0;
}
