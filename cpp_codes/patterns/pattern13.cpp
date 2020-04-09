// 5
//     1
//    123
//   12345
//  1234567
// 123456789

// to print patterns like above we have to use following code

#include <iostream>

using namespace std;

int main()
{
    int n, c=1;
    cin >> n ;
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n-i; j++){
            cout <<" ";
        }
        for(int j =1 ; j <= c; j++){
            cout <<(j);
        }
        c+=2;
        cout<<"\n";
    }
    return 0;
}
