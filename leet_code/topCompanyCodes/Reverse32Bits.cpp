// problem statement is as you have to reverse a 32 bit 


#include <bits/stdc++.h>

using namespace std;


// naive solution it willl run 32 times

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res;
        for(int i = 0; i < 32; i++){
            short temp = n & (1 << i)? 1 : 0;
            res |= temp << (31 - i);
        }
        return res;
    }
};

// optemized Solution will do only 4 oprations

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        n = ((n & 0xffff0000) >> 16) | ((n & 0x0000ffff) << 16); // getting 16 bits and swapping it only 
        // abcdefghijklmnop0000000000000000   |  0000000000000000ABCDEFGHIJKLMNOP 

        n = ((n & 0xff00ff00) >> 8) | ((n & 0x00ff00ff) << 8); // getting 8 - 8 bits in each group and swappin it
        n = ((n & 0xf0f0f0f0) >> 4) | ((n & 0x0f0f0f0f) << 4); // getting 4 - 4 bit and swappin it 
        n = ((n & 0xcccccccc) >> 2) | ((n & 0x33333333) << 2); // getting 2 - 2 bit pairs and swapping it
        n = ((n & 0xaaaaaaaa) >> 1) | ((n & 0x55555555) << 1); // getting 1 - 1 bit s in each group of two and swappin them 
        return n;
    }
};

//                                                        Hexadecimal Numbers

//                                        Decimal Number 	4-bit Binary Number 	Hexadecimal Number
//                                        0                	     0000                      0
//                                        1                      0001                      1
//                                        2                      0010                      2
//                                        3                      0011                      3
//                                        4                      0100                      4
//                                        5                      0101                      5
//                                        6                      0110                      6
//                                        7                      0111                      7
//                                        8                      1000                      8
//                                        9                      1001                      9
//                                        10                     1010                      A
//                                        11                     1011                      B
//                                        12                     1100                      C
//                                        13                     1101                      D
//                                        14                     1110                      E
//                                        15                     1111                      F
//                                        16                     0001 0000                 10 (1+0)
//                                        17                     0001 0001                 11 (1+1)