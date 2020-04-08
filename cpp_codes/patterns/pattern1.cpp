// 5
//
// *
// * *
// * * *
// * * * *

// following code will print patterns like above

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n ;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << "* ";
        }
        cout <<"\n";
    }
    return 0;
}
