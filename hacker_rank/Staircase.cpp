// problem Question link is as following
// https://www.hackerrank.com/challenges/staircase/problem

// solution function is as following

// this function basically print a pattern of hight n and width n
// in this function is with time complexity O(n^2); 

void staircase(int n) {
    for(int i=1; i<=n; i++){
        for(int j=0; j<(n - i); j++) cout << " ";
        for(int k=0; k<i; k++) cout << "#";
        cout <<"\n";
    }
}
