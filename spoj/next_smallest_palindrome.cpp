#include <bits/stdc++.h>
using namespace std;


string get_next_palindrome(string input){
  int l = input.length();
  string npalind = "";
  cout << l << " I am length of no";
  return npalind;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--){
      string no,next_palindrome;
      cin >> no;
      next_palindrome = get_next_palindrome(no);
      cout << next_palindrome << "\n";
    }
    return 0;
}
