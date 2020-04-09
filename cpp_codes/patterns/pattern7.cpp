// 5
// *****
// *   *
// *   *
// *   *
// *****

// to print patterns like above we have to use following code

#include <iostream>

using namespace std;

int main()
{
    int n, c=1;
    cin >> n ;
    for(int i = 1; i <= n; i++){
        cout<<"*";
        if(i==1 || i ==n){
            for(int j = 0; j < n-2; j++){
                cout << "*";
            }
        }
        else{
            for(int j = 0; j < n-2; j++){
                cout << " ";
            }
        }
        cout<<"*";
        cout << "\n";
    }
    return 0;
}
