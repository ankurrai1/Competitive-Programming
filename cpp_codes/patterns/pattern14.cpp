// 9
//         1
//        202
//       30003
//      4000004
//     500000005
//    60000000006
//   7000000000007
//  800000000000008
// 90000000000000009

// to print patterns like above we have to use following code

#include <iostream>

using namespace std;

int main()
{
    int n, c=-1;
    cin >> n ;
    for(int i = 0,t = 1; i < n; i++,t++){
        for(int j = 1; j < n-i; j++){
            cout <<" ";
        }
        cout << t;
        for(int j =0 ; j < c; j++){
            cout <<"0";
        }
        if(i != 0) cout << t;
        c+=2;
        cout<<"\n";
    }
    return 0;
}
