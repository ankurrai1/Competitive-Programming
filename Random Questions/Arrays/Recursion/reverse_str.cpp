// your task is to reverse given string;

#include <bits/stdc++.h>

using namespace std;

string reverse(string, string, int, int);

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string str;
  cin >> str;
  int n = str.length();
  cout << (reverse(str ,"" , 0, n));
  cout << endl;
  return 0;
}

string reverse(string str, string rstr, int i, int n){
  if(i == n) return rstr;
  rstr = str[i] + rstr;
  i++;
  return reverse(str, rstr, i, n);
}
