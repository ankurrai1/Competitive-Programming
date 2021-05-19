class Solution{
public:
    vector<int> jugglerSequence(int n){
        vector<int> res;
        res.push_back(n);
        while(n != 1){
            if(n & 1) n = sqrt(n) * n;
            else n = sqrt(n);
            res.push_back(n);
        }
        return res;
    }
}