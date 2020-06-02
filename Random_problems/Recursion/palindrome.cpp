// your task is to check whether the given string is palindrome or not.

#include <bits/stdc++.h>

using namespace std;

bool IsPalindrome(string,int, int, int);

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  string str;
  cin >> str;
  int n = str.length();
  bool palindrome = IsPalindrome(str, 0 , n-1, n); // recurcive function

  if(palindrome) cout << "Palindrome";
  else cout << "No palindrome";
  cout << endl;
  return 0;
}

bool IsPalindrome(string str, int s, int e, int n){
  if(s == e) return true;
  else if(str[s] == str[e]) return IsPalindrome(str,s + 1,e - 1, n);
  else return false;
}
