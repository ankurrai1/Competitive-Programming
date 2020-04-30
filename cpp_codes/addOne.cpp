// #Day2 30 april 2020
// problem statement;
// given a vector of interger you have to add 1 as number to that

#include <bits/stdc++.h>
using namespace std;

vector<int>plusOne(vector<int> &A) {
    vector<int> a;
    int t = 0;
    while(A[t] == 0){
        t++;
    }
    int lasti = A.size() - 1;
    int carry = 1;
    for(int i = lasti; i >=t || carry > 0; i--){
        if (carry <= 0) a.push_back(A[i]);
        else{
            int res = (A[i]+carry) % 10;
            carry = (A[i]+carry) / 10;
            a.push_back(res);
        }
    }
    reverse(a.begin(), a.end());
    return a;
}

int main()
{
    vector<int> A = {0, 0, 0 ,9, 9, 9, 9, 9};
    vector<int> res ;
    res = plusOne(A);
    for(int a: res){
        cout << a << "   ";
    }
    return 0;
}
