#include <bits/stdc++.h>

using namespace std;

// we are taking two arrays because in this there are two values changing n and c

int getMaxValueWithGivenCapacity(int n, int w, vector<int> weights, vector<int> values){
    int DP[n+1][w+1]; // setting up dp as max it can go to get value

    // base conditions is replaced with it
    for(int i = 0; i <= w; i++) DP[0][i] = 0;
    for(int i = 0; i <= n; i++) DP[i][0] = 0;


    for(int i = 1; i < n+1; i++){
        for(int j = 1; j < w+1; j++){
            if(weights[i-1] > j) DP[i][j] = DP[i-1][j]; // Just above value to fill because we can not choose current weight which is grater then capacity
            else{
                DP[i][j] = max(                               // we can replace DP with recursive function it will became same as before
                    values[i-1] + DP[i-1][j - weights[i-1]], //Either we can add a vlaue
                    DP[i-1][j]                               // or we can avoid them
                );
            }
        }
    }

    for(int i = 0; i < n+1; i++){
        for(int j = 0; j < w+1; j++){
            cout << DP[i][j] << " ";
        }
        cout << endl;
    }
    return DP[n][w];
}

int main(){
  int n = 4 , capacity = 7; //basically the capacity of knapsack

  vector<int> weight = {1,3,4,5};
  vector<int> value = {1,4,5,7};

  int maxValueWithGivenCapacity = getMaxValueWithGivenCapacity(n, capacity, weight, value);
  cout << maxValueWithGivenCapacity << endl;
  return 0;
}
x
