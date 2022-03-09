#include<bits/stdc++.h>

using namespace std;


int get_subset_count_with_given_diff(int n, int diff, int arr[]){
    int total_sum = 0;
    for(int i = 0; i < n; i++) total_sum += arr[i];

    int subset_1_sum = (diff + total_sum)/ 2;

    int DP[n+1][total_sum+1];

    for(int i = 0; i <= n; i++) DP[i][0] = 1;
    for(int i = 1; i <= total_sum ; i++) DP[0][i] = 0;

    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < total_sum+1; j++){
            if(arr[i-1] > j) DP[i][j] = DP[i -1][j];
            else {
                DP[i][j] = DP[i-1][j] + DP[i-1][j - arr[i-1]];
            }
        }
    }


    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < total_sum + 1; j++){
            cout << DP[i][j] << "   ";
        }
        cout << endl;
    }

    return DP[n][subset_1_sum];
}

int main(){
    int n = 4, diff = 1;
    int arr[4] = {1,1,2,3};
    cout << (get_subset_count_with_given_diff(n, diff, arr)) << endl;

}
