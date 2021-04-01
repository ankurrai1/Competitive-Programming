#include<bits/stdc++.h>
using namespace std;


void ZeroOnePattern(int n){
    bool isOne = true;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++ ){
            if(isOne) cout << " " << 1 << " ";
            else cout << " " << 0 << " ";
            isOne = !isOne;
        }
        if(i % 2 == 0) isOne = true;
        else isOne = false;
        cout<<endl;
    }
}

int main(){

    int n = 5;
    ZeroOnePattern(n);
    return 0;
}

// same complexity with less code

void ZeroOnePattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++ ){
            if((i+j) % 2 == 0) cout << " " << 1 << " ";
            else cout << " " << 0 << " ";
        }
        cout << endl;
    }
}

int main(){

    int n = 5;
    ZeroOnePattern(n);
    return 0;
}
