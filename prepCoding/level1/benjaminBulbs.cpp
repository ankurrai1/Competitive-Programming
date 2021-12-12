// Think of perfect squares has odd no of factors and others has even no of factors to
// they will touch the bulb even times which will make them same as starting
// and perfect squares will touch the bulb odd times which will make them toggled after all touch


// So the question was given n no of bulbs tell which bulbs will be on after iterating over them n times
// and make every i th bulb toggled;


#include <bits/stdc++.h>

using namespace std;

void benjaminBulb(int n){
    for(int i = 1; i <= n; i++){
        int sq = (int)sqrt(i);
        if(sq * sq == i){
            cout << i << endl;
        }
    }
}

int main(){
    int num;
    cin >> num;
    benjaminBulb(num);
    return 0;
}