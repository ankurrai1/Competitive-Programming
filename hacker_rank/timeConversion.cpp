// Problem Question timeConversion , link is following
// https://www.hackerrank.com/challenges/time-conversion/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    string ext = s.substr(8,2);
    int hour = stoi(s.substr(0,2));
    if(ext == "PM"){
        string time;
        time = to_string(12 + hour%12) + s.substr(2,6);
        return time;
    }
    else if (hour % 12 == 0) return "00"+s.substr(2,6);
    else return s.substr(0,8);
}
