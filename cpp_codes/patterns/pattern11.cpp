// 5
//
//     *
//    **
//   ***
//  ****
// *****
//  ****
//   ***
//    **
//     *

// to print patterns like above we have to use following code

#include <iostream>

using namespace std;

int main()
{
    int n, c=1;
    cin >> n ;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i = n; i > 0; i--){
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
