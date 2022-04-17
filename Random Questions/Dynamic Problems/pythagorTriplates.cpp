#include <bits/stdc++.h>

using namespace std;

bool pthonTriplets(int a, int b, int c){
    int hy = max(a,max(b,c));
    int others;
    if(a==hy) others = (b*b) + (c*c);
    else if(b==hy) others = (a*a) + (c*c);
    else others = (a*a) + (b*b);
    if(hy * hy == others) return true;
    return false;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(pthonTriplets(a,b,c)) cout << "yes" << endl;
    else cout << "NO" << endl;
    return 0;
}