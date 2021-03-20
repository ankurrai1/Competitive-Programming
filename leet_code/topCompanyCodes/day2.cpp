//  problem statement is as following
//  You're given strings J representing the types of stones that are jewels, and S representing the stones you have.
//  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

// solution function

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char, int> jewels;
        for(char e: J) jewels[e]++;
        int count  = 0;
        for(char e : S)
            if(jewels[e]) count++;
        return count;
    }
};
