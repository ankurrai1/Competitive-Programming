#include <bits/stdc++.h>

using namespace std;

void printPattern6(int n){
    for(int i = 0; i < n; i++){
        int str;
        if(i <= n/2) str = (n/2) + 1 - i;
        else str = i - n/2 + 1; 
        
        int sps = n+2 - (2 * str);
        
        for(int j = 0; j < str; j++) cout << "* ";
        for(int k = 0; k < sps; k++) cout << "  ";
        for(int j = 0; j < str; j++) cout << "* ";
        cout << endl;
    }
    
}

int main(){
    int num; // n will be always odd 
    cin >> num;
    printPattern6(num);
    return 0;
}