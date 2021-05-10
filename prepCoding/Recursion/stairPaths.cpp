// taks is to print factorial of given no;

#include <bits/stdc++.h>


// for simplicity you can replace curr from array to string which will be more convinient

void stairPath(int n, string curr){
    if(n < 0) return;
    if(n == 0){
        cout << curr << " ";
        return;
    }

    stairPath(n - 1, curr + "1");
    stairPath(n - 2, curr + "2");
    stairPath(n - 3, curr + "3");
    
}

using namespace std;

void Print(vector<auto> res){
    for(auto ele : res ){
        cout << ele << "  ";
    }
    cout << endl;
}

void stairPath(int n, vector<int> curr){
    if(n < 0) return;
    if(n == 0){
        Print(curr);
        return;
    }
    curr.push_back(1);
    stairPath(n - 1, curr);
    curr.pop_back();
    curr.push_back(2);
    stairPath(n - 2, curr);
    curr.pop_back();
    curr.push_back(3);
    stairPath(n - 3, curr);
    
}

int main(){
    int n = 3;
    vector<int> curr;
    stairPath(n, curr);
    return 0;
}