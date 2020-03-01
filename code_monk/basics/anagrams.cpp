// problem link is as following
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/anagrams-651/

#include <iostream>
#include <string>

using namespace std;


int get_deletion_c(string,string);

int main() {
    int t;
    cin >> t ;
    for(int i = 0; i < t; i++ ){
        string a,b;
        cin >> a;
        cin >> b;
        cout << get_deletion_c(a,b)<<"\n";
    }
}

int get_deletion_c(string a, string b){
  int t = 0,as = a.size(),bs = b.size();
  for(int i = 0; i < as; i++){
      size_t f = b.find(a[i]);
      if(f != string::npos){
          a[i]=' ';
          b[f]=' ';
          t += 2;
      }
  }
  return (as+bs-t);
}
