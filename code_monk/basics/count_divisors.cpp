// problem statement is at following link here only solution function is implimented
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/


#include <iostream>

using namespace std;

int main() {
 int l,r,d,c = 0;
 cin >> l >> r >> d;
 c = ((r -r%d)-(l-l%d))/d;
 if(l%d == 0) c++;
 cout << c;
}
