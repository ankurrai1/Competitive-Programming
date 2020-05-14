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
