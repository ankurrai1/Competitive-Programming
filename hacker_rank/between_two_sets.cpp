// problem Question link is as following
//https://www.hackerrank.com/challenges/between-two-sets/problem


int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int getGcd(vector<int> b){
    int g = b[0];
    for(int i=1;i<b.size();i++){
         g=gcd(g,b[i]);
     }
     return g;
}


int getLcm(vector<int> b){
    int l = 1;
    for(int e : b){
        l = l*e/gcd(l,e);
    }
    return l;
}

int getTotalX(vector<int> a, vector<int> b) {
    int count = 0;
    int lcm = getLcm(a);
    int gcd = getGcd(b);
    int least = lcm;
    int index = 1;
    while(least <= gcd){
        least =  lcm * index;
        if(gcd % least == 0){
            count++;
        }
        index++;
    }
    return count;
}
