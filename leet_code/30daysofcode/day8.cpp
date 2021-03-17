// problem statement is as following

// You are given an array coordinates, coordinates[i] = [x, y], where [x, y] represents the coordinate of a point.
// Check if these points make a straight line in the XY plane.


// the basic concept is slop will be same at each point and its previous points
// slop = y2-y1 / x2-x1

// solution function is as following:

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        int points = c.size();
        int xdiff = abs(c[1][0] - c[0][0]);
        int ydiff = abs(c[1][1] - c[0][1]);
        for(int i = 2; i < points; i++){
            int cxdiff = abs(c[i][0] - c[i-1][0]);
            int cydiff = abs(c[i][1] - c[i-1][1]);
            if(xdiff * cydiff != cxdiff * ydiff ) return false;
        }
        return true;
    }
};
