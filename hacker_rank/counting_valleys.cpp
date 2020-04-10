// here is solution function for problem Counting Valleys

// problem statement link is as following
// https://www.hackerrank.com/challenges/counting-valleys/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup

// solution function is as following

int countingValleys(int n, string s) {
    int vally = 0,
    level = 0,
    ups = 0;
    bool seenDown = false,
    goneThrough = false;
    for(int i = 0; i < n; i++){
        if(s[i] == 'U'){
            if(seenDown) {
                level++;
                goneThrough = true;
            }
            else ups++;
        }
        if(s[i] == 'D'){
            if(ups>0) ups--;
            else{
                 level--;
                 seenDown = true;
                 goneThrough = true;
                }
        }
        if (level == 0 and goneThrough) {
            vally++;
            goneThrough = false;
            seenDown = false;
        }
    }
    return vally;
}
