// #Day1
//Given an array of 0's and 1's your task is to complete the function maxLen
//which returns size of the largest sub array with equal number of 0's and 1's.

// solution function is as following

int maxLen(int arr[], int n){
    int res = 0, sum = 0, i;
    unordered_map <int, int> dataSet;
    for(i = 0; i < n; i++){
        if(arr[i] == 0)
        arr[i] = -1;
    }
    dataSet[0] = -1;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
        if(dataSet.find(sum) != dataSet.end()){
            res = max(res, i - dataSet[sum]);
        }
        else
        dataSet[sum] = i;

    }
    return res;
}
