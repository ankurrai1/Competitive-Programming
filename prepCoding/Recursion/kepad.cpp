#include <bits/stdc++.h>

using namespace std;

void getKeypadCombination(vector<int> nums, unsigned int i, string curr, unordered_map<int, string> hash, vector<string> &res){
    if(i == nums.size()){
        res.push_back(curr);
        return;
    }
    string str = hash[nums[i]];
    for(unsigned int j = 0;  j < str.size(); j++){
        getKeypadCombination(nums, i+1 , curr + str[j] , hash, res);
    }
}

int main(){
    unordered_map<int, string> hash;
    hash[2] = "abc";
    hash[3] = "def";
    hash[4] = "ghi";
    hash[5] = "jkl";
    hash[6] = "mno";
    hash[7] = "pqrs";
    hash[8] = "tuv";
    hash[9] = "wxyz";

    vector<string> res;
    vector<int> nums = {5, 4, 3};  
    getKeypadCombination(nums, 0, "", hash, res);
    cout << "size : "<< res.size() << endl;
    
    for(string ele : res){
        cout << ele << " ";
    }
    
    return 0;
}