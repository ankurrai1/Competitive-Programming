class Solution {
public:
    int countPrimes(int n) {
        vector<int> isPrime(n, 0);
        for(int i = 2;  i*i <= n; i++){
            if(isPrime[i] == 0){
                for(int j = 2 * i; j < n; j += i){
                    isPrime[j] = 1;
                }
            }
        }
        int count = 0;
        for(int i = 2; i < n; i++){
            if(isPrime[i] == 0) {
                count++;
            }
        }
        return count;
        
    }
};