#include<bits/stdc++.h>
using namespace std;


void printRectangularPattern(int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << " * " ;
        }
        cout <<endl;
    }
}

int main(){

    int row = 8, col = 5;
    printRectangularPattern(row , col);
    return 0;
}
