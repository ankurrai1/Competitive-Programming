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

// A Better approch to solve  same problem:

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = nums[0], frequency = 1;
        for(int a : nums){
            if(a!=majority){
                frequency--;
            }
            else frequency++;
            if(frequency == 0){
                majority = a;
                frequency = 1;
            }
        }
        return majority;
    }
};
