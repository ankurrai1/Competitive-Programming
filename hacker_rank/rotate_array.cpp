// this problem is also solved in geeksforgeeks folder

// problem statement link is as following
// https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays




// Complete the rotLeft function below.
vector<int> rotLeft(vector<int> a, int d) {
    vector<int> res;
    for(int i = d; i < a.size(); i++){
        res.push_back(a[i]);
    }
    for(int i = 0; i < d; i++){
        res.push_back(a[i]);
    }
    return res;
}
