/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long start = 0, end = n, mid, num;
        while(start <= end){
            mid = (start + end) / 2;
            int res = guess(mid);
            if(res == 0){
                num = mid;
                break;
            }
            if(res == -1) end = mid - 1;
            if(res == 1) start = mid + 1;
        }
        return num;
    }
};
