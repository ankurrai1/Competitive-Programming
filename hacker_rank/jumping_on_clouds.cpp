// problem Jumping on the Clouds of hackerrank is soleved here

// problem statement link is as following
//https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=warmup



// solution function is as following


int jumpingOnClouds(vector<int> c) {
    int jumpsCount = 0,i = 0;
    while(i < c.size()-1){
        if(c[i+2] == 1){
            i++;
            jumpsCount++;
        }
        else{
            jumpsCount++;
            i+=2;
        }
    }
    return jumpsCount;
}
