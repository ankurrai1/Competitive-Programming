// problem statement is as following :
/*
Given K sorted arrays arranged in the form of a matrix. The task is to merge them.
 You need to complete mergeKArrays() function which takes 2 arguments,
  an arr[k][k] 2D Matrix containing k sorted arrays and an integer k denoting the number of sorted arrays.
   The function should return a pointer to the merged sorted arrays.
 */

// solution function is implimented here:


// this solution is by using prerioty queue as min heap;


typedef pair<int, int> pi;

class myComparator
{
public:
    int operator() (pi p1, pi p2)
    {
        return p1.first > p2.first;
    }
};

// your task is tocomplete this function
// function should return an pointer to output array int*
// of size k*

int *mergeKArrays(int arr[][N], int k)
{
    int n = 0, len = k * k;
    int *ar = new int[k*k];

    priority_queue<pi,vector<pi>, myComparator> pq;

    for(int i = 0; i < k; i++){
        pq.push(make_pair(arr[i][0],i));
    }

    while(!pq.empty()){
        int rank = pq.top().second;

        for(int i = 0; i < k; i++){
            ar[n] = arr[rank][i];
            n++;
        }
        pq.pop();
    }
    return ar;
}



// A Better solution approch to solve this problem in time complexity of O(n lon k);


typedef pair<int,pair<int,int>>pq;
int *mergeKArrays(int arr[][N], int k)
{
     int *res=new int[k*k];
     priority_queue<pq,vector<pq>,greater<pq>>q;
      for(int i=0;i<k;i++)
      {
          q.push(make_pair(arr[i][0],make_pair(i,0)));
      }
      int j=0;
     while(!q.empty())
     {

        pq curr=q.top();
         q.pop();
         res[j++]=curr.first;
         int iarr=curr.second.first;
         int iele=curr.second.second;
         if(iele<k-1)
         {
             q.push(make_pair(arr[iarr][iele+1], make_pair(iarr,iele+1) ));

         }


     }
     return res;
}
