#include <bits/stdc++.h>
using namespace std;


void targetSumSubset(vector<int> arr, int target, string subsetSF, int i = 0){
     
    if(target < 0 || i > arr.size()) return; // checking i > arr.size() which is 6 for this because we are checking after for target
    // if we put target == 0 check at top then case could be i == arr.size();
    // after element 4 (by index) addition at i = 5 it will add ele subset and will check in next recursion
    // if we return at i == 5 then we will never reach to target == 0 part due to which we will miss subset of 10 50
    if(target == 0){
        cout << subsetSF << endl;
        return;
    }
    targetSumSubset(arr, target - arr[i], subsetSF + to_string(arr[i]) + "  ", i + 1);
    targetSumSubset(arr, target, subsetSF, i + 1 );
    
}

int main(){
    
    int target = 60;
    vector<int> arr = {10, 20, 30, 40, 50};
    
    targetSumSubset(arr, target, "");

    
    return 0;
}