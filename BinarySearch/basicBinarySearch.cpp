class Solution {
private:
    int searchEle(vector<int>& nums, int target, int s, int e){
        if(s == e) return -1;
        int mid = (s + e ) /2;
        if(nums[mid] == target) return mid;
        if(target < nums[mid]) return searchEle(nums, target, s, mid);
        return searchEle(nums, target, mid + 1, e);
    }
public:
    int search(vector<int>& nums, int target) {
        return searchEle(nums, target, 0, nums.size());
    }
};

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1, mid;
        while(s <= e){
            mid = (s + e + 1)/2;
            if(nums[mid] == target) return mid;
            if(target < nums[mid]) e = mid - 1;
            else s = mid + 1;
        }
        return -1;
    }
};
