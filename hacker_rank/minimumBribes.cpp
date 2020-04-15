
// problem statement link is as following
// https://www.hackerrank.com/challenges/new-year-chaos/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays


// Completed the minimumBribes function is below.

void minimumBribes(vector<int> q) {
    int bribes = 0;
    for(int i = q.size() - 1; i >= 0; i--){
        int offset = q[i] -i -1;
        if(offset > 2) {
            cout << "Too chaotic\n";
            return;
        }
        for(int j = max(0,q[i]-2); j < i; j++){
            if(q[j] > q[i]) bribes++;
        }
    }
    cout << bribes;
    cout << "\n";
}
