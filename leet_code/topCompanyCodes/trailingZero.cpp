// mixiture of 5 and 2 will make zero and two will always more then 5 so conting 5 will do our work.
// nearest multiple of 5 is the count of 5 in that

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        for(long long i = 5; n / i  > 0; i *= 5) count+= n/i;
        return count;
    }
};