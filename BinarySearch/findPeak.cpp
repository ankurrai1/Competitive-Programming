class Solution {
private:
    int findPeak(vector<int> &arr, int s, int e){
        int mid = (s + e + 1) / 2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid + 1]) return mid;
        if(arr[mid] > arr[mid -1]) return findPeak(arr, mid + 1, e);
        return findPeak(arr, s, mid - 1);
    }
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        return findPeak(arr, 0, arr.size()-1);
    }
};


class Solution {

public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0 , e = arr.size() -1, mid;
        while(s <= e){
            mid = (s + e + 1) / 2;
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
            if(arr[mid] < arr[mid -1]) e = mid-1;
            else s = mid+1;
        }
        return mid;
    }
};
