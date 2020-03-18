// added solution function for problem Bon Appétit at hacker rank


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
