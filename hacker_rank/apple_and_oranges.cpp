// here hackerrank problem Apple and Oranges are solved

//problem link is as following
// https://www.hackerrank.com/challenges/apple-and-orange/problem


// solution function is as following

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int i, appleCount = 0, orangeCount = 0, range;
    for(i = 0; i < apples.size(); i++){
        range = apples[i] + a;
        if(range >= s && range <= t) appleCount++;
    }
    for(i = 0; i < oranges.size(); i++){
        range = oranges[i] + b;
        if(range >= s && range <= t) orangeCount++;
    }
    cout << appleCount << "\n" << orangeCount;
}
