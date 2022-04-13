#include <bits/stdc++.h>

using namespace std;

lass Solution {
    int mod = 1e9+7;
public:
	int FindWays(int r, int c, vector<vector<int>>blocked_cells){
	    vector<vector<int>> DP(r+1, vector<int> (c+1, -1));
	    for(auto ele : blocked_cells){
	        DP[ele[0]-1][ele[1]-1] = 0;
	    }

	    int ner = 1;
	    for(int i = 0; i < r; i++){
	        if(DP[i][0] == 0) ner = 0;
	        else DP[i][0] = ner;

	    }

	    int nec = 1;
	    for(int i = 0; i< c; i++){
	        if(DP[0][i] == 0) nec = 0;
	        else DP[0][i] = nec;
	    }

	    for(int i = 1; i < r; i++){
	        for(int j = 1; j < c; j++){
	            if(DP[i][j] == -1){
	                DP[i][j] = (DP[i-1][j] %  mod + DP[i][j-1] % mod) % mod;
	            }
	        }
	    }
	    // print DP
	   // for(int i = 0; i < r; i++){
	   //     for(int j = 0; j < c; j++){
	   //         cout << DP[i][j] << " ";
	   //     }
	   //     cout << endl;
	   // }

	    return DP[r-1][c-1];
	}
};
