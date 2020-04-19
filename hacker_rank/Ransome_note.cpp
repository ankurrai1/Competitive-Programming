// problem Question link is as following
// https://www.hackerrank.com/challenges/ctci-ransom-note/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps

// here only solution function is implimented;

// Complete the checkMagazine function below.
void checkMagazine(vector<string> magazine, vector<string> note) {
    unordered_map<string, int> data;
    for (auto e : magazine){
        if(data[e]) data[e]++;
        else data[e] = 1;
    }
    for(auto e: note){
        if(data[e] && data[e] > 0) data[e]--;
        else{
            cout << "No"<<"\n";
            return;
        }
    }
    cout << "Yes"<< "\n";
}
