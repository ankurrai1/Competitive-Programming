// Problem Question link is as following
// https://www.hackerrank.com/challenges/migratory-birds/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

// only solution function is written only

int migratoryBirds(vector<int> arr) {
    int i,ele,count=0;
    int pre_ele, pre_count = 0;
    sort(arr.begin(), arr.end());

    for(i = 0; i < arr.size(); i++){
        if(ele == arr[i]){
            count++;
        }
        else {
            if(pre_count < count){
                pre_ele = ele;
                pre_count = count;
            }
            ele = arr[i];
            count = 1;
        }
    }
    if(pre_count >= count) return pre_ele;
    else return ele;
}
