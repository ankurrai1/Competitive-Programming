// 10
//          0
//         809
//        78098
//       6780987
//      567809876
//     45678098765
//    3456780987654
//   234567809876543
//  12345678098765432
// 0123456780987654321

// to print patterns like above we have to use following code
#include <iostream>

using namespace std;

int main()
{
    int n, c=0;
    cin >> n ;
    for(int i = 1; i <= n; i++){
        int t = 0;
        for(int j = 0; j < n-i; j++,t++){
            cout <<" ";
        }
        for(int j = 1; j < i; j++){
            cout <<(t++);
        }
        cout << 0;
        for(int j = 1; j < i; j++){
            cout <<(t--);
        }
        cout << "\n";
    }
    return 0;
}
