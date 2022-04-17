#include <bits/stdc++.h>
using namespace std;

ll STOI(string s) {
    ll num = 0;
    ll po = 1;
    per(i , s.le() - 1 , 0) {
        num += po * (s[i] - '0');
        po *= 10;
    }
    return num;
}


string get_next_palindrome(string input){
  int l = input.length();
  string temp, newPalind = "";
  int mid = l/2;
  if(l % 2 == 0){
      temp = input.substr(0,mid);
      reverse(temp.begin(), temp.end());
      newPalind = input.substr(0,mid) + temp;
      if(STOI(newPalind) <= STOI(input)){
         temp = to_string(STOI(input.substr(0,mid))+1);
         newPalind = temp;
         reverse(temp.begin(), temp.end());
         newPalind += temp;
      }
  }
  else{
      temp = input.substr(0,mid);
      reverse(temp.begin(), temp.end());
      newPalind = input.substr(0,mid) +input[mid]+temp;
      if(STOI(newPalind) <= STOI(input)){
         temp = to_string(STOI(input.substr(0,mid+1))+1);
         newPalind = temp;
         temp = temp.substr(0,mid);
         reverse(temp.begin(), temp.end());
         newPalind += temp;
      }
  }
  return newPalind;
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
