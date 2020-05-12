#include <bits/stdc++.h>
using namespace std;

int n = 4, m = 4; // array size

int arr[][4] = { { 10, 8, 10, 10 },
                 { 14, 13, 12,11 },
                 { 15, 9, 11, 21 },
                 { 16, 17, 19,20 }
                };


int findpeak(int i, int j){
    if(i > 0 && arr[i-1][j] > arr[i][j]) return findpeak(i-1,j); // checking previous row elements is grater or not
    if(i < n-1 && arr[i+1][j] > arr[i][j]) return findpeak(i+1,j);
    if(j > 0 && arr[i][j-1] > arr[i][j]) return findpeak(i,j-1);
    if(j < m-1 && arr[i][j+1] > arr[i][j]) return findpeak(i,j+1);
    else return arr[i][j];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << findpeak(0,0) <<"\n";
    return 0;
}
