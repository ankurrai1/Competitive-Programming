// 7
// 1
// 23
// 456
// 78910
// 1112131415
// 161718192021
// 22232425262728

// to print patterns like that we have to use following codeche
   
#include <iostream>

using namespace std;

int main()
{
    int n, c=1;
    cin >> n ;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout<<c<<" ";
            c++;
        }
        cout << "\n";
    }
    return 0;
}
