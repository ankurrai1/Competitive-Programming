 //Given an array of size N consisting of only 0's and 1's ,which is sorted in such a manner that all the 1's are placed first
//and then they are followed by all the 0's. You have to find  the count of all the 0's.

// its verry easy to solve this problem with complexity O(n);
// here main task is to solve the problem in reduced form
// complexity will be O(log n)

// Solution is implementated as following

#include <bits/stdc++.h>
using namespace std;

int get_first_zero(int arr[], int start,int end){
    if (start == end && arr[start] == 1) return end+1;
    if(start < end){
        int mid = (start + end -1) / 2;
        if(arr[mid] == 1 && arr[mid+1] == 0) return mid+1;
        if(arr[mid] == 1 && arr[mid +1] == 1) return get_first_zero(arr,mid+1,end);
        return get_first_zero(arr,start, mid -1);
    }
    else return 0;
}

int main() {
    int n, i, t;
    cin >> t;
    while(t--){
        cin >> n;
        int arr[n];
        for(i = 0; i < n; i++){
            cin >> arr[i];
        }
        cout<< (n-get_first_zero(arr,0,n-1))<<"\n";
    }
	return 0;
}
