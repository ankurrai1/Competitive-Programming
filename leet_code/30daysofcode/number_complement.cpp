// Day4
// problem statement is as following:
// Given a positive integer, output its complement number.
// The complement strategy is to flip the bits of its binary representation.

// Solution function is as following:

int findComplement(int num) {
    int x=1;
    while(pow(2,x)-1<num)
        x++;
    return pow(2,x)-1-num;
}
