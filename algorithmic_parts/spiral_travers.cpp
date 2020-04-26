#include <bits/stdc++.h>
using namespace std;

void trevers_spiral(vector<vector<int>> &arr,int m, int n){
    int dir = 0;
    int t = 0, b =  m - 1 , l = 0, r = n-1;
    while(t <= b && l <= r){
        if(dir == 0){
            for(int i = l; i <= r; i++){
                std::cout << arr[t][i] << std::endl;
            }
            t++;
            dir = 1;
        }
        else if(dir == 1){
            for(int i = t; i <= b; i++){
                std::cout << arr[i][r] << std::endl;
            }
            r--;
            dir = 2;
        }
        else if(dir == 2){
            for(int i = r; i >= l; i--){
                std::cout << arr[b][i] << std::endl;
            }
            b--;
            dir = 3;
        }
        else if(dir == 3){
            for(int i = b; i >= t; i--){
                std::cout << arr[i][l] << std::endl;
            }
            l++;
            dir = 0;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int row = 4, col = 4; // array size
    vector<vector<int>> arr = { { 1, 2, 3, 4 },
                     { 12, 13, 14,5 },
                     { 11, 16, 15, 6 },
                     { 10, 9, 8,7 }
                    };
    trevers_spiral(arr,row, col);
    return 0;
}
