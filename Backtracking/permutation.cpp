#include <bits/stdc++.h>

using namespace std;


void printPermutations(string str, int n, int idx){
  if(n == idx){
    cout << str << endl;
    return;
  }
  for (int i = idx; i < n; i++) {
    swap(str[i], str[idx]);
    printPermutations(str, n, idx+1);
    swap(str[i], str[idx]);
  }
}

int main(){
  int n = 3;
  string str = "ABC";

  printPermutations(str, n, 0);

}
