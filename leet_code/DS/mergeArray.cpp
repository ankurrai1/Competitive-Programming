// merge tow sorted array in one without using extra array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l1 = m -1,
            l2 = n -1,
            finalIdx = m + n -1;
        while(l1 >= 0 && l2 >= 0){
            if(nums2[l2] >= nums1[l1]){
                nums1[finalIdx--] =  nums2[l2--];
            }
            else
                nums1[finalIdx--] =  nums1[l1--];
        }

        while(l2 >= 0){
            nums1[finalIdx--] = nums2[l2--];
        }
    }
};
