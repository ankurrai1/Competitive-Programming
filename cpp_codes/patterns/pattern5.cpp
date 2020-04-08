// 5
//  *
//  *  *
//  *  *  *
//  *  *  *  *
//  *  *  *  *  *
//  *  *  *  *
//  *  *  *
//  *  *
//  *

//  to print patterns like above you have to run following code


#include <iostream>

using namespace std;

int main()
{
    int n, c=1;
    cin >> n ;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout<<" * ";
        }
        cout << "\n";
    }
    for(int i = n-1; i >= 0; i--){
        for(int j = 0; j < i; j++){
            cout<<" * ";
        }
        cout << "\n";
    }
    return 0;
}
