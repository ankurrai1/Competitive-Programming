#include <bits/stdc++.h>

using namespace std;

class Solution{
  public:
    int middle(int a, int b, int c){
        if(a < b){
            if(b > c) return c;
            else return b;
        }
        if(a < c) return a;
        if(b > c) return b;
        else return c;
    }
};