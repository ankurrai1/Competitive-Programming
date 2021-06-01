#include<bits/stdc++.h>

using namespace std;

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

template<class T>
bool compare(const T &a, const T &b){
    return a.second > b.second;
}

void doHistogram1(int arr[], int n){
    
    map<int, int> hash;
    for(int i = 0; i < n; i++) hash[arr[i]]++;
    vector<pair<int, int>> v;
    for(auto ele : hash){
        v.push_back(ele);
    }
    sort(v.begin(), v.end(), compare<pair<int, int>>);
    
    int i = 0;
    for(pair<int, int> ele : v){
        while(ele.second > 0){
            arr[i++] = ele.first;
            ele.second--;
        }
    }
    
}


void doHistogram2(vector<int> &arr){
    
    unordered_map<int, int> hash;
    for(unsigned int i = 0; i < arr.size(); i++) hash[arr[i]]++;
    
    // we are directly going to sort the given arr using lembda fucnction and capture array with referace of hash;
     std::sort(
        arr.begin(),
        arr.end(),
        [&hash](int const& a,int const& b)->bool{
        if (a == b) {
            return false;
        }
        if (hash[a] > hash[b]) {
            return true;
        }
        else if (hash[a] < hash[b]) {
            return false;
        }
        return a < b;
    });
}

int main(){
    
  int arr[] = {1, 1, 4, 3, 3, -5, 3, 2, 2, -5, 1, 3};
  int n = 12;
  doHistogram1(arr, n);
  print(arr, n);
  
  

  vector<int> arr2 = {1, 1, 4, 3, 3, -5, 3, 2, 2, -5, 1, 3};
  doHistogram2(arr2);
  for(int a : arr){
      cout << a << " ";
  }

  return 0;
}
