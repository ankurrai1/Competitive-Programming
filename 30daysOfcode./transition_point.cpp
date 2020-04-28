// #Day2
// problem statement si as following
//You are given a sorted array containing only numbers 0 and 1. Find the transition point efficiently. Transition point is a point where "0" ends and "1" begins.
// Note that, if there is no "1" exists, print -1.

// its verry easy to solve this problem with complexity O(n);
// here main task is to solve the problem in reduced form
// complexity will be O(log n)

// Solution Function to find the transition point

int searchfirst1(int arr[],int s,int e){
    if(s == e && arr[s] == 1) return s;
    if(s < e){
      int mid =(s+e-1)/2;
      if(arr[mid] == 1 && arr[mid-1] == 0) return mid;
      if(arr[mid] == 0 ) return searchfirst1(arr,mid+1,e);
      else return searchfirst1(arr,s,mid-1);
    }
    return -1;
}

int transitionPoint(int arr[], int n) {
    return searchfirst1(arr, 0, n-1);
}
