#include<bits/stdc++.h>

using namespace std;

class Solution{

public:
    int swapNibbles(unsigned char x){
        int left = x & ((1 << 4) - 1);
        int right = x & (((1 << 4) - 1) << 4);
        int res = (left << 4) | (right >> 4);
        return res;
        
    }
};