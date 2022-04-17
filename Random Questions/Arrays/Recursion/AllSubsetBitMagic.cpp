// your task is to if find all sub set of given number set;

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> res;

void generateAllSubset(vector<int>, int);

int main(){
  int n = 3;
  vector<int> curr, arr = {1,2,3};

  generateAllSubset(arr, n);

  for(auto a : res){
    for(auto ele : a){
      cout << ele << " ";
    }
    cout << endl;
  }
  return 0;
}

void generateAllSubset(vector<int> arr, int n){
  for(int i = 0; i <= pow(2,n); i++){
    vector<int> curr;
    for(int j = 0; j < n; j++){
      if(i & (1<<j)) curr.push_back(arr[j]);
    }
    res.push_back(curr);
  }
}
