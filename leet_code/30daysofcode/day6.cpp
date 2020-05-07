// problem statement is as following:
// Given an array of size n, find the majority element.
// The majority element is the element that appears more than ⌊ n/2 ⌋ times.


// solutin function implementation is here:

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int max = 0, max_e;
        for(int a : nums) freq[a]++;
        for(auto ele : freq){
            if(ele.second > max){
                max = ele.second;
                max_e = ele.first;
            }
        }
        return max_e;
    }
};
