// 8
//        *
//       **
//      * *
//     *  *
//    *   *
//   *    *
//  *     *
// ********

// to print patterns like above we have to use following code
#include <iostream>

using namespace std;

int main()
{
    int n, c=0;
    cin >> n ;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n-i; j++){
              cout << " ";
        }
        cout << "*";
        for(int j = 1; j < i-1; j++){
            if(i == n) cout << "*";
            else cout << " ";
        }
        if(i != 1) cout << "*";
        cout << "\n";
    }
    return 0;
}
