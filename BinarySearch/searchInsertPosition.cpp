// Recursive Solutions

class Solution {
private:
    int searchPositions(vector<int> &nums, int &target, int start, int end){
        if(start > end ) return start;
        int mid = (start + end ) / 2;
        if(nums[mid] == target) return mid;
        if(target < nums[mid] ) return searchPositions(nums, target, start, mid -1);
        return searchPositions(nums, target, mid +1 , end);

    }
public:
    int searchInsert(vector<int>& nums, int target) {
        return searchPositions(nums, target, 0, nums.size()-1);
    }
};


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, e = nums.size() -1, mid;
        while(s <= e){
            mid = ( s + e ) / 2;
            if(nums[mid] == target) return mid;
            if(nums[mid] < target) s = mid + 1;
            else e = mid - 1;
        }
        return s;
    }
};
