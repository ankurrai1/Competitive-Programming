// your task is to if find all permutation of given set;
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> res;

void generateAllPermutation(vector<int>, int, int);

int main(){
  int n = 4;
  vector<int> curr, arr = {1,2,3, 4};

  generateAllPermutation(arr, 0, n);

  for(auto a : res){
    for(auto ele : a){
      cout << ele << " ";
    }
    cout << endl;
  }
  return 0;
}

void generateAllPermutation(vector<int> arr, int i, int n){
    if(i == n - 1){
        res.push_back(arr);
        return;
    }
    for(int j = i; j < n; j++){
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
        generateAllPermutation(arr, i+1, n);
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;

    }
}
