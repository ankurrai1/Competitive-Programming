#include <bits/stdc++.h>

using namespace std;

void printElementsCombinationsForSum(int n, int sum, vector<int> arr, string result){
    if(n == 0 || sum == 0){
        if(sum == 0) cout << result << endl;
        return;
    }
    if(sum < arr[n - 1])printElementsCombinationsForSum(n - 1, sum, arr, result);
    else{
        printElementsCombinationsForSum(n - 1, sum, arr, result);
        printElementsCombinationsForSum(n - 1, sum - arr[n-1], arr, result + to_string(arr[n - 1]));
    }
}

int main(){
  int n = 5,targetSum = 11;

  vector<int> items = {2,3,7,8,10};

  printElementsCombinationsForSum(n, targetSum, items, "");
}
