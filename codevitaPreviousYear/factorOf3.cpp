#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n] ,arr2[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        for(int i = 0; i < n; i++){
            arr2[i] = arr[i] % 3;
        }
        int a = 0, b = 0, c = 0;
        for(int i = 0; i < n; i++){
            if(arr2[i] == 0) a++;
            if(arr2[i] == 1) b++;
            if(arr2[i] == 2) c++;
        }
        if(a == 0 && b != 0 && c != 0) // if there is only multiple of 3 then it is not possible
        cout << "No";
        else if(a == 0 && b == 0 && c != 0) // if there is only 2s then itis possible
        cout << "Yes";
        else if(a == 0 && b != 0 && c == 0)
        cout << "Yes";
        else if( a <= (b + c + 1))
        cout << "Yes";
        else cout << "No";
    }

	return 0;
}
