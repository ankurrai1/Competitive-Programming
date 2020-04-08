// 9
//         *
//        ***
//       *****
//      *******
//     *********
//    ***********
//   *************
//  ***************
// *****************
// to print patterns like this you have to run followign code

#include <iostream>

using namespace std;

int main()
{
    int n, c=1;
    cin >> n ;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < n-i; j++){
            cout<<" ";
        }
        for(int k = 0; k < c; k++){
            cout << "*";
        }
        c += 2;
        cout << "\n";
    }
    return 0;
}
