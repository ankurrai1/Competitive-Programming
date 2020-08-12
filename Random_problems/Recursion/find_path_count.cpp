#include <bits/stdc++.h>

using namespace std;

// problem statement is as following
// you have to find total no of paths in m * n matrix form (0, 0) to (m , n)

int get_path_count(int, int);

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int m, n;
  cin >> m >> n;
  int path = get_path_count(m, n); // recurcive function
  cout << path << endl;
  return 0;
}

int get_path_count(int m, int n){
  if(m == 0 || n == 0) return 1;
  else return get_path_count(m -1, n) + get_path_count(m, n -1);
}


#include <bits/stdc++.h>

using namespace std;

void get_path_count(int, int);

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t ;
  cin >> t;
  while(t--){
      int m, n;
      cin >> m >> n;
      get_path_count(m, n);
  }
  return 0;
}


// dp solution of problem 
void get_path_count(int m, int n){
    // dp matrix
  long long int mem[n][m]={0};
         // top row only 1 way
         for(int i=0;i<n;i++){
             mem[i][0]=1;
         }
         // left most column only 1 way
         for(int i=0;i<m;i++){
             mem[0][i]=1;
         }

         for(int i=1;i<n;i++){
             for(int j=1;j<m;j++){

                 //        left cell  + upper cell
                 mem[i][j]=mem[i-1][j]+ mem[i][j-1];

                //  keeping in integer under flow
                 mem[i][j]%=1000000007;
             }
         }
         cout<<mem[n-1][m-1]<<endl;
}
