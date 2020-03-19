// solution function for hackerrank Problem Sock Merchant is as following

// Problem statement link is as following
//https://www.hackerrank.com/challenges/sock-merchant/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen


// solution function of problem statement is as following

int sockMerchant(int n, vector<int> ar) {
    std::map<std::string, int> socks;
    int pairs = 0;
    for(int i = 0; i < n; i++){
        string key = to_string(ar[i]);
        if(socks[key] && socks[key]==1){
            pairs++;
            socks[key] = 0;
        }
        else {
            socks[key] = 1;
        }
    }
    return pairs;
}
