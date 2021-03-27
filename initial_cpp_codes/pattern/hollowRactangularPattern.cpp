#include<bits/stdc++.h>
using namespace std;

//Ternery search using recursion
void hollowRectangularPattern(int row, int col){
    for(int i = 0; i < row; i++){
        cout << " * ";
        for(int j = 0; j < col - 2; j++){
            if (i == 0 || i == row - 1)  cout << " * ";
            else cout << "   " ;
        }
        cout<< " * " << endl;
    }
}

int main(){

    int row = 8, col = 5;
    hollowRectangularPattern(row , col);
    return 0;
}
