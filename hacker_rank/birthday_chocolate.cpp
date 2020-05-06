// problem statement link is as following :
// https://www.hackerrank.com/challenges/the-birthday-bar/problem;


// solution function implementation is as following :

int birthday(vector<int> s, int d, int m) {
    int c_sum = 0, res = 0, t = 0;
    for(int i = 0; i < m; i++) c_sum += s[i];
    if(c_sum == d) res++;
    for(int i = m; i < s.size(); i++,t++){
        c_sum -= s[t];
        c_sum += s[i];
        if(c_sum == d) res++;
    }
    return res;
}
