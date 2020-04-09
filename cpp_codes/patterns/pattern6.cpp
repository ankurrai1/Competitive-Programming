// 5
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *
//

// to print patterns like above we have to use following code

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
        for(int j = 0; j < c; j++){
            cout<<"*";
        }
        c += 2;
        cout << "\n";
    }
    c-=2;
    for(int i = n -1 ; i >= 0; i--){
        c-=2;
        for(int j = 0; j < n-i; j++){
            cout<<" ";
        }
        for(int j = 0; j < c; j++){
            cout<<"*";
        }
        cout << "\n";
    }
    return 0;
}
