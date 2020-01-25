// Ploblem Questin link of birthdayCakeCandles is as following
//https://www.hackerrank.com/challenges/birthday-cake-candles/problem?h_r=next-challenge&h_v=zen
//only solution function is as following

int birthdayCakeCandles(vector<int> ar) {
    int i, re = 0,max = 0;
    for(i=0; i<ar.size(); i++){
        if (ar[i]>max){
            max = ar[i];
            re = 1;
        }
        else if (ar[i]==max) re++;
    }
    return re;
}
