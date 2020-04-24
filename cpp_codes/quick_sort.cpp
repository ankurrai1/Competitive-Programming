#include <bits/stdc++.h>
using namespace std;


int partition(int* arr,int start,int end){
	int pivot = arr[end];
	int j = start;
	for(int i = start; i < end; i++){
	    if(arr[i] <= pivot){
	        int temp = arr[i];
	        arr[i] = arr[j];
	        arr[j] = temp;
	        j++;
	    }
	}
	arr[end] = arr[j];
	arr[j] = pivot;
	return j;
}


// =============================================================================
// recursive quick sort function implementation here and array is passed by reference.
void quick_sort(int *Arr, int start, int end) {

	if(start < end) {
		int pivot = partition(Arr, start,end);
		quick_sort(Arr, start, pivot - 1);
		quick_sort(Arr, pivot + 1, end);
	}
};

// =================================================================
// runner function is as following.
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    quick_sort(arr,0,n-1);

    for(int i = 0; i < n; i++){
      cout << arr[i] << " ";
    }
    return 0;
}
