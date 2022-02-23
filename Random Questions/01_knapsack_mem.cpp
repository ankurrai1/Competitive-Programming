#include <bits/stdc++.h>

using namespace std;

int t[1001][1001] // you should take as per the test criteria in question

// we are taking two arrays because in this there are two values changing n and c

int getMaxValueWithGivenCapacity(int n, int capacity, vector<int> weight, vector<int> value){
  if(capacity == 0 || n == 0) return 0;
  if(capacity < weight[n - 1]) return getMaxValueWithGivenCapacity(n - 1, capacity, weight, value);
  int val1 = getMaxValueWithGivenCapacity(n - 1, capacity - weight[n-1], weight, value) + value[n-1];
  int val2 = getMaxValueWithGivenCapacity(n - 1, capacity, weight, value);
  return max(val1, val2);
}

int main(){
  int n = 4 , capacity = 7; //basically the capacity of knapsack

  vector<int> weight = {1,3,4,5};
  vector<int> value = {1,4,5,7};

  int maxValueWithGivenCapacity = getMaxValueWithGivenCapacity(n, capacity, weight, value);
  cout << maxValueWithGivenCapacity << endl;
}
