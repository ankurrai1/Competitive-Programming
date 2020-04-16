// Kangaroo problem of hacker rank is solved hacker

// problem statement link is as following

//https://www.hackerrank.com/challenges/kangaroo/problem\

// solution function is as following

string kangaroo(int x1, int v1, int x2, int v2) {
    if(v2 >= v1) return "NO";
    if(abs(x1 - x2) % (v2 - v1) == 0) return "YES";
    return "NO";
}
