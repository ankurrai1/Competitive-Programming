
#include <bits/stdc++.h>
using namespace std;

int main(){
        long n;
        cin >> n;
        int count = 0;
        for(int i = 5; n / i >= 1; i *= 5){
            count += n / 5;
        }
        cout << count << "\n";
  return 0;
}
