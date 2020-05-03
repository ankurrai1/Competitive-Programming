// problem statement is as follows:
/*
You are a product manager and currently leading a team to develop a new product.
Unfortunately, the latest version of your product fails the quality check.
Since each version is developed based on the previous version, all the versions after a bad version are also bad.
Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one,
which causes all the following ones to be bad.
You are given an API bool isBadVersion(version) which will return whether version is bad.
Implement a function to find the first bad version. You should minimize the number of calls to the API.
*/


// solution function is as following:

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int findfirst(int s, int e){
        if(s < e){
            long int mid = s + (e-s)/2;
            bool isMidBad = isBadVersion(mid);
            if(isMidBad && !isBadVersion(mid-1)) return mid;
            else if(!isMidBad)return findfirst(mid+1, e);
            else return findfirst(s,mid -1);
        }
        return s;
    }
    int firstBadVersion(int n) {
        return findfirst(1,n);
    }
};
