// #Day2 30 april 2020
// problem statement is as following

//  Given an unsorted array arr of size N, rearrange the elements of array such that
//  number at the odd index is greater than the number at the previous even index.
//  The task is to complete the function formatArray() which will return formatted array.


// solution function implementation is here:

vector<int> formatArray(vector<int> a,int n)
{
    for(int i = 1; i < n; i+=2){
        if(a[i] < a[i -1]){
            int temp = a[i];
            a[i] = a[i-1];
            a[i -1] = temp;
        }
    }
    return a;
}
