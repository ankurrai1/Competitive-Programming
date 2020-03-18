// added solution function for problem Bon Appétit at hacker rank

// problem statement is at following like
//https://www.hackerrank.com/challenges/bon-appetit/problem?h_r=next-challenge&h_v=zen

// Solution function is as follwing
void bonAppetit(vector<int> bill, int k, int b) {
    int sum = 0;
    for(int i = 0; i < bill.size(); i++){
        sum += bill[i];
    }
    int diff = b - (sum - bill[k])/2;
    if(diff == 0){
        cout << "Bon Appetit";
    }
    else cout << diff;
}
