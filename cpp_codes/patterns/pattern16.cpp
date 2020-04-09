// 5
// **
// * *
// *  *
// *   *
// ******

// to print patterns like above we have to use following code

#include <iostream>

using namespace std;

int main()
{
    int n, c=0;
    cin >> n ;
    for(int i = 1; i <= n; i++){
        cout << "*";
        for(int j = 1; j < i; j++){
           if(i == n) cout << "*";
           else cout << " ";
        }
        cout << "*";
        cout << "\n";
    }
    return 0;
}
