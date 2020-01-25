// problem Question link is as following
// https://www.hackerrank.com/challenges/mini-max-sum/problem

void miniMaxSum(vector<int> arr) {
    int max_n = 0;
    int min_n = INT_MAX;
    unsigned long int sum = 0;
    for(int i=0; i<arr.size(); i++){
        int e = arr[i];
        sum += e;
        max_n = max(e,max_n);
        min_n = min(e,min_n);
    }
    cout << sum - max_n << " " << sum - min_n;
}
