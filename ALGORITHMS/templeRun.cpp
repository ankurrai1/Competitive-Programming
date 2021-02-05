// HackerRank Question

// Shubham and Ujjwal challenged each other in the game "Temple Run".

// Ujjwal set some random m targets. Shubham played the game n times making random scores on each turn.

// Can you tell at which turn Shubham will be able to achieve Ujjwal's target ?

#include<bits/stdc++.h>

using namespace std;

int main(){
    int noOfGames, noOfTargets;
    cin >> noOfGames;
    int randomScores[noOfGames];
    for(int i = 0; i < noOfGames; i++) cin >> randomScores[i];
    cin >> noOfTargets;
    int targets[noOfTargets];
    for(int i = 0; i < noOfTargets; i++) cin >> targets[i];
    for(int i = 1; i <= noOfGames; i++) randomScores[i] += randomScores[i-1];
    for(int i = 0; i < noOfTargets; i++){
        int j = 0;
        for(; j < noOfGames; j++){
            if(randomScores[j] >= targets[i]) break;
        }
        if(j == noOfGames) cout << -1 <<endl;
        else cout << (j + 1)<< endl;
    }
}