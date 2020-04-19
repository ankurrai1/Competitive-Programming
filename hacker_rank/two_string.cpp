// the problem is to find whether the first string has some sub string of second string.

// problem statement link is as following
// https://www.hackerrank.com/challenges/two-strings/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=dictionaries-hashmaps&h_r=next-challenge&h_v=zen


// solution function is implimented as following

string twoStrings(string s1, string s2) {
    unordered_map<char, int> data;
    for(int i = 0; i < s1.size(); i++){
        char str = s1[i];
        if(data[str]) data[str]++;
        else{
            data[str] = 1;
        }
    }
    for(int i = 0; i < s2.size(); i++){
        char str = s2[i];
        if(data[str]) return "YES";
    }
    return "NO";
}
