// problem statement is as following
// Given two sorted arrays. There is only 1 difference between the arrays.
// First array has one element extra added in between. Find the index of the extra element.

// solution is correct for above question but test cases are not testing properly;


int findIndex(int arr[],int start,int end, int n, int ele){
    if(start < end){
        int mid = (start + end)/2;
        cout << ele << " : " << arr[mid] << "\n";
        if(arr[mid] == ele) return mid;
        else if(arr[mid] > ele) return findIndex(arr,start,mid - 1, n , ele);
        return findIndex(arr,mid + 1, end, n , ele);
    }
    return -1;
}
/*Complete the function below*/
int findExtra(int a[], int b[], int n) {
    int sumA = 0, sumB = 0;
    for(int i = 0; i < n; i++) sumA+=a[i];
    for(int i = 0; i < n-1; i++) sumB+=b[i];
    int ele = sumA - sumB;
    return (findIndex(a,0,n-1,n,ele));
}
