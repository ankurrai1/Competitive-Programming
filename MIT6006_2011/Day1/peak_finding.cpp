// the problem set is described as following
// You are given a array you have to find a peak in that one dimentional arrays
// What is the peak?
// Well the peak is the element of that array whose value is is grater or equal then it's neighbors.
// like if we have an array like array = {a,b,f,r,g,e,f,}
// b is peak if and only if b >= a and b >= f

#include <stdlib.h>
#include <bits/stdc++.h>

int get_peak(vector<int>);

// surely we can do that in O(n) time complexity but we need to achieve better than that here
// our goal is that we


// this in the case of sorted arrays otherwise question will be find a peek in array any peak;
int get_peak(int arr[],int start,int end, int n);

int main(){
  int a[7] = {1,2,3,4,5,6,9};
  int peak = get_peak(a,0,6,7);
  std::cout << peak << std::endl; // will print the index of the peak
  return 0;
}

// here the complexity of the following function is O(logn) and the complexity T(n) = T(n/2) + O(1)

int get_peak(int arr[],int start, int end, int n){
    int mid = (start + end)/2;
    if(mid > 0 && arr[mid] < arr[mid - 1])  return get_peak(arr,start,mid -1,n);
    else if(mid < n-1 && arr[mid + 1] > arr[mid]) return get_peak(arr,mid + 1,end,n);
    else return mid;
}
