// improved solution
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i1 = m - 1;
        int i2 = n - 1;
        int iFinal = m + n - 1;
        while(i1 >= 0 && i2 >= 0){
            if(nums1[i1] >= nums2[i2]){
                nums1[iFinal] = nums1[i1];
                i1--;
            }
            else{
                nums1[iFinal] = nums2[i2];
                i2--;
            }
            iFinal--;
        }
        while(i2 >= 0){
            nums1[iFinal] = nums2[i2];
            iFinal--;
            i2--;
        }
    }
};


// regular solution merge to sorted array
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> num;
        for(int ele : nums1){
            num.push_back(ele);
        }
        
        int i = 0 , j = 0, k = 0;
        while(i < m && j < n){
            if(num[i] <= nums2[j]){
                nums1[k] = num[i];
                i++;
                k++;
            }
            else{
                nums1[k] = nums2[j];
                j++;
                k++;
            }
        }
        while(i < m){
            nums1[k] = num[i];
            i++;
            k++;
        }
        while(j < n){
            nums1[k] = nums2[j];
            j++;
            k++;
        }
        
    }
};

