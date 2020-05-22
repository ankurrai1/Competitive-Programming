// problem statement is as following
// Given two unsorted arrays arr1[] and arr2[]. They may contain duplicates.
// For each element in arr1[] count elements less than or equal to it in array arr2[].


// solution function is as following

// complexity O((m+n)logn)

int find_less_equal_count(int arr[], int start, int end, int ele ,int n){
    if (start < end){
        int mid = (end + start)/2;
        if(mid == n-1 || (arr[mid] <= ele && arr[mid + 1] > ele)) return mid;
        else if(arr[mid] > ele) return find_less_equal_count(arr,start,mid-1,ele,n);
        return find_less_equal_count(arr, mid + 1, end, ele, n);
    }
    else return arr[start] <= ele ? start : -1 ;
}
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
void countEleLessThanOrEqual(int arr1[], int arr2[],
                             int m, int n)
{
    sort(arr2, arr2 + n);
    for(int i = 0; i < m; i++){
        int count_sum = find_less_equal_count(arr2, 0, n-1, arr1[i], n) + 1;
        cout << count_sum << " ";
    }
}
