// contest Question

class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long ways = 0;
        int i = 0;
        while((total - (cost1*i)) >= 0){
            long long left = total - (i * cost1);
            long long other = (left / cost2);
            ways += (other+1) ;
            i++;
        }
        if(ways == 0) return 1;
        return ways;

    }
};
