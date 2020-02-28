//solution function of problem is as following and link of question is in next linked.
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/




#include <bits/stdc++.h>

using namespace std;

int fact(int);

int main() {
 int n;
 cin >> n;
 cout << fact(n);
}

int fact(int n){
    if (n <= 1) return 1;
    else return n*fact(n - 1);
}
