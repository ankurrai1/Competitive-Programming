// your task is to if find all sub set of given number set;


// your task is to if find all sub set of given number set;

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> res;

void generateAllSubset(vector<int>, int, int, vector<int>);

int main(){
  int n = 3;
  vector<int> curr, arr = {1,2,3};

  generateAllSubset(arr, 0, n, curr);

  for(auto a : res){
    for(auto ele : a){
      cout << ele << " ";
    }
    cout << endl;
  }
  return 0;
}

void generateAllSubset(vector<int> arr, int i, int n, vector<int> curr){

  if(i == n){
      res.push_back(curr);
      return;
  }
  else{
    generateAllSubset(arr, i+1, n, curr);
    curr.push_back(arr[i]);
    generateAllSubset(arr, i+1, n, curr);
  }
}
