//problem Question link
//https://www.hackerrank.com/challenges/plus-minus/problem?h_r=next-challenge&h_v=zen

// only solution function is there

void plusMinus(vector<int> arr) {
    int pos=0,neg=0,zero=0;
    int total = arr.size();
    for(int i = 0; i<total; i++){
        if(arr[i]>0) pos++;
        else if (arr[i]<0) neg++;
        else zero++;
    }
    cout << ((float)pos/total) <<"\n";
    cout << ((float)neg/total) <<"\n";
    cout << ((float)zero/total) <<"\n";
}
