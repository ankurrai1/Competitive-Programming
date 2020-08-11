// Given an array of positive integers of size N.
//  The task is to make a sorted array which will contain all distinct digits present in A.


#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long n, ele;
        map <unsigned long, int> hash;
        cin >> n;
        unsigned long arr[n];

        for(unsigned long i = 0; i < n; i++){
            cin >> ele;
            arr[i] = ele;
        }

        for(unsigned long i = 0; i < n; i++){
            ele = arr[i];
            while(ele){
                hash[ele%10]++;
                ele = ele / 10;
            }
        }

        for(auto ele : hash){
            cout << ele.first << " ";
        }
        cout << "\n";
    }
  return 0;
}
